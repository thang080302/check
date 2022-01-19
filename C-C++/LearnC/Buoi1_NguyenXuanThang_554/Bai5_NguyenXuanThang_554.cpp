#include<iostream>
#include<math.h>

#include<iomanip>
using namespace std;
int main() 
{
	float a,b;
	cout << "Nhap he so bac 2 : ";
	cin >> a;
	cout << endl;
	cout << "Nhap he so bac 1 : ";
	cin >> b;
	if(a == 0) cout << "Phuong trinh vo nghiem !" << endl;
	else cout << "phuong trinh co nghiem = " << -(float)b/a;
	return 0;
}
