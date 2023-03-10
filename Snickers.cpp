#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> capital;
    string input;
    getline(cin, input);
    string answer(input.size(), (char)0);
    for(int i = 0; i < input.size(); i++)
        if(input[i] < 128 and input[i] >= 0) {
            answer[i] = input[i];
        } else if(isupper(input[i])) {
            capital.push(i);
            cout << input[i];
        }
    for(int i = input.size() - 1, j = 0; i >= 0; i--)
        if(!(input[i] < 128 and input[i] >= 0)) {
            while(answer[j] != (char)0)
                j++;
            answer[j] = tolower(input[i]);
        }
    while(!capital.empty()) {
        answer[capital.top()] = toupper(answer[capital.top()]);
        capital.pop();
    }
    cout << answer;
}

/*
Надо переопределить функции isupper(), tolower(), toupper() для букв русского алфавита.
*/