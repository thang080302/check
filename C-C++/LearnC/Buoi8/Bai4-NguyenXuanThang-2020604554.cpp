#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void InputArr(int *a,int n)
{
	cout << "Nhap mang "<<n<<" so nguyen : " << endl;
	for(int i = 0;i<n;i++)
	{
		cout << "Nhap a["<<i<<"] : ";
		cin >> a[i];
	}
}
void OutputArr(int *a,int n)
{
	ofstream fileout;
	fileout.open("MANG.dat",ios::out);
	cout << "Mang : ";
	fileout << "Mang : ";
	for(int i = 0;i<n;i++)
	{
		cout << a[i] << " ";
		fileout << a[i] << " ";
	}
	cout << endl;
	fileout << endl;
	fileout.close();
}
int Sum(int *a,int n)
{
	int tong = 0;
	for(int i =0;i<n;i++)
	{
		tong += a[i];
	}
	return a[0] + a[n-1] + (float)tong/n;	
}
void TBC(int *a,int n)
{
	ofstream bt;
	bt.open("Mang.txt",ios::app);
	cout<<"\nKQ luu bo sung:\n";
	int x;
	cout<<"Nhap x : ";
	cin>>x;
	float tbc=0,count=0;
	for(int i=0;i<n;i++)
	{
		if(*(a+i) > x){
			tbc += *(a+i);
			count++;
		}
	}
	cout<<"\nGia tri cua TBC = "<< (float)(tbc/count) <<endl;
	bt<< (float)(tbc/count)<<endl;
	bt.close();
}

void KT(int *a,int n)
{
	int k;
	cout<<"Nhap k : ";
	cin>>k;
	int kt=0;
	int tong=0;
	for(int i=0;i<n;i++){
		if(*(a+i) == k)
		  kt++;
	}
	if(kt==0)
	  cout<<"\nMang ko co gia tri trung voi k";
	else 
	  cout<<"\nMang co gia tri trung voi k"<<endl;
	for(int i=0;i<n;i++){
		if(*(a+i) % k == 0)
		   tong += *(a+i);
	}
	cout<<"\nTong = "<<tong<<endl;
}
void Xoa(int *a,int &n,int pos)
{
	for(int i = pos;i<n;i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
void XoaArr(int *a,int &n)
{
	int y;
	cout << "Nhap x : ";
	cin >> y;
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) == y) 
		{
			Xoa(a,n,i);
			i--;
		}
	}
	cout << "Mang sau khi xoa : ";
	for(int i = 0;i<n;i++)
	{
		cout << *(a+i) << " ";
	}
}
int main()
{
	int n;
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	int *a = new int[n];
	InputArr(a,n);
	OutputArr(a,n);
	cout << "Gia tri bieu thuc la : " << Sum(a,n) << endl;
	TBC(a,n);
	KT(a,n);
	XoaArr(a,n);
	delete[] a;
	return 0;
}
