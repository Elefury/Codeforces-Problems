#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n, skl=0, ans=0;
	cin >> n;
	vector <int> a(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<a.size(); i++) {
		if (a[i]<=skl) {
			ans++;
			skl+=((a[i]+1)/2)+1;
			a.erase(a.begin()+i);
			i=-1;
		}
	}
	cout << ans;
}