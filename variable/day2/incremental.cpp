#include <iostream>

int main() {
    using namespace std;

    int watermelons = 3;

    // () : 정답을 의미!
    // (3)
    cout << "watermelons : " << watermelons << endl; 
    // (3) => 3 + 1[3을 표현하고 +1을 더함]
    cout << "watermelons++ : " << watermelons++ << endl; 
    // 1 + 4 = (5)[위에서 +1값을 더한 값이 이미 4인데 앞쪽 증감식은 먼저 +1을 해주고 값을 표현한다는 의미]
    cout << "++watermelons : " << ++watermelons << endl;

    cout << "---------------------" << endl; 

    // (5)
    cout << "watermelons : " << watermelons << endl; 
    // (5) => 5 - 1[3을 표현하고 -1을 빼줌]
    cout << "watermelons-- : " << watermelons-- << endl; 
    // 4 - 1 = (3)[위에서 -1값을 뺀 값이 이미 4인데 앞쪽 증감식은 먼저 -1을 해주고 값을 표현한다는 의미]
    cout << "--watermelons : " << --watermelons << endl; 

    return 0;
}