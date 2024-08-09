// Q-8
// Write a C++ function that takes a person's weight and height as arguments and returns their Body Mass Index (BMI) category (Underweight, Normal weight, Overweight, Obese) using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string BMICategory(int height, int weight)
{
    double bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        return "Underweight";
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        return "Normal weight";
    }
    else if (bmi >= 25.0 && bmi < 29.9)
    {
        return "Overweight";
    }
    else
    {
        return "Obese";
    }
}

int main()
{
    int height, weight;
    cout << "Enter height and weight respectively : ";
    cin >> height >> weight;

    cout << BMICategory(height, weight);

    return 0;
}