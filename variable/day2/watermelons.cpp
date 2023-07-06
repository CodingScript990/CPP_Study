#include <iostream>

int main() {
    using namespace std;

    int numOfWatermelons = 3;
    int bonus = 2;

    // 현재 수박 개수
    cout << "I have " << numOfWatermelons << " watermelons" << endl;

    // 현재 수박 개수 + 보너스로 받은 수박 개수
    numOfWatermelons = numOfWatermelons + bonus;

    // 총 수박개수
    cout << "Total(Watermelons) : " << numOfWatermelons << endl;

    return 0;
}