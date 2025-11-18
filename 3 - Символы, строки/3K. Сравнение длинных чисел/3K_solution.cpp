#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string num1, num2;
	cin >> num1 >> num2;
	auto a = num1.cbegin();
	auto b = num2.cbegin();
	int h=0;
	while ((num1[h]=='0')&&(num1.size()>h)) {
		h++;
	}
	int j=0;
	while (num2[j]=='0'&&num2.size()>j) {
		j++;
	}
	
	if (num1.size()-h>num2.size()-j) {
		cout << ">";
	} else if (num1.size()-h<num2.size()-j) {
		cout << "<";
	} else {
	while (num1[h]==num2[j]&&h<num1.size()) {
	j++;
	h++;
	}
	if (num1[h]>num2[j]&&h<num1.size()) {
		cout << ">";
	} else if (h<num1.size()) {
		cout << "<";
	} else {
		cout << "=";
	}
	}
}