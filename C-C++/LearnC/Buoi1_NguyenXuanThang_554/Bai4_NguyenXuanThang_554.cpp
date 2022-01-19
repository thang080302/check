#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	float diem;
	do {
		cout << "Nhap diem tong ket : ";
		cin >> diem;
		if(diem < 0 || diem > 10) cout <<"Nhap lai : " << endl;
	}
	while (diem < 0 || diem > 10);
	if(diem >= 8.5) cout << "A" << endl;
	if(diem < 8.5 && diem >=7.0) cout << "B" << endl;
	if(diem < 7.0 && diem >= 5.5) cout << "C" << endl;
	if(diem < 5.5 && diem >= 4.0) cout << "D" << endl;
	else cout << "F";
	return 0;
}
