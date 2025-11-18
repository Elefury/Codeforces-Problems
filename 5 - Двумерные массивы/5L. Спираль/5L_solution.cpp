#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;
int main ()
{
	int n,m;
	cin >> n;
	m=n;
	vector <vector <int>> a(n, vector <int> (m));
	vector <int> order(n*m);
	int i=n/2, j=m/2, p=1, g=1;
	a[i][j]=p;
	order[p-1]=n*i+j+1;
	for (g; g<n; g++) {
		if (g%2!=0) {
		for (int k=0; k<g; k++) {
			i--; p++; 
			order[p-1]=n*i+j+1;
		}
		for (int k=0; k<g; k++) {
			j--; p++; 
			order[p-1]=n*i+j+1;
		}} else {
		for (int k=0; k<g; k++) {
			i++; p++; 
			order[p-1]=n*i+j+1;
		}
		for (int k=0; k<g; k++) {
			j++; p++; 
			order[p-1]=n*i+j+1;
		}}}

	for (int k=0; k<g-1; k++) {
			i--; p++; 
			order[p-1]=n*i+j+1;
		}

	for (int i=0; i<n*m; i++) {
		cout << order[i] << " ";
	}
}