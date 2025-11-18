#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,k=0;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
	}
	sort(a.begin(),a.end());
	for (int i=0; i < n; i+=2) {
		if (a[i]<a[i+1]) {swap (a[i], a[i+1]);}
		while (a[i]>a[i+1]) {a[i+1]++; k++;}
	}
	cout << k;
}