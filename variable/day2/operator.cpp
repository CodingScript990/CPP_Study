#include <iostream>

int main() {
    using namespace std;

    int a = 10;
    int b = 2;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    int c, d, e;

    c = d = e = 10; // c[10], d[10], e[10] => 10 "대입"
    e += d; // e[10] + d[10] => 20 "+연산"

    cout << "c : " << c << endl;
    cout << "e : " << e << endl;

    return 0;
}