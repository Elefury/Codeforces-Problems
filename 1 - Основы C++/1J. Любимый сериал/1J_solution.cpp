#include <iostream>
using namespace std;
int main() {
    int x,y,d1,d2;
	cin >> x >> y;
	if (x>y) {
	d1=x-y; d2=y+7-x;
	} else { d1=y-x; d2=x-y+7;}
		if (d1>d2) {
			cout << d2 << " " << d1;
		} else { cout << d1 << " " << d2;
		}}