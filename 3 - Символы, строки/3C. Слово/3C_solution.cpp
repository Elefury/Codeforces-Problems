#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int big=0,sm=0;
		for (int i=0;i<s.size();i++) {
			if (s[i]>=65&&s[i]<=90) 
				big++;
			else 
				sm++;
		}
	if (sm>=big) {
		for (int i=0;i<s.size();i++) {
			if (s[i]>=65&&s[i]<=90) 
				s[i]+=32;
		}
	} else { 
		for (int i=0;i<s.size();i++) {
			if (s[i]<65||s[i]>90) 
				s[i]-=32;
		}
	}
	cout << s;
}