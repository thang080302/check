#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n)
{
	do{
		cout<<"Nhap so nguyen duong : ";
		cin>>n;
	} 
	while(n <= 0);
}
long S(int n) 
{
	if(n==1) return 1;
	else return pow(-1,n+1)*n * S(n-1);
}
int P(int n)
{
	if(n == 1) 
		return 1;
	else 
		return pow(n,2) + P(n-1);
}
int GT_P(int n){
    if(n == 1)
      return 1;
    else
      return GT_P(n-1) + pow(n,2);
}
int main() {
	int m,n;
	nhap(m);
	nhap(n);
	cout << "S("<<n<<") = " << S(n) << endl;
	cout << "P("<<n+m<<") = " << P(n+m) << endl;
	return 0;
}

//#include<stdio.h>
//#include<math.h>
//#include<iostream>
//
//using namespace std;
//
//void nhap(int &n){
//    do{
//        cout<<"Nhap so nguyen duong n: ";
//        cin>>n;
//    } while(n <= 0);
//}
//
//int GT_S(int n){
//    if(n == 1)
//      return 1;
//    else
//      return GT_S(n-1) + pow(-1,n+1)*n;
//}
//
//int GT_P(int n){
//    if(n == 1)
//      return 1;
//    else
//      return GT_P(n-1) + pow(n,2);
//}
//
//
//int main(){
//    int n,m;
//    nhap(n);
//    nhap(m);
//    cout<<"Gia tri cua bieu thuc la: "<< GT_S(n) + GT_P(n+m) << endl;
//}




