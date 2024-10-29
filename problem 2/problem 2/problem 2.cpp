//take month from user and convert it to hours minutes and seconds
#include <iostream>
using namespace std;

int main() {
    int months;
    int days_per_month = 30;
    int hours_per_day = 24;
    int minutes_per_hour = 60;
    int seconds_per_minute = 60;
    cout << "enter many of months: ";
    cin >> months;
    int total_days = months * days_per_month;
    int total_hours = total_days * hours_per_day;
    int total_mintes = total_hours * minutes_per_hour;
    int total_seconds = total_mintes * seconds_per_minute;

    cout << "many of month:" << months << "itis equal:\n";
    cout << total_days << "days \n";
    cout << total_hours << "hour \n";
    cout << total_mintes << "minte \n";
    cout << total_seconds << "second \n";

    return 0;


}