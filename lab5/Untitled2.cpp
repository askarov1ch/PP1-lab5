#include <iostream>
#include <stack>
using namespace std;

int main() {
    string input, reversed;
    cout << "Enter a string: ";
    cin >> input;

    stack<char> s;
    for (char c : input)
        s.push(c);

    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}

