#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;
int main ()
{
	int n,m,g=0,ans=0;
	cin >> n >> m;
	char a[1005][1005];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
			if (a[i][j]=='*') {
				g++;
		}
			if (g==m) {
				ans++;
			}
		}
		g=0;
	}

	for (int j=0; j<m; j++) {
		for (int i=0; i<n; i++) {
			if (a[i][j]=='*') {
				g++;
			}
			if (g==n) {
				ans++;
			}
		}
		g=0;
	}
	cout << ans;
}