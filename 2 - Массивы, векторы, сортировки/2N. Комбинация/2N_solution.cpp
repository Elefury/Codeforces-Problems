#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	//setlocale(LC_ALL, "rus");
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
		cin >> b[i]; 
	}
	int t=1,p=0;
	//cout << "Размеры массивов a,b: " << a.size() << ", " << b.size() << endl; 
	for (int i=0; i<n; i++) {
		if (b[i]>0) {
			p=p+a[i]; 
			//cout << "Points до сброса {#i: " << i << "] = " << p << endl; 
			t=t+b[i]-1;
			//cout << "Turns до сброса [#i: " << i << "] = " << t << endl; 
			a.erase(a.begin()+i);
			b.erase(b.begin()+i);
			i--; n--;
			//cout << "Размеры массивов a,b: " << a.size() << ", " << b.size() << endl;
		}
	}
	sort(a.begin(), a.end());
	int i=n-1;
	while (i>=0&&t>0) {
		t--;
		p=p+a[i];
		//cout << "Points после [#i: " << i << "] = " << p << endl;
		//cout << "Turns после [#i:" << i << "] = " << t << endl;
		i--;
	}
	cout << p;
}