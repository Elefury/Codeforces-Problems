#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector <int> a(n);
	vector <int> b(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n; i++) {
		cin >> b[i];
	}
	int bull=0, cow=0;
	for (int i=0; i<n; i++) {
		if (a[i]==b[i]) {
			bull++;
		} else {
	for (int j=0; j<b.size(); j++) {
		if (a[i]==b[j]) { 
			cow++;
			break;
			}
		}
	}
	}
	cout << bull << " " << cow;
}