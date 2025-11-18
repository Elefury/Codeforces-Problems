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
	vector <int> k;
	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {  
			cin >> a[i][j];
		}
	}

	for (int i=0; i<n; i++) {

		for (int j=0; j<m; j++) {
			
			int g=0;
			if (a[i][j]=='*') {
				int m1=m;
				k.push_back(0);
				int i1=i;
				while (i1<n) {
					if (a[i1][j]=='*') {
					for (int j1=j; j1<m1; j1++) {
				
						if (a[i1][j1]=='*') {
							k[k.size()-1]++;
							a[i1][j1]='x';
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
	cout << k.size() << endl;
	for (int i=0; i<k.size(); i++) {
		cout << k[i] << " ";
	}

	/*for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {  
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/

}