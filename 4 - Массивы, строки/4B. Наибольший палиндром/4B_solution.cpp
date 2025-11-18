#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int k;
	string s;
	cin >> k >> s;
	auto b = s.cbegin();
	vector <string> a(s.size());
	int i=0;
	while (s.find("...")!=-1||s.find(".")!=-1) {
		if (s.find("...")<=s.find(".")) {
			int j=s.find("...");
			for (int k=0; k<j+3; k++) {
				a[i]+=s[0];
				s.erase(b);
			} } else {
				int j=s.find(".");
				for (int k=0; k<j+1; k++) {
				a[i]+=s[0];
				s.erase(b);
				}
			}
			i++;
	}
	cout << a[k-1];
}