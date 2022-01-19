#include<iostream>
#include<math.h>
#include<string.h>
#include<fstream>
using namespace std;
void swap(int &x,int &y) {
	int temp = x;
	x=y;
	y=temp;
}
struct SV {
	char name[40];
	char gender[10];
	int age;
	float DTB;
	char Xep_Loai[10];
};
void inputSV(SV *sv,int n) 
{
	for(int i = 0; i< n; i++){
		cout << "Nhap sinh vien thu "<<i+1<<" : ";
		cout << "\n\tNhap ten sinh vien : ";cin.ignore();
		gets(sv[i].name);
		cout << "\n\tGioi tinh : ";
		gets(sv[i].gender);
		cout << "\n\tTuoi : ";
		cin >> sv[i].age;
		cout << "\n\tDiem trung binh : ";
		cin >> sv[i].DTB;
	}
}

void AddSV(SV *sv,int &n) 
{
	n++;
	cout << "\n\tNhap ten sinh vien : ";cin.ignore();
	gets(sv[n-1].name);
	
	cout << "\n\tGioi tinh : ";
	gets(sv[n-1].gender);
	
	cout << "\n\tTuoi : ";
	cin >> sv[n-1].age;
	
	cout << "\n\tDiem trung binh : ";
	cin >> sv[n-1].DTB;
	
	cout << "Sinh vien da duoc them !";
}

void Sort(SV *sv,int n)
{
	for(int i = 0; i< n; i++)
	{
		for(int j = i+1;j<n;j++) 
		{
			if(sv[i].DTB > sv[j].DTB) swap(sv[i].DTB,sv[j].DTB);
		}
	}
	for(int i = 0; i< n; i++)
	{
		cout << sv[i].DTB << " ";
	}
	cout << "Da sap xep DTB theo thu tu tang dan !";
}
			
void outputSV(SV *sv,int n)
{
	cout <<"\t\t=============== Danh Sach =================\n";
	cout <<"STT \t\t Name \t\t Gender \t\t Age \t\t DTB\n";
	for(int i = 0; i< n; i++)
	{
		cout << i+1;
		cout << "\t\t" << sv[i].name;
		cout << "\t\t" << sv[i].gender;
		cout << "\t\t" << sv[i].age;
		cout << "\t\t" << sv[i].DTB;
		cout << endl;
	}
	cout<<"\n\t\t===========================================";
}

void Classification(SV *sv,int n) 
{
	for(int i = 0;i<n;i++)
	{
		if(sv[i].DTB>=8) 
				strcpy(sv[i].Xep_Loai,"Gioi");
		else if(sv[i].DTB >= 6.5 && sv[i].DTB < 8) 
				strcpy(sv[i].Xep_Loai , "Kha");
		else if(sv[i].DTB>5 && sv[i].DTB<6.5) 
				strcpy(sv[i].Xep_Loai , "Trung Binh");
		else strcpy(sv[i].Xep_Loai , "Yeu");
	}
	cout <<"\n\t\t=============== Xep Loai =================\n";
	cout <<"STT \t\t Name \t\t Xep Loai\n";
	for(int i = 0; i< n; i++)
	{
		cout << i+1;
		cout << "\t\t" << sv[i].name;
		cout << "\t\t" << sv[i].Xep_Loai;
		cout << endl;
	}
	cout<<"\n\t\t===========================================";
}
void Output_to_file(SV *sv,int n) 
{
	ofstream FileOut;
	FileOut.open("C:\\Users\\HP-GAMING\\OneDrive\\Desktop\\C-C++\\LearnC\\ListSV.txt",ios_base::out);
	FileOut <<"\t\t=============== Danh Sach =================\n";
	FileOut <<"STT \t\t Name \t\ tGender \t\t Age \t\t DTB \t\t XepLoai\n";
	for(int i = 0; i< n; i++)
	{
		FileOut << i+1;
		FileOut << "\t\t" << sv[i].name;
		FileOut << "\t\t" << sv[i].gender;
		FileOut << "\t\t" << sv[i].age;
		FileOut << "\t\t" << sv[i].DTB;
		FileOut << "\t\t" << sv[i].Xep_Loai;
		FileOut << endl;
	}
	FileOut<<"\n\t\t===========================================";
	FileOut.close();
}
int Menu(SV *sv,int n) {
	cout <<"\n================== Menu ===================\n";
	cout <<"1.Them sinh vien \n";
	cout <<"2.Hien thi danh sach \n";
	cout <<"3.Sap xep diem trung binh tang dan \n";
	cout <<"4.Xep Loai \n";
	cout <<"5.Xuat danh sach vao file ListSV.txt \n";
	cout <<"6.Thoat chuong trinh \n";
	cout <<"====================//=====================\n";
	int chon;
	cout << "Nhap lua chon : ";
	cin >> chon;
	switch(chon)
	{
		case 1 :
		{
			system("cls");
			AddSV(sv,n);
			return Menu(sv,n);
			break;
		}
		case 2 :
		{
			system("cls");
			outputSV(sv,n);
			return Menu(sv,n);
			break;
		}
		case 3 :
		{
			system("cls");
			Sort(sv,n);
			return Menu(sv,n);
		}
		case 4 :
		{
			system("cls");
			Classification(sv,n);
			return Menu(sv,n);
			break;
		}
		case 5 :
		{
			system("cls");
			Output_to_file(sv,n);
			return Menu(sv,n);
			break;
		}
		case 6 :
		{
			system("pause");
			return 0;
			break;
		}
	}
}
int main () {
	int n;
	SV *sv = new SV[300];
	cout << "Nhap so luong sinh vien : ";
	cin >> n;
	inputSV(sv,n);
	Menu(sv,n);
	delete[]sv;
	return 0;
}
	
