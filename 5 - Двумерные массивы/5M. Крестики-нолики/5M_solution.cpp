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
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	
	int ans=0;
	for (int i=0; i<n; i++) {
		if (ans==1) {break;}
		for (int j=0; j<m; j++) {
			if (ans==1) {break;}
			if (a[i][j]=='O') {
				if(i+4<n&&j+4<m) {
					if (a[i+1][j+1]=='O'&&a[i+2][j+2]=='O'&&a[i+3][j+3]=='O'&&a[i+4][j+4]=='O') {ans=1; break;}
				}
				if (i+4<n) {
					if (a[i+1][j]=='O'&&a[i+2][j]=='O'&&a[i+3][j]=='O'&&a[i+4][j]=='O') {ans=1; break;}
				}
				if (j+4<m) {
					if (a[i][j+1]=='O'&&a[i][j+2]=='O'&&a[i][j+3]=='O'&&a[i][j+4]=='O') {ans=1; break;}
				}
				if(i+4<n&&j-4>0) {
					if (a[i+1][j-1]=='O'&&a[i+2][j-2]=='O'&&a[i+3][j-3]=='O'&&a[i+4][j-4]=='O') {ans=1; break;}
				}}
			if (a[i][j]=='X') {
				if(i+4<n&&j+4<m) {
					if (a[i+1][j+1]=='X'&&a[i+2][j+2]=='X'&&a[i+3][j+3]=='X'&&a[i+4][j+4]=='X') {ans=1; break;}
				}
				if (i+4<n) {
					if (a[i+1][j]=='X'&&a[i+2][j]=='X'&&a[i+3][j]=='X'&&a[i+4][j]=='X') {ans=1; break;}
				}
				if (j+4<m) {
					if (a[i][j+1]=='X'&&a[i][j+2]=='X'&&a[i][j+3]=='X'&&a[i][j+4]=='X') {ans=1; break;}
				}
				if(i+4<n&&j-4>0) {
					if (a[i+1][j-1]=='X'&&a[i+2][j-2]=='X'&&a[i+3][j-3]=='X'&&a[i+4][j-4]=='X') {ans=1; break;}
				}}}}
ans==0 ? cout << "No" : cout << "Yes";
}