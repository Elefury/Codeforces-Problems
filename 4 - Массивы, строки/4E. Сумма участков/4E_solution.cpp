#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;
int main ()
{
	int n, m, ans=0;
	cin >> n >> m;
	vector <int> a(n);
 
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int sum;
	for (int i=0; i<n; i++) {
		sum=0;
		for (int j=i; j<n; j++) {
			sum+=a[j];
			if (sum==m) {ans++;}
		}
	}
	cout << ans;
}