#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int r=0;
	if (s.size()%2==0) {
		for (int i=0;i<s.size()/2;i++) {
			if (s[i]!=s[s.size()/2+i]) {
				r=1;
			}
		}
	}
	if (s.size()%2==0&&r==0) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}