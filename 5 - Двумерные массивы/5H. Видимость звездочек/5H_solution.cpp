#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;
int main ()
{
	int n,m;
	cin >> n >> m;
	int kol=0,max=0;
	vector <vector <char>> a(n, vector <char> (m));
	
	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {  
			cin >> a[i][j];
		}
	}

	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {
			int g=0;
			
			if (a[i][j]=='*') {
			for (int i2=i; i2<n; i2++) {
				if (a[i2][j]=='*') g++;
				else break;
			}
			for (int i2=i; i2>=0; i2--) {
				if (a[i2][j]=='*') g++;
				else break;
			}
			for (int j2=j; j2<m; j2++) {
				if (a[i][j2]=='*') g++;
				else break;
			}
			for (int j2=j; j2>=0; j2--) {
				if (a[i][j2]=='*') g++;
				else break;
			}
			g-=3;
			}

			if (g>max) {
				max=g;
				kol=0;
			}
			if (g==max) kol++;

		}
	}
	cout << max << " " << kol;
}