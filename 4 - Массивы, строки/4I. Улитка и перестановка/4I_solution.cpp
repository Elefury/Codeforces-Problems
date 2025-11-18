#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> way(n);
	vector <int> pos(n);
	for (int i=0; i<n; i++) {
		cin >> way[i];
		pos[way[i]]=i;
}
	int steps=0;
	for (int i=1; i<n; i++) {
	steps+=abs(pos[i]-pos[i-1]);
	}
	cout << steps;
}