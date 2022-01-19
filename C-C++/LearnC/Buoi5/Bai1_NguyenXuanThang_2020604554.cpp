#include<iostream>
#include<math.h>
using namespace std;
int n;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
bool Ktra_1(float *a,int n) // kiem tra tang
{
    int count = 0;
	for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]<=a[j]) count++;
        }
    }
	if(count == C(2,n)) return true;
	return false;
}
bool Ktra_2(float *a,int n) // kiem tra giam
{
    int count = 0;
	for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]>=a[j]) count++;
        }
    }
	if(count == C(2,n)) return true;
	return false;
}
bool Ktra_3(float *a,int n)// kiem tra tang ngat
{
    int count = 0;
	for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]<a[j]) count++;
        }
    }
	if(count == C(2,n)) return true;
	return false;
}
bool Ktra_4(float *a,int n)// kiem tra giam ngat
{
    int count = 0;
	for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]>a[j]) count++;
        }
    }
	if(count == C(2,n)) return true;
	return false;
}

int main() {
	float *a = new float[100];
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap mang "<<n<<" so thuc: \n";
	for(int i = 0;i<n;i++) 
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> *(a + i);
	}
	if(Ktra_1(a,n) == true) cout << "\nDay sap xep tang";
	else if(Ktra_2(a,n) == true) cout << "\nDay sap xep giam";
	else if(Ktra_3(a,n) == true) cout << "\nDay sap xep tang ngat";
	else if(Ktra_4(a,n) == true) cout << "\nDay sap xep giam ngat";
	else  
		{
		cout << "day chua sap xep ! \n";
		int tg;
    	for(int i = 0; i < n - 1; i++){
        	for(int j = i + 1; j < n; j++){
            	if(a[i] > a[j]){
               	 // Hoan vi 2 so a[i] va a[j]
                	tg = a[i];
                	a[i] = a[j];
                	a[j] = tg;        
            	}
        	}
    	}
    	for(int i = 0;i<n;i++) 
		{
			cout << *(a+i);
		}
	}
	delete []a;
	return 0;
}
		
