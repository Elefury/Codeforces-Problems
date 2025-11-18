#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	char g;
	cin >> n;
	string s = "";
	for (int i=0;i<n;i++) {
		cin >> g;
		s+=g;
	}
	int l=0;
	for (int i=0;i<26;i++) {
			if (s.find(i+65)==-1&&s.find(i+97)==-1) {
				l=1;
				break;
			}
		}
	if (l==0) {
		cout << "YES"; }
	else { cout << "NO";
	}
}