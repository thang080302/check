#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	int n;
	do {
		cout << "Nhap so nguyen duong co 6 chu so : ";
		cin >>  n;
		if(n<=0 || log10(n) + 1 < 6) cout << "Nhap lai : "<< endl;
	}
	while (n <= 0 || log10(n) + 1 < 6);
	int tong = 0;
	for(int i = 1 ;i <= 6 ; i++) {
		tong = tong + n%10;
		n = n/10;
	}
	cout << "Tong  = " << tong ;
	return 0;
}
		
