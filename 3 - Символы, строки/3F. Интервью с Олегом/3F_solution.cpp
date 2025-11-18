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
	auto a = s.cbegin();
	int o;
	for (int i=0;i<s.size();i++) {
			if (s.find("ogo")!=-1) {
				o=s.find("ogo");
				int j=o;
				for (j; j<o+3; j++) {
					s[j]='*';
				}
				if (j+1>=s.size()) {break;}
				while (s[j]=='g'&&s[j+1]=='o') {
					s.erase(a+j);
					s.erase(a+j);
					if (j+1>=s.size()) {break;}
				}
			}
	}
	cout << s;
}