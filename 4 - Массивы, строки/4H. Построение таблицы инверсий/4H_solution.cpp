#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> t(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n; i++) {
		t[i]=0;
		int j=0;
		while (a[j]!=i) {
			if (a[j]>i) {t[i]++;}
			j++;
		}
	}
	for (int i=0; i<n; i++) {
		cout << t[i] << " ";
	}
}