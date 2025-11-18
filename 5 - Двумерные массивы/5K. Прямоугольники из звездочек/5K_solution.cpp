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
	int colmax=0,strmax=0;
	vector <vector <char>> a(n, vector <char> (m));
	vector <int> str(n, 0);
	vector <int> col(m, 0);
	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {  
			cin >> a[i][j];
		}
	}

	int ans=0;

	for (int i=0; i<n; i++) {
	for (int j=0; j<m; j++) {
		if (a[i][j]=='*')
		for (int i1=i+1; i1<n; i1++) {
		for (int j1=j+1; j1<m; j1++) {
		
			if (a[i][j1]=='*'&&a[i1][j1]=='*'&&a[i1][j]=='*') {ans++;}
		}
		}
	}
	}
	cout << ans;
}