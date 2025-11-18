#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;
int main ()
{
	int n=10, m=10, ans=1;
	vector <vector <char>> a(n, vector <char> (m));
	vector <int> k;
	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {  
			cin >> a[i][j];
		}
	}
 
	for (int i=0; i<n; i++) {
 
		for (int j=0; j<m; j++) {
			
			int g=0;
			if (a[i][j]=='X') {
				int m1=m;
				k.push_back(0);
				int i1=i;
				while (i1<n) {
					if (a[i1][j]=='X') {
					for (int j1=j; j1<m1; j1++) {
				
						if (a[i1][j1]=='X') {
							k[k.size()-1]++;
							a[i1][j1]='*';
							if (i1+1<n&&j1+1<m1) {
								if (a[i1+1][j1+1]=='X') {ans=0;}
							}

							if (i1+1<n&&j1-1>=0) {
								if (a[i1+1][j1-1]=='X') {ans=0;}
							}
							if (i1-1>=01&&j1+1<m1) {
								if (a[i1-1][j1+1]=='X') {ans=0;}
							}
							if (i1-1>=0&&j1-1>=0) {
								if (a[i1-1][j1-1]=='X') {ans=0;}
							}


						} else { 
							m1=j1;
						}
					}
 
					
				} else { 
					i1=n;
					}
					i1++;
			}
		}
	}
	}
	
	sort(k.begin(),k.end());

	if (k.size()==10&&k[0]==1&&k[1]==1&&k[2]==1&&k[3]==1&&k[4]==2&&k[5]==2&&k[6]==2&&k[7]==3&&k[8]==3&&k[9]==4&&ans==1) {
		cout << "YES"; } else { cout << "NO";}
}