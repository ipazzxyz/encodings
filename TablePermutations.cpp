#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Key {
public:
    char character;
    int position;
    vector<char> row;
    Key(char character, int position): character(character), position(position) {}
};
bool comp1(Key k1, Key k2) {
    return (k1.character < k2.character) or (k1.character == k2.character and k1.position < k2.position);
}
bool comp2(Key k1, Key k2) {
    return (k1.position < k2.position);
}
int main() {
    string password, string;
    getline(cin, password);
    getline(cin, string);
    vector<Key> dictionary;
    for(int i = 0; i < password.size(); i++)
        dictionary.emplace_back(password[i], i);
    sort(dictionary.begin(), dictionary.end(), comp1);
    for(int i = 0; i < password.size(); i++)
        for(int j = 0; j < string.size() / password.size(); j++)
            dictionary[i].row.push_back(string[string.size() / password.size() * i + j]);
    sort(dictionary.begin(), dictionary.end(), comp2);
    for(int i = 0; i < string.size() / password.size(); i++)
        for(int j = 0; j < password.size(); j++)
            cout << dictionary[j].row[i];
}