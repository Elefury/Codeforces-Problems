#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <string> a(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
		sort(a[i].begin(), a[i].end());
	}
	for (int i=0; i<n; i++) {
		int j=0, g=0;
		while (j+1<a[i].size()) {
			if (a[i][j+1]!=a[i][j]+1) {
				g++;
				break;
			}
			j++;
		}
		if (g==0) {
				cout << "Yes\n";
			} else {
				cout << "No\n";
			}
	}
}