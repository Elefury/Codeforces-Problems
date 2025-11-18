#include <iostream>
#include <cmath>
using namespace std;
int main () {
int a,b,c,d,n,k=0;
cin >> a >> b >> c >> d;
if (a==b) {k++;
	if (b==c || b==d) {k++;}}
	if (c==d) {k++;
	if (c==a || c==b) {k++;}}
if ((a>=c || a>=d || b>=c || b>=d)&&(d>=a || d>=b || c>=a || c>=b)) {
		if (k<=1) {
			if ((a>=b && a>=c && d<=c && d<=b)||(d>=b && d>=c && a<=c && a<=b)) {n=abs(b-c)+1;}
			if ((a>=b && a>=d && c<=b && c<=d)||(c>=b && c>=d && a<=b && a<=d)) {n=abs(b-d)+1;}
			if ((a>=c && a>=d && b<=c && b<=d)||(b>=c && b>=d && a<=c && a<=d)) {n=abs(c-d)+1;}
			if ((b>=a && b>=c && d<=a && d<=c)||(d>=a && d>=c && b<=a && b<=c)) {n=abs(a-c)+1;}
			if ((b>=a && b>=d && c<=a && c<=d)||(c>=a && c>=d && b<=a && b<=d)) {n=abs(a-d)+1;}
			if ((c>=a && c>=b && d<=a && d<=b)||(d>=a && d>=b && c<=a && c<=b)) {n=abs(a-b)+1;}
		} else if (k==2) {
			{n=1;}
		} else {n=1;}
} else {n=0;}
cout<<n;}