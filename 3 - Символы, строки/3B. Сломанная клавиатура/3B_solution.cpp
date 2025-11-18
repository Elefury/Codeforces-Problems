#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int g=1;
		for (int i=1;i<s.size();i++) {
			if (s[i]==s[i-1]) {g++;}
			else if (g>2) {
					s.erase(s.begin()+i-g+1, s.begin()+i-1);
					i-=g;
					g=1;
			} else {g=1;}
		}
		if (g>2) {
					s.erase(s.end()-g+1, s.end()-1);
		}
		cout << s;
}