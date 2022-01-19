#include<iostream>
#include<fstream>

using namespace std;

void nhapMang(int* a,int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<"Nhap a[" << i << "]: ";
		cin>> *(a + i);
	}
}

void xuatMang(int* a,int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<"\t"<< *(a+i);
	}
	cout<<endl;
	ofstream bt;
	bt.open("BT4.txt",ios::app);
	bt << "Mang vua nhap : ";
	for(int i=0;i<n;i++){
		bt<<a[i]<<" ";
	}
	bt << endl;
	bt.close();	
}

void snd_max(int *b,int n)
{
	ofstream bt;
	bt.open("BT4.txt",ios::app);
	
	for(int i=0;i<n;i++)
	{
		for(int j = i+1;j<n;j++) 
		{
			if(*(b+i) > *(b+j)) 
			{
				int temp = *(b+i);
				*(b+i) = *(b+j);
				*(b+j) = temp;
			}
		}
	}
	int var = *(b+n-1);
	for(int i = n-2;i>=0;i--)
	{
		if(*(b+i) < var) {
			var = *(b+i);
			break;
		}
	}
	bt << "\nGia tri lon thu 2 : " << var << endl;
	bt.close();
}
void sort(int *a,int n) {
	ofstream bt;
	bt.open("BT4.txt",ios::app);
	for(int i=0;i<n;i++){
		for(int j = i+1;j<n;j++) {
			if(*(a+i) < *(a+j)) {
				int temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	bt << "\n Sort : ";
	for(int i=0;i<n;i++){
		bt << *(a+i) <<" ";
	}
	bt << endl;
	bt.close();
}
void chen(int *a,int &n,int k,int pos)
{
	n++;
	for(int i = n-i;i>pos;i--)
	{
		*(a+i+1) = *(a+i);
	}
	*(a+pos+1) = k;
}
void chen_sau_le(int *b,int &n)
{
	int k;
	cout << "\nNhap phan tu can chen : ";
	cin >> k;
	int count = 0;
	for(int i =0;i<n;i++)
	{
		if(*(b+i) %2 == 1) count++;
	}
	if(count > 0) 
	{
		for(int i = 0;i<n;i++)
		{
			if(*(b+i) % 2 == 1) 
			{
				chen(b,n,k,i);
				break;
			}
		}
		for(int i = 0;i < n;i++)
		{
		cout<<"\t"<< *(b+i);
		}
	cout<<endl;
	}
	else cout << "\nMang khong co phan tu le !";
}
int main()
{
	int n;
	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}
	while(n < 0 || n > 30);
	int *a=new int[n];
	nhapMang(a,n);
	xuatMang(a,n);
	int *b = new int[n];
	for(int i=0;i<n;i++)
	{
		*(b+i) = *(a+i);
	}
	snd_max(a,n);
	sort(a,n);
	chen_sau_le(b,n);
	delete[]a;
	return 0;
}
