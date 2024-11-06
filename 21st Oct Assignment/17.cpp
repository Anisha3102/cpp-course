// 17. Extract Day from Date String
// Story: A delivery tracking system stores delivery dates as "15-09-2024". Extract the day (15) and convert it to an integer.
// Goal: Extract and convert the day from the date string.

#include<bits/stdc++.h>
using namespace std;

int extractDay(const string& date) {

    string dayStr = date.substr(0, 2);
    
    return stoi(dayStr);
}

int main() {
    string dateStr = "15-09-2024";
    int day = extractDay(dateStr);
    
    cout << "Extracted Day: " << day << endl; 
    

    
    return 0;
}
