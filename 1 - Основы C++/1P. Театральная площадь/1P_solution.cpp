#include <iostream>
using namespace std;
int main() {
	int a,b,k;
	long long n,a1=0,b1=0;
	cin >> a >> b >> k;
	if (a%k>0) {a1++;}
	if (b%k>0) {b1++;}
	a1+=a/k;
	b1+=b/k;
	n=a1*b1;
	cout << n << endl;
    return 0;
}