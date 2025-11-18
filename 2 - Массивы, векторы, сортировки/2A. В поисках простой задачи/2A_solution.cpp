#include <iostream>
using namespace std;
int main()
{
	int n, d=0;
	cin >> n;
	int *a=new int[n];
	for(int i=0; i < n; i++) {
		cin >> a[i];
		if (a[i]==1) {
			d++; }}
	if (d==0) {cout << "EASY";} else {cout << "HARD";}
}