#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int i=num.size()-1;
	int trans=0;
	while (num[i]=='9') {
		num[i]='0';
		i--;
		trans=1;
	}
	if (num[0]=='0'&&trans==1) {
	    auto a = num.cbegin();
		num.insert(a, '1');
		}
		num[i]++;
		cout << num;
}