#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cin >> n;
    vector <int> t(n);
	int a=0,b=0,c=0;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
		if (t[i]==1) {a++;}
		if (t[i]==2) {b++;}
		if (t[i]==3) {c++;}
    }
 	int g,k=min(a,b);
	k=min(k,c);
	cout << k;
	for (int j=0; j<k; j++) {
		cout << endl;
		int i=0;
		g=1;
	while (i<n) {
		if (t[i]==g) {
			cout << i+1 << " ";
			t[i]=0;
			g++; }
		i++;
		if (g<4&&i==n) {i=0;} 
	}
	}
}