#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int a,b;
float x,y;
int main() {
	cout << " Nhap 2 so nguyen a va b : ";
	cin >> a >> b;
	cout << endl;
	cout << " Nhap 2 so thuc x va y : ";
	cin >> x >> y;
	cout << endl;
	float S;
	S = 5*cos(3*x + 2) - log(x*x + 2) + sqrt(a*a + b*b) - abs(x-y) / (pow(a,6) + 1);
	cout << "S = " << S;
	return 0;
}
	
