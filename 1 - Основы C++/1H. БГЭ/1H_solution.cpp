#include <iostream>
using namespace std;
int main() {
    int x;
	cin >> x;
	if (x<29) {cout << 2;}
	else if (x>28 && x<53) {cout << 3;}
	else if (x>52 && x<78) {cout << 4;}
	else if (x>77) {cout << 5;}
	return 0;
}