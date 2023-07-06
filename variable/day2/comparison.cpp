#include <iostream>

int main() {

    using namespace std;

    int numOfWatermelons = 3;

    cout << "watermelons : " << numOfWatermelons << endl;
    cout << "numOfWatermelons >= 2 : " << (numOfWatermelons >= 2) << endl; // 1은 true, 0은 false란 뜻
    cout << "numOfWatermelons < 2 : " << (numOfWatermelons < 2) << endl; 
    cout << "numOfWatermelons == 2 : " << (numOfWatermelons == 2) << endl; 
    cout << "!(numOfWatermelons) == 2 : " << !(numOfWatermelons == 2) << endl; 
    cout << "!true : " << !true << endl; 
    cout << "!false : " << !false << endl; 
    cout << "(false && fasle) : " << (false && false) << endl; 
    cout << "(false || true) : " << (false || true) << endl; 

    return 0;
}