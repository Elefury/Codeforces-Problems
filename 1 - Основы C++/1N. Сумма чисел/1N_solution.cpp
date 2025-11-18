#include <iostream>
using namespace std;
int main() {
    int a,n,s=0;
	cin >> n;
	for (int i=0;i<n;i++) {
	cin >> a;
	s=s+a;
	}
	cout << s << endl;
    return 0;
}