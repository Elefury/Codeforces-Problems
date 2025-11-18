#include <iostream>
#include <string>
using namespace std;
int main () {
	string a; cin >> a;
	int i=0, k=0;
	while (a[i]!='@') {
		if (isdigit(a[i])||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)||a[i]=='_') {
			k++; i++;
		} else {
			cout << "NO";
			return 0;
		}
		if (i>=a.size()) {
			cout << "NO";
			return 0;
		}
	}
	if (k>16||k==0) {
		cout << "NO";
		return 0;
	}
	i++;
	k=0;
	int g=0;
	while (i!=a.size()&&a[i]!='/') {
		if (isdigit(a[i])||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)||a[i]=='_') {
			g++; k++; i++;
		} else if (a[i]=='.'&&g>0&&g<=16) {
			g=0; k++; i++;
		} else {
			cout << "NO";
			return 0;
		}
	}
	if (k>32||k==0||a[i-1]=='.') {
		cout << "NO";
		return 0;
	}
	if (i!=a.size()&&a[i]=='/') {
		i++; k=0;
		while (i!=a.size()) {
			if (isdigit(a[i])||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)||a[i]=='_') {
			k++; i++;
			} else {
			cout << "NO";
			return 0;
			}
		}
		if (k==0||k>16) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}