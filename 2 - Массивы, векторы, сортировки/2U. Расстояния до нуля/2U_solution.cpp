#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
    vector <int> z;
	vector <int> a(n);
	vector <int> l(n);
	int i=0;
	for (i; i<n; i++) {
		cin >> a[i];
		if (a[i]==0) {
			z.push_back(i);
			l[i]=0;
		}
	}
	for (int x=0; x<z.size(); x++) {
		i=0;
		if (x==0) {
	while (i<z[x]) {
		l[i]=z[x]-i;
		i++;
	}
		} else { i=1; 
		while (i<=(z[x]-z[x-1])/2) {
			l[z[x-1]+i]=i; l[z[x]-i]=i;
			i++; }
		}
		if (x==z.size()-1) {
			for (i=z[x]+1; i<=a.size()-1; i++) {
				l[i]=i-z[x]; }
		}
	}
		
	for (i=0; i<n; i++) {
	cout << l[i] << " ";
	}
}