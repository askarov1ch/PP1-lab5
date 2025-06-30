#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	stack<int> s;
cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; ++i) {
	cin >> x;
	s.push(x);
	
    }
    cout << "stack(top to bottom):";
    while (!s.empty()){
    	cout << s.top()<< " ";
    	s.pop();
	}
	return 0;
}
