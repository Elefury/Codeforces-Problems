#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	string cv;
	string v="aeiou";
	for (int i=0; i<str.size(); i++) {
		if (i==0) {
	if (v.find(str[i])!=-1||str[i]=='y')
		cv+='V';
		 else cv+='C';
		} else if (v.find(str[i])!=-1||(str[i]=='y'&&cv[i-1]=='C'))
			cv+='V';
		else cv+='C';
	}
	cout << cv;
}