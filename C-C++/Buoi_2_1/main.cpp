#include <bits/stdc++.h>

using namespace std;
class SinhVien
{
    char Sv[30];
    char IdSv[30];
    int age;
public:
    void nhap()
    {
        cout << "Nhap ho ten sinh vien : ";      fflush(stdin);  cin.getline(Sv,30);
        cout << "Nhap Id : ";                    fflush(stdin);  cin.getline(IdSv,30);
        cout << "Nhap tuoi : ";                  cin >> age;
    }
    void xuat()
    {
        cout << setw(30) << left << Sv
             << setw(30) << left << IdSv
             << setw(30) << left << age<< endl;
    }
};
class LopHoc
{
    char MaMH[30];
    char Phong[30];
    int n;
    SinhVien *x ;
public :
    void nhap()
    {
        cout << "Nhap ma mon hoc : ";      fflush(stdin);  cin.getline(MaMH,30);
        cout << "Nhap phong: ";           fflush(stdin);  cin.getline(Phong,30);
        cout << "Nhap so sinh vien : ";     cin >> n;
        x = new SinhVien[n];
        for(int i =0;i<n;i++)
        {
            x[i].nhap();
        }
    }
    void xuat()
    {
        cout << setw(30) << left << "Ma mon hoc"
             << setw(30) << left << "Phong" << endl;
        cout << setw(30) << left << MaMH
             << setw(30) << left << Phong << endl;
        cout << setw(30) << left << "Ho ten sinh vien"
             << setw(30) << left << "Id"
             << setw(30) << left << "Age" << endl;
        for(int i =0;i<n;i++)
        {
            x[i].xuat();
        }
    }
};
int main()
{
    LopHoc a;
    a.nhap();
    a.xuat();
    return 0;
}
;
