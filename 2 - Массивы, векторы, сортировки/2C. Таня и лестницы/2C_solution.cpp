#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,k=1;
    cin >> n;
    vector <int> a(n);
	vector <int> b(n);
    for(int i=0; i < n; i++) {
        cin >> a[i];
		b[i]=0;
	}
	for (int i=1; i < n; i++) {
		if (a[i]!=a[i-1]+1) {
			k++; b[i-1]=a[i-1];
		}
		if (i==n-1) {b[i]=a[i];}
	}
	if (n==1) {b[0]=1;}
	cout << k << endl;
	for (int i=0; i<n; i++) {
		if (b[i]>0) {
			cout << b[i] << " "; }
	}
}