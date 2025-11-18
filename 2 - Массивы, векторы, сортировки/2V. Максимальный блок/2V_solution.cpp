#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> num(n);
	int sum=0,mx=-10001;
	for (int i=0; i<n; i++) {
		cin >> num[i];
		sum+=num[i];
		if (sum>mx) {mx=sum;}
		if (sum<0) {sum=0;}
	}
	cout << mx;
}