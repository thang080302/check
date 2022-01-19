#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void InputArr(int *a,int n)
{
	cout << "Nhap mang "<<n<<" so thuc : " << endl;
	for(int i = 0;i<n;i++)
	{
		cout << "Nhap a["<<i<<"] : ";
		cin >> a[i];
	}
}
void OutputArr(int *a,int n)
{
	ofstream fileout;
	fileout.open("XYZ21.txt",ios::out);
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

void Find_value(int *a,int n)
{
	int value = *a;
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) <= value) value = *(a+i);
	}
	cout << "\nMin = " << value << endl;
	cout << "Vi tri : ";
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) == value) cout << i+1;
	}
}
void Avr(int *a,int n)
{
	ofstream fileout;
	fileout.open("XYZ21.txt",ios::app);
	int sum = 0;
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) < 0)
		{
		 	if(*(a+i) %2 == 1 || *(a+i) %2 == -1) 
			{
				sum += *(a+i);
				count ++;
			}
		}
	}
	if(count != 0 ) fileout << "Gia tri trung binh phan tu le am : " << (float)(sum/count);
	if(count == 0) fileout << "Mang khong co phan tu le am !";
	fileout << endl;
	fileout.close();
	cout << "\nDa duoc luu bo sung ! \n";
}
void check(int *a,int n)
{
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) > 15) count++;
	}
	if(count == n) cout << "\nMang hop le !";
	else cout << "\nMang khong hop le !";
}
int main()
{
	int n;
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	int *a = new int[n];
	InputArr(a,n);
	OutputArr(a,n);
	Find_value(a,n);
	Avr(a,n);
	check(a,n);
	delete[]a;
	return 0;
}
