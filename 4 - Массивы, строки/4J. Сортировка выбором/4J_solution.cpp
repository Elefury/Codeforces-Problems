#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int j=-1;
	while (n>0) {
	
		j++;
		int mx=INT_MIN;
		int g=0;
	for (int i=0; i<n; i++) {
		if (a[i]>mx) {
			mx=a[i];
			g=i;
		}
	}
	swap(a[n-1],a[g]);
		b[j]=g;
		n--;
	}

	for (int i=0; i<b.size(); i++) {
		
		cout << b[i] << " ";
	}
}