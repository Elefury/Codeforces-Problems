#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
using namespace std;
int main ()
{
	int n,m;
	cin >> n >> m;
	vector <vector <char>> a(n, vector <char> (m));
	vector <int> str(n, 0);
	vector <int> col(m, 0);
	for (int i=0; i<n; i++) {  
		for (int j=0; j<m; j++) {  
			cin >> a[i][j];
			if (a[i][j]=='.') {
			str[i]++;
			col[j]++;
			}
		}
	}

	while (0<a.size()&&str[0]==m) {
			a.erase(a.begin());
			str.erase(str.begin());
	}

	int i=a.size()-1;
	while (i>=0&&str[i]==m) {
			a.erase(a.begin()+i);
			str.erase(str.begin()+i);
			i--; 
	}

	while (0<m&&col[0]==n) {
		for (int i=0; i<a.size(); i++) {
			a[i].erase(a[i].begin());
		}
		col.erase(col.begin());
		m--;
	}
	
	int j=m-1;
	while (j>=0&&col[j]==n) {
		for (int i=0; i<a.size(); i++) {
			a[i].erase(a[i].begin()+j);
		}
		col.erase(col.begin()+j);
		m--; j--;
	}

	int m2,n2;
	cin >> n2 >> m2;
	vector <vector <char>> b(n2, vector <char> (m2));
	vector <int> str2(n2, 0);
	vector <int> col2(m2, 0);
	for (int i=0; i<n2; i++) {  
		for (int j=0; j<m2; j++) {  
			cin >> b[i][j];
			if (b[i][j]=='.') {
			str2[i]++;
			col2[j]++;
			}
		}
	}

	while (0<b.size()&&str2[0]==m2) {
			b.erase(b.begin());
			str2.erase(str2.begin());
	}

	i=b.size()-1;
	while (i>=0&&str2[i]==m2) {
			b.erase(b.begin()+i);
			str2.erase(str2.begin()+i);
			i--; 
	}

	while (0<m2&&col2[0]==n2) {
		for (int i=0; i<b.size(); i++) {
			b[i].erase(b[i].begin());
		}
		col2.erase(col2.begin());
		m2--;
	}
	
	j=m2-1;
	while (j>=0&&col2[j]==n2) {
		for (int i=0; i<b.size(); i++) {
			b[i].erase(b[i].begin()+j);
		}
		col2.erase(col2.begin()+j);
		m2--; j--;
	}



	/*cout << a.size() << " " << a[0].size() << m << "\n\n"; // !!!!!!!!!!
	for (int i=0; i<a.size(); i++) {  
		for (int j=0; j<a[i].size(); j++) {  
			cout << a[i][j];
		}
		cout << endl;
	}

	cout << endl;
	cout << b.size() << " " << b[0].size() << m2 << "\n\n";

	for (int i=0; i<b.size(); i++) {  
		for (int j=0; j<b[i].size(); j++) {  
			cout << b[i][j];
		}
		cout << endl; 
	} // !!!!!!!!!   */        
	int g=0, same=0;
	
		if (a.size()==b.size()&&m==m2) { //если совпало
		
			for (int i=0; i<a.size(); i++) {  //без изменений
			for (int j=0; j<m; j++) {
				if (a[i][j]==b[i][j]) {g++;} 
			}
		}
		//cout << g << " ";
		if (g==a.size()*m) {same=1;}
		g=0;	

		for (int i=0; i<a.size(); i++) {  //180 град.
			for (int j=0; j<m; j++) {
				if (a[i][j]==b[a.size()-1-i][m-1-j]) {g++;}
			}
		}
		//cout << g << " ";
		if (g==a.size()*m) {same=1;} 
			g=0; 
			if (m==m2&&m2==a.size()&&a.size()==b.size()) {
		for (int i=0; i<a.size(); i++) {   //90 град. пр.ч.
				for (int j=0; j<m; j++) {
					if (a[i][j]==b[m-1-j][i]) {g++;}
			}
		}
		//cout << g << " ";
		if (g==a.size()*m) {same=1;} 
			g=0; 
			
		for (int i=0; i<a.size(); i++) {   //90 град. по ч.
				for (int j=0; j<m; j++) {
					if (a[i][j]==b[j][m2-1-i]) {g++;}
			}
		}
		//cout << g << " ";
		if (g==a.size()*m) {same=1;} 
			g=0; 
			}
		} else if ((a.size()==m2&&b.size()==m)) {  //если совпали со свапом

			for (int i=0; i<a.size(); i++) {   //90 град. пр.ч.
				for (int j=0; j<m; j++) {
					if (a[i][j]==b[m-1-j][i]) {g++;}
			}
		}
			//cout << g << " ";
		if (g==a.size()*m) {same=1;} 
			g=0; 
			
		for (int i=0; i<a.size(); i++) {   //90 град. по ч.
				for (int j=0; j<m; j++) {
					if (a[i][j]==b[j][m2-1-i]) {g++;}
			}
		}
		//cout << g << " ";
		if (g==a.size()*m) {same=1;} 
			g=0; 
		}
	if (same==1) cout << "YES"; else cout << "NO";
}
	