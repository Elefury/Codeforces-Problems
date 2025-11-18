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
	int maxcol=0,maxstr=0;
	vector <vector <char>> a(n, vector <char> (m));
	vector <int> str(n);
	vector <int> col(m);
	vector <int> mxst;
	vector <int> mxcl;

	int i2,j2;
	for (int i=0; i<n; i++) {
	for (int j=0; j<m; j++) {
		cin >> a[i][j];
		if (a[i][j]=='*') {
			str[i]++; col[j]++; }
	}
	}
	for (int i=0; i<n; i++) {
		if (str[i]>maxstr) {
		maxstr=str[i];
		i2=i;
		}
	}
		for (int i=0; i<n; i++) {
			if (str[i]==maxstr) {
			mxst.push_back(i);
			}
		}
		

	
	for (int j=0; j<m; j++) {
		if (col[j]>maxcol) {
		maxcol=col[j];
		j2=j;
		}
	}

	for (int j=0; j<m; j++) {
			if (col[j]==maxcol) {
			mxcl.push_back(j);
			}
		}
	for (int i=0; i<mxst.size(); i++) {
	for (int j=0; j<mxcl.size(); j++) {
		if (a[mxst[i]][mxcl[j]]=='.') {
			i2=mxst[i]; 
			j2=mxcl[j]; }
	}
	}
		int e=0;
		if (a[i2][j2]=='*') {e++;}
		cout << m+n-1-maxcol-maxstr+e;
}