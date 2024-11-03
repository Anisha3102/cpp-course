// 8. Find Character at Specific Index
// Story: A professor needs to find the 5th character of a student's ID, which is a string like "STUD98765".
// Goal: Print the character at index 4.


#include<bits/stdc++.h>
using namespace std;

int main(){
  string studentID = "STUD98765";


    char fifthCharacter = studentID[4];


    cout << "The 5th character of the student ID is: " << fifthCharacter << endl;

    return 0;
}
