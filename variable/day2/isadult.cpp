#include <iostream>

int main() {
    using namespace std;

    int year, month, day;

    cout << "Year? " << endl;
    cin >> year;

    cout << "Month? " << endl;
    cin >> month;

    cout << "Day? " << endl;
    cin >> day;

    cout << year << "-" << month << "-" << day << endl;

    int thisYear = 2021;

    int isAdult = (thisYear - year) >= 20;

    cout << "Adult(1) non Adult(0) : " << isAdult << endl;

    return 0;
}