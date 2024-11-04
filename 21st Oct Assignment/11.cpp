// 11. Convert Time in String to Float Hours
// Story: A company stores working hours like "08:30" as strings. Convert it to the float 8.5 representing the total hours worked.
// Goal: Convert a time string to a float value.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string timeStr = "08:30";

    size_t colonPos = timeStr.find(':');
    int hours = stoi(timeStr.substr(0, colonPos));
    int minutes = stoi(timeStr.substr(colonPos + 1));

    float totalHours = hours + (minutes / 60.0);

    cout << "Total Hours: " << totalHours << endl;
    return 0;
}

