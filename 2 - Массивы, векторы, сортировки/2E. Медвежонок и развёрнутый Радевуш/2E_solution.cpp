#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int	n,c,s;
    cin >> n;
	cin >> c;
	int *p=new int[n];
	int *t=new int[n];
	for(int i=0; i < n; i++) {
		cin >> p[i]; 
	}
	for(int i=0; i < n; i++) {
		cin >> t[i];
	}
		int tl=0,pl=0;
	for (int i=0; i<n; i++) {
		tl+=t[i];
		s=p[i]-c*tl;
		if (s<0) {s=0;}
		pl=pl+s;
	}
		int tr=0,pr=0;
	for (int i=n-1; i>=0; i--) {
		tr+=t[i];
		s=p[i]-c*tr;
		if (s<0) {s=0;}
		pr=pr+s;
	}
	if (pl>pr) {cout<<"Limak";}
	else if (pr>pl) {cout << "Radewoosh";}
	else {cout << "Tie";}
}