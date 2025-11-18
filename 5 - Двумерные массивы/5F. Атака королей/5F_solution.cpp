#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;
int main ()
{
	int n,m,k;
	cin >> n >> m >> k; //n-str, m-clm
	int x,y,ans=0;
	vector <vector <int>> a(n, vector <int> (m,0));
	for (int i=0; i<k; i++) {
		cin >> x >> y; //x-str #!, y-col #!
		a[x][y]=-9;
		
		if (y+1!=m&&x+1!=n)
		a[x+1][y+1]++;
		
		if (x+1!=n)
		a[x+1][y]++;
		
		if (x+1!=n&&y-1!=-1)
		a[x+1][y-1]++;
	
		if (y+1!=m)
		a[x][y+1]++;
		
		if (y-1!=-1)
		a[x][y-1]++;
		
		if (x-1!=-1)
		a[x-1][y]++;
		
		if (x-1!=-1&&y+1!=m)
		a[x-1][y+1]++;
	
		if (y-1!=-1&&x-1!=-1)
		a[x-1][y-1]++;
		
	}
	
	for (int i=0; i<n; i++) {  // am of str (y)
		for (int j=0; j<m; j++) {  // am of col (x)
			if (a[i][j]>0) {ans++;}
		}
	}
	
	/*for (int i=0; i<n; i++) {  // am of str (y)
		for (int j=0; j<m; j++) {  // am of col (x)
			cout << a[i][j] << " "; } cout << endl;
		}*/

	cout << ans;
}