#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;
int main ()
{
	int n,m,maxi=0,maxj=0,mini=1000,minj=1000;
	cin >> n >> m;
	char a[1005][1005];
 
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
			if (a[i][j]=='*') {
				if (i>maxi) {
					maxi=i;
				}
				if (i<mini) {
					mini=i;
				}
				if (j>maxj) {
					maxj=j;
				}
				if (j<minj) {
					minj=j;
				}
			}
		}
	}
	cout << max(maxi-mini+1,maxj-minj+1);
}