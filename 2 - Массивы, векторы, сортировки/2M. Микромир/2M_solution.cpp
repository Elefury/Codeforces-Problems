#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
	int n, K;
	cin >> n >> K;
	vector <int> bac(n+1);
	int al=0, sel=0;
	bac[n]=1666777;
	for (int i=0; i<n; i++) {
		cin >> bac[i]; }
	sort(bac.begin(), bac.end());
	bac[n]=0;
		for (int i=0; i<n; i++) {
			if (bac[i]+K<bac[i+1]||bac[i]>bac[i+1]) {
				//cout << "(#" << i << ") " << bac[i] << "'s kind survives.\n";
				al=al+sel+1;
				sel=0;
			} else if (bac[i]==bac[i+1]) {sel++; /*cout  << "(#" << i << ") " << bac[i] << " probably dies.\n";*/}
			else {sel=0; /*cout << "(#" << i << ") " << bac[i] << "'s kind dies.\n";*/}
		}
	cout << al;
}