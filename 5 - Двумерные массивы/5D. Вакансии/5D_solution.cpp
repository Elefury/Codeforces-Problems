#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;
int main ()
{
	int n,m;
	cin >> n >> m;
	vector <vector <int>> a(n, vector <int> (m));
	vector <vector <int>> b(m, vector <int> (n));

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}

	int sum=0, bs=0,bc=0;
	for (int k=0; k<min(m,n); k++) {
		int mini=1000001;
	for (int i=0; i<a.size(); i++) {
		for (int j=0; j<a[i].size(); j++) {
			if (a[i][j]<mini) {
				mini=a[i][j];
				bs=i;
				bc=j;
			}
		}
	}
		sum+=mini;
		a.erase(a.begin()+bs);
		for (int i=0; i<a.size(); i++) {
			a[i].erase(a[i].begin()+bc);
		}
	}

	cout << sum;
}