#include <bits/stdc++.h>

using namespace std;
class Sach
{
private:
    char Masach[20];
    char Tensach[20];
    char Nxb[20];
    int Sotrang;
    float Giatien;
public:
    void nhap()
    {
        cout << "Nhap ma sach : ";       fflush(stdin);  cin.getline(Masach,20);
        cout << "Nhap ten sach : ";      fflush(stdin);  cin.getline(Tensach,20);
        cout << "Nhap nha xuat ban : ";  fflush(stdin);  cin.getline(Nxb,20);
        cout << "So trang : " ;          cin >> Sotrang;
        cout << "Gia tien : " ;          cin >> Giatien;
    }
    void xuat()
    {
        cout << setw(20) << Masach
             << setw(10) << Tensach
             << setw(10) << Nxb
             << setw(10) << Sotrang
             << setw(10) << Giatien
             << endl;
    }
};
int main()
{
    int n;
    cout << "Nhap so luong sach : ";    cin >> n;
    Sach *a = new Sach[n];
    for(int i = 0;i<n;i++)
    {
        cout << "Nhap thong tin sach " << i+1 << endl;
        a[i].nhap();
    }

    cout << setw(20) << "Ma sach"
         << setw(10) << "Ten sach"
         << setw(10) << "Nxb"
         << setw(10) << "So trang"
         << setw(10) << "Gia tien"
         << endl;
    for(int i = 0;i<n;i++)
    {
        cout << "Nhap thong tin sach " << i+1 << endl;
        a[i].xuat();
    }
    return 0;
}
