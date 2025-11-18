#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
		cin >> b[i];
}
	int max=0, x; 
	for (int i=0; i<n; i++) {
		max=a[i];
		x=i;
		for (int j=i+1; j<n; j++) {
			
			if (a[j]>max) {
				max=a[j];
				x=j;
				} else if (a[j]==max) {
				    if (b[j]>=b[x]) {
				        x=j;
				    }
				}
			
		}
			swap(a[x],a[i]);
			swap(b[x],b[i]);
		}
	for (int i=0; i<n; i++) {
		//cout << a[i] << " - " << b[i] << endl;
	}
	int min=0;
	for (int i=n-1; i>=0; i--) {
		if (i==n-1) { min=b[i];
		} else if (b[i]<min) {
			min=a[i]; } else {
				min=b[i]; }
	}
	cout << min;
}