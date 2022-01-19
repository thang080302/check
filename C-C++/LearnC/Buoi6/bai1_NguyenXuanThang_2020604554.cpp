#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
void XuatStr(char *str) 
{
	cout << "Chuoi vua nhap : ";
	puts(str);
}
void Dem(char *str) 
{
	int demthuong = 0,demhoa = 0,demso = 0;
	for(int i = 0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z') demthuong++;
		if(str[i]>='A' && str[i]<='Z') demhoa++;
		if(str[i]>='0' && str[i]<='9') demso++;
	}
	cout << "so chu cai thuong : " << demthuong << endl;
	cout << "so chu cai hoa: " << demhoa << endl;
	cout << "so chu so : " << demso << endl;
}
void Ktra_ch(char *str,char s) 
{
	cout << "Nhap ki tu : ";
	cin >> s;
	int count = 0;
	for(int i = 0;i<strlen(str);i++)
	{
		if(str[i] == s) count++;
	}
	cout << "so lan xuat hien : " << count << endl;
}

void reverse(char * str)
{
	char *str1 = strrev(str);
	puts(str1);
}
//
void xoa(char *str,char *a,int &m)
{
	m=0;
	int n = strlen(str);
	for(int i =0;i<n;i++)
	{
	
		if(str[i] == 'a') continue;
		a[m] = str[i];
		m++;
	}
	cout << "chuoi sau khi xoa : ";
	puts(a);
}	
void split(char *str)
{
	for(int i =0;i<strlen(str);i++)
	{
		cout << str[i];
		if(str[i] == ' ') cout << endl;
	}
}
int Menu(char *str,char s,char *a,int m) {
	cout <<"\n================== Menu ===================\n";
	cout <<"1.hien thi chuoi \n";
	cout <<"2.dem so chu so,chu hoa,chu thuong \n";
	cout <<"3.kiem tra ki tu \n";
	cout <<"4.dao nguoc chuoi\n";
	cout <<"5.xoa ki tu 'a'\n";
	cout <<"6.tach chuoi\n";
	cout <<"7.thoat\n";
	cout <<"====================//=====================\n";
	int chon;
	cout << "Nhap lua chon : ";
	cin >> chon;
	switch(chon)
	{
		case 1 :
		{
			system("cls");
			XuatStr(str);
			return Menu(str,s,a,m);
			break;
		}
		case 2 :
		{
			system("cls");
			Dem(str);
			return Menu(str,s,a,m);
			break;
		}
		case 3 :
		{
			system("cls");
			Ktra_ch(str,s);
			return Menu(str,s,a,m);
			break;
		}
		case 4 :
		{
			system("cls");
			reverse(str);
			return Menu(str,s,a,m);
			break;
		}
		case 5 :
		{
			system("cls");
			xoa(str,a,m);
			return Menu(str,s,a,m);
			break;
		}
		case 6 :
		{
			system("cls");
			split(str);
			return Menu(str,s,a,m);
			break;
		}
		case 7 :
		{
			system("pause");
			return 0;
			break;
		}
	}
}
int main() {
	char str[50];
	char s;
	char a[50];
	int m;
	cout << "Nhap chuoi : ";
	gets(str);
	Menu(str,s,a,m);
}
	
