#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void nhap(float &x,int &m,int &n)
{
	cout << "Nhap so thuc x : ";
	cin >> x;
	cout << "Nhap so nguyen m  : ";
	cin >> m;
	cout << "Nhap so nguyen n  : ";
	cin >> n;
}
float H(int n, int m)
{
	float temp = m+ (float)1/n;
	if(n == 0 || temp < 0) return 0;
	return sqrt(m + (float)1/n)	;
}

float T(float x,int n)
{
	float sum = 0;
	for(int i =1;i<=n;i++)
	{
		sum += (float)(pow(x,i)/(2*i-1));
	}
	return 10* exp(abs(n-5)) + sum;
}
int main() {
	int m,n;
	float x;
	nhap(x,m,n);
	cout << "Gia tri H(m,n) : " << H(m,n) << endl;
	cout << "Gia tri T(x,m+n) : " << T(x,m+n) << endl;
	return 0;
}











