#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
	int n,b;
	cin >> b >> n;
	vector <int> box(n);
	vector <int> mar(n);
	for (int i=0; i<n; i++) {
		cin >> box[i] >> mar[i];
	}
	int mat=0;
	for (int j=10; j>0; j--) {
		int i=0;
		while (i<n&&b>0) {
			if (mar[i]==j) {
				mat=mat+mar[i]*box[i];
				b=b-box[i];
			}
		if (b<=0) {
			mat=mat+mar[i]*b;
		}
		i++;
		}
	}
	cout << mat;
}