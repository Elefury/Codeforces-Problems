#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,mx=-1000000001,mn=1000000001,p=-1;
	cin >> n;
	vector <int> l(n);
	vector <int> r(n);
	for (int i=0; i<n; i++) {
		cin >> l[i] >> r[i]; 
		if (l[i]<mn) {p=-1; mn=l[i];}
		if (r[i]>mx) {p=-1; mx=r[i];}
		if (l[i]<=mn&&r[i]>=mx) {
		p=i+1; mn=l[i]; mx=r[i]; }
	}
	cout << p;
}