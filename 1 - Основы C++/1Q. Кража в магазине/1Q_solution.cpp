#include <iostream>
using namespace std;
int main()
{    
	int a,n, mn=1000000000, mx=0;
	cin >> n;
        for (int i=0;i<n;i++) {
		cin >> a;
		if (a>mx) {mx=a;}
		if (a<mn) {mn=a;}
	}
	cout << mx-mn-n+1 << endl;
	return 0;
}