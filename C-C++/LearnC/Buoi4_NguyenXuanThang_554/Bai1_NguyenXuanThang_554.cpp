#include <iostream>
using namespace std;
void input(int a[],int n) {
	for(int i = 0;i<n;i++) {
		cout << "a["<<i<<"] = ";
		cin >> a[i];
	}
}
void output(int a[],int n) {
	for(int i = 0;i<n;i++) {
		cout << a[i] << " ";
	}
}
void statistical(int a[],int n) {
	int sum = 0;
	cout << "\nCac phan tu am : \n";
	for(int i = 0;i<n;i++) {
		if(a[i] < 0) {
			sum += a[i];
			cout << a[i] << " ";
		}
	}
	cout << "\nTong = " << sum;
}
int main() {
	int n;
	int a[100];
	do {
		cout << "Nhap n : ";
		cin >> n;
	}
	while(n<=2 || n>=30);
	cout << "Nhap mang : \n";
	input(a,n);
	output(a,n);
	statistical(a,n);
	return 0;
}
	
	
	
