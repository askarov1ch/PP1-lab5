#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    cout << "Enqueue: ";
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "Dequeued: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}

