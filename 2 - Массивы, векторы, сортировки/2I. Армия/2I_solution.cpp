#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cin >> n;
    vector <int> d(n);
    for(int i = 1; i < n; i++) {
        cin >> d[i];
	}	
	int a,b,k=0;
	cin >> a >> b;
	for (int i = a; i < b; i++) {
		k+=d[i];
	}
	cout << k;
}