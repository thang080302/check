#include<iostream>
#include<fstream>

using namespace std;
void nhapMang(int *a,int n){
	for(int i = 0;i < n;i++){
		cout<<"Nhap a[" << i << "]: ";
		cin>> *(a + i);
	}
}
void xuatMang(int *a,int n)
{
	for(int i = 0;i < n;i++){
		cout<<"\t"<< *(a+i);
	}
	cout<<endl;
	ofstream bt;
	bt.open("cau1_de5.txt",ios::out);
	for(int i=0;i<n;i++){
		bt<<a[i]<<" ";
	}
	bt << endl;
	bt.close();
}
void copyArr(int *a,int *b,int n)
{
	for(int i =0;i<n;i++)
	{
		*(b+i) = *(a+i);
	}
}
void chan(int *b,int &n)
{
	int j = n;//  gan gia tri cua n cho j
	ofstream bt;
	bt.open("cau1_de5.txt",ios::app);
	
// do vòng for thay doi gia tri cua n nen cho nay dung j

	for(int i =0;i<j;i++)
	{
		if(*(b+i)%2==0)
		{
			n++;
			*(b+n-1) = *(b+i);
		}
	}
	cout << "\nMang sau khi copy : ";
	for(int i = 0;i < n;i++){
		cout<<"\t"<< *(b+i);
	}
	cout<<endl;
	bt << "\nMang sau khi copy : ";
	for(int i=0;i<n;i++){
		bt<<b[i]<<" ";
	}
	bt << endl;
	bt.close();
}
void sort(int *b,int n)
{
	ofstream bt;
	bt.open("cau1_de5.txt",ios::app);
	
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(*(b+i)>*(b+j)) 
			{
				int temp = *(b+i);
				*(b+i) = *(b+j);
				*(b+j) = temp;
			}
		}
	}
	cout << "\nMang sau khi sap xep : ";
	for(int i = 0;i < n;i++){
		cout<<"\t"<< *(b+i);
	}
	cout<<endl;
	bt << "\nMang sau khi sap xep : ";
	for(int i=0;i<n;i++){
		bt<<b[i]<<" ";
	}
	bt << endl;
	bt.close();
}	
void check(int *a,int n)
{
	int count_1 = 0;
	int count_2 = 0;
	for(int i =0;i<n;i++)
	{
		if(*(a+i) < *(a+i+1)) count_1++;
		if(*(a+i) > 4) count_2++;
	}
	if(count_1 == n-1 && count_2 == n) cout << "\nMang hop le !";
	else cout << "\nMang khong hop le !";
}
int main()
{
	int n;
	do{
		cout<<"Nhap so  luong phan tu: ";
		cin>>n;
	}
	while(n <= 0 || n >= 30);
	int *a=new int[n];
	int *b=new int[n];
	nhapMang(a,n);
	xuatMang(a,n);
	copyArr(a,b,n);
	chan(b,n);	
	sort(b,n);
	check(a,n);
	delete[] a;
	delete[] b;
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
