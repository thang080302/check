#include <bits/stdc++.h>

using namespace std;
class SinhVien
{
private:
    char Masv[20];
    char hoten[30];
    int tuoi;
    float diem;
public:
    void nhap()
    {
        cout << "Nhap ma sv : ";        fflush(stdin);  cin.getline(Masv,20);
        cout << "Nhap ma ho ten : ";    fflush(stdin);  cin.getline(hoten,30);
        cout << "Nhap tuoi : ";         cin >> tuoi;
        cout << "Nhap diem : ";         cin >> diem;
    }
    void xuat()
    {
        cout << setw(10) << left << Masv
             << setw(20) << left << hoten
             << setw(10) << left << tuoi
             << setw(10) << left << diem
             << endl;
    }
};
int main()
{
    int n;
    cout << "Nhap so luong sinh vien : ";   cin >> n;
    SinhVien *a = new SinhVien[n];
    for(int i =0;i<n;i++)
    {
        a[i].nhap();
    }
    cout << setw(10) << left << "Id"
         << setw(20) << left << "Name"
         << setw(10) << left << "Age"
         << setw(10) << left << "Score"
         << endl;
    for(int i =0;i<n;i++)
    {
        a[i].xuat();
    }
    return 0;
}
