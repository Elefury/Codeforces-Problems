#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main () {
	int n, ans=INT_MIN;
	cin >> n;
	vector <int> a(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i]>=500001) {
			ans=max(ans,1000000-a[i]);
		} else {
			ans=max(ans,a[i]-1);
		}
	}
	cout << ans;
}