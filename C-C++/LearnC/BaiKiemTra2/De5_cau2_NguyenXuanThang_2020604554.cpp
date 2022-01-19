#include<iostream>
#include<string.h>
using namespace std;
void dem_tu(char *s)
{
	int n = strlen(s);
	int dem = 0;
	if(s[0] != '\0') dem = 1;
	for(int i =0;i<n;i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			dem++;
	}	
	cout << "So tu : " << dem << endl;
}
void search(char *s, char a)
{
	int count = 0;
	int n = strlen(s);
	for(int i = 0;i<n;i++)
	{
		if(s[i] == a) 
		{
			cout << " vi tri : " << i+1 << endl;
			count++;
		}
	}
	if(count == 0) cout << "Mang khong chua ki tu tren !";
}
int main()
{
	char s[20];
	char a;
	cout << "Nhap xau ki tu : ";
	gets(s);
	cout << "Chuoi vua nhap : ";
	puts(s);
	dem_tu(s);
	cout << "Nhap ki tu can tim : ";
	cin >> a;
	search(s,a);
	cout << "\nChuoi sau khi dao : " << strrev(s);
	return 0;
}
