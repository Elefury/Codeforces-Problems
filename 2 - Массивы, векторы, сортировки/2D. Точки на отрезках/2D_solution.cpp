#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int k=m;
	vector <int> l(n);
	vector <int> r(n);
	vector <int> p(m,1);
	for (int i=0; i<n; i++) {
		cin >> l[i];
		cin >> r[i];
	}
	for (int i=0; i<n; i++) {
		for (l[i]; l[i]<=r[i]; l[i]++) {
			p[l[i]-1]=0;
		}
	}
	for (int i=0; i<m; i++) {
		if (p[i]==0) {k--;}
	}
	cout << k << endl;
	for (int i=0; i<m; i++) {
		if (p[i]==1) {cout << i+1 << " ";}
	}
}