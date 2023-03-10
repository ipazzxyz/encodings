#include <iostream>
#include <vector>
using namespace std;
int main() {
    int size = 0, direction = 0, x = 0, y = 0;
    string s;
    cin >> s;
    vector<string> a;
    while(s != "0") {
        size += s.size();
        a.push_back(s);
        cin >> s;
    }
    for(int i = 0; i < size; i++) {
        cout << a[y][x];
        switch(direction) {
            case 0:
                x++;
                direction++;
                break;
            case 1:
                x--;
                y++;
                if(x == 0)
                    direction++;
                break;
            case 2:
                y++;
                direction++;
                break;
            case 3:
                x++;
                y--;
                if(y == 0)
                    direction = 0;
                break;
        }
    }
}