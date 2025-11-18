#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n,k;
	cin >> n >> k;
	int s=0;
    vector <int> a(n);
	vector <int> p(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
		p[i]=a[i]%10;
	}	
	for (int j=9; j>=0; j--) {
	for (int i=0; i<n; i++) {
		if (p[i]==j) {
		while (p[i]<10&&k>0&&a[i]<100) {
		a[i]++;
		p[i]++;
		k--; 
		}}}}
	for (int i=0; i<n; i++) {
		while (k>0&&a[i]<100) {
			a[i]++;
			k--;
		} 
		s=s+a[i]/10;
	}
	cout << s;
}