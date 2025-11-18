#include <iostream>
using namespace std;
int main() {
	int n,a,e=1,s=0;
	cin >> n;
	for (int i=0; i<n;i++) {
    cin >> a;
	s=s+a*e;
	e=-1*e;
	}
	cout << s << endl;
    return 0;
}