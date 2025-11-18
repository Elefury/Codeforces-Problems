#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string g,o,t;
	cin >> g >> o >> t;
	int e=1;
	for (int i=0; i<g.size(); i++) {
		if (t.find(g[i])!=-1) {
			t.erase(t.begin() + t.find(g[i]));
		} else {
			e=0;
			break;
		}
	}
	for (int i=0; i<o.size(); i++) {
		if (e==0) {break;}
		if (t.find(o[i])!=-1) {
			t.erase(t.begin() + t.find(o[i]));
		} else {
			e=0;
			break;
		}
	}
	//cout << t.size() << " " << e << endl;
		if (t.size()>0||e==0) {
			cout << "NO"; 
		} else {
			cout << "YES";
		}
}