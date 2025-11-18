#include <iostream>
using namespace std;
int main() {
    int x1,y1,x2,y2,t1,t2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1<x2) {
		t1=x2-x1;
	} else { 
		t1=x1-x2; } 
	{ if (y1<y2) {
		t2=y2-y1;
	} else { t2=y1-y2; 
	} cout << t1+t2 << endl;
		return 0;
	}
}