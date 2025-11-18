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
	vector <vector <char>> a(n, vector <char> (m));
	vector <int> k(m,0);
	vector <vector <char>> res(n, vector <char> (m,'.'));
	
	for (int i=0; i<n; i++) {
		
		for (int j=0; j<m; j++) {
			
			cin >> a[i][j];
			
			if (a[i][j]=='*') {
			
				k[j]++;
			}
		}
	}
	
	int min=1001;
	for (int j=0; j<m; j++) {
		if (k[j]<min) min=k[j];
	}
	for (int j=m-1; j>=0; j--) {
		for (int i=n-1; i>=n-k[j]+min; i--) {
			res[i][j]='*';
		}
	}
	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {
			cout << res[i][j];
		}
		cout << endl;
	}
}