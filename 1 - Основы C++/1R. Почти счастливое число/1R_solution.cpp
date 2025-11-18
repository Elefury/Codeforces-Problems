#include <iostream>
using namespace std;
int main() {
	int v;
    long long x;
	cin >> x;
	v=0;
	while (x!=0) {
	if (x%10==4 || x%10==7) {
	v++;
	}
	x/=10;
}
	if (v==4 || v==7)  {
		cout << "YES";
	} else {
		cout << "NO";
	}
    return 0;
}