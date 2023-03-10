#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    while(a != "0") {
        cout << stoi(a, 0, 2) << ' ';
        cin >> a;
    }
}

/*
Последовательность должна оканчиваться 0.
*/