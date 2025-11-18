#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,x,y;
	cin >> n >> x >> y;
	int s=n+x+y;
    vector <int> a(s);
    for(int i = 0; i < s; i++) {
		if (i<x||i>=n+x) {
			a[i]=1000000001; 
		} else { 
			cin >> a[i];
		}
	}
	int k=0;
	for (int i=x; i<n+x; i++) {
		for (int j=i-x; j<=i+y; j++) {
			if (j!=i&&a[j]<=a[i]) {k++;}
			}
		if (k==0) {
				cout << i-x+1;
				break;
		}
		k=0;
	}
}