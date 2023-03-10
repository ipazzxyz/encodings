#include <iostream>
using namespace std;
int main() {
    system("chcp 1251");
    int a;
    cin >> a;
    while(a > 0) {
        cout << (char)a;
        cin >> a;
    }
}

/*
Последовательность должна оканчиваться 0.
*/