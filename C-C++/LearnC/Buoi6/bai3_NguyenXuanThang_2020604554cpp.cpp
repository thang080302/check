#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
void nhap_Mang(int *a,int n){
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> *(a + i);
	}
}

void hien_Mang(int *a,int n){
	for(int i = 0; i < n; i++)
	{
		cout << *(a + i) << " ";
	}
	cout<<endl;
}

void kiem_Tra(int *a,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(*(a + i) <= 10)
		   dem++;
	}
	if(dem=0){
		cout<<"Tat ca phan tu trong mang lon hon 10\n";
	} else{
		cout<<"Mang khong co phan tu lon hon 10\n";
	}
}

void xoa_PT(int *a,int &n,int k){
	for(int i=k;i<n;i++){
		*(a + i) = *(a + i + 1);
	}
	n--;
} 

void xoa_Chan(int *a,int &n){
	for(int i=0;i<n;i++){
		if(*(a+i) % 2 == 0){
			xoa_PT(a,n,i);
			i--;
		}
	}
}

void tach_Mang(int *a,int *b,int *c,int n,int &m,int &p){
	m=0;
	p=0;
	for(int i=0;i<n;i++){
		if(*(a+i) % 3 == 0)
		{
		   *(b + m) = *(a + i);
		   m++;
		}
		else
		{
		   *(c + p) = *(a + i);
		   p++;
		}
	} 
	cout<<"Mang b: "<<endl;
	hien_Mang(b,m);
	cout<<"Mang c: "<<endl;
	hien_Mang(c,p);
}

int main(){
	int n;
	int m,p;
	int *a = new int[n];;
	int *b = new int [m];
	int *c = new int[p];
	
	do{
		cout<<"Nhap so nguyen n: ";
		cin>>n;
	} while(n<=0);
    nhap_Mang(a,n);
    hien_Mang(a,n);
    kiem_Tra(a,n);
    xoa_Chan(a,n);
    cout << "mang sau khi xoa phan tu chan : ";
    hien_Mang(a,n);
    tach_Mang(a,b,c,n,m,p);
    delete[] a;
    delete[] b;
    delete[] c;
}
