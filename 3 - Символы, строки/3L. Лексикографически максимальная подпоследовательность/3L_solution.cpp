#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s,a;
	cin >> s;
	a.reserve(100000);
	for (int i=s.size()-1;i>=0;i--) {
		if (i==s.size()-1) {
			a+=s[i];
		} else {
			if (s[i]>=a[a.size()-1])
			a+=s[i];
		}
	}
	for (int i=a.size()-1;i>=0;i--) {
		cout << a[i];
	}
	return 0;
}