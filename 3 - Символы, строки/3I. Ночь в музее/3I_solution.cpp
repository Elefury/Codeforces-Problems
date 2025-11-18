#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int sw=0;
	for (int i=0; i<num.size(); i++) {
		if (i==0) {
			if (abs('a'-num[0])<=13) {
				sw+=abs('a'-num[0]); 
			} else {
				sw=sw+26-abs('a'-num[0]);
			}
		} else {
			if (abs(num[i-1]-num[i])<=13) 
			{
				sw+=abs(num[i-1]-(num[i]));
			} else {
				sw=sw+26-abs(num[i-1]-num[i]);
			}
		}
	}
		cout << sw;
	}