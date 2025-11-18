#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;
int main ()
{
	int n, mx=0,nmn=INT_MAX;
	cin >> n;
	vector <int> a(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	for (int i=0; i<a.size(); i++) {
		int k=1;
		for (int j=i+1; j<a.size(); j++) {
			if (a[i]==a[j]) {
				k++;
				a.erase(a.begin()+j);
				j--;
			}
		}
			if (k>mx||(k==mx&&a[i]<nmn)) {
				mx=k; nmn=a[i];
			}
			a.erase(a.begin()+i);
			i--;
		}
	cout << nmn << " " << mx;
}