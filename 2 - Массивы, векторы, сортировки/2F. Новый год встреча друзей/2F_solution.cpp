#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,k=0;
    vector <int> a(3);
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
	}
	sort(a.begin(),a.end());
cout << (a[1]-a[0])+(a[2]-a[1]);
}