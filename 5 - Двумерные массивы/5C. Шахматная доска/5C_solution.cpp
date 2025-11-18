#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;
int main ()
{
	int n,m,v1=0,v2=0;
	cin >> n >> m;
	char a[1005][1005];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
			if ((a[i][j]=='*'&&(i+j)%2==0)||a[i][j]=='.'&&(i+j)%2==1) {
				v1++;
			} else v2++;
		}
	}
v1>v2? cout << m*n-v1 : cout << m*n-v2;
	}