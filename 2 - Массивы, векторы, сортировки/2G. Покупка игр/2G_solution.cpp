#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, m, g=0;
	cin >> n >> m;
	vector <int> c(n);
	for(int i=0; i < n; i++) {
		cin >> c[i];
        }
	vector <int> a(m);
    	for(int i=0; i < m; i++) {
			cin >> a[i];
		}
		int i=0;
		while (i<n&&a.size()>0) {
		if ((c[i])<=a[0]) {
			g++;
			a.erase(a.begin());
		}
		i++;
	}
	cout << g;
}