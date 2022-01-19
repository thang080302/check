#include<iostream>
#include<math.h>

using namespace std;

void nhap(int &n,float &x){
	do{
		cout<<"Nhap so nguyen duong n: ";
		cin>>n;
	} 
	while(n <= 0);
	cout << "Nhap so thuc x : ";
	cin >> x;
}

int gt(int n){
	if(n==1)
	  return 1;
	return n*gt(n-1);
}

float mu(float a,int b){
	if(b==1)
	  return a;
	return mu(a,b-1)*a;
}

float GT_S(int n,float &x){
	float S = 0;
	for(int i=1;i<=n;i++)
	   S +=(float)(mu(x,i)/gt(i));
	return S;
}

int main(){
	int n;
	float x;
	nhap(n,x);
	cout<<"Gia tri cua S = "<< GT_S(n,x);
}
