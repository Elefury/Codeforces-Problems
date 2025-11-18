#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> he(n);
	vector <int> b(n);
	for (int i=0; i<n; i++) {
		cin >> he[i]; }
	for (int i=0; i<n; i++) {
		b[i]=he[i]; }
	sort(b.begin(),b.end());
	int s=0,k=0;
	for (int i=0; i<n; i++) {
		s=s+(he[i]-b[i]);
		if (s==0) {k++;}
	}
	cout << k;
}