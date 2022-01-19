#include <bits/stdc++.h>

using namespace std;
class HANG
{
private:
    char MaHang[20];
    char TenHang[20];
    float DonGia;
    int SoLuong;
public:
    void nhap()
    {
        cout << "Nhap ma hang : ";     fflush(stdin);   cin.getline(MaHang,20);
        cout << "Nhap ten hang : ";    fflush(stdin);   cin.getline(TenHang,20);
        cout << "Nhap don gia : ";     cin >> DonGia;
        cout << "Nhap so luong : ";    cin >> SoLuong;
    }
    void xuat()
    {
        cout << setw(20) << left << MaHang
             << setw(20) << left << TenHang
             << setw(10) << left << DonGia
             << setw(10) << left << SoLuong
             << setw(20) << left << DonGia*SoLuong
             << endl;
    }

};
int main()
{
    int n;
    cout << "Nhap so luong hang can ban : ";    cin >> n;
    HANG *nhapkhau = new HANG[n];
    for(int i =0;i<n;i++)
    {
        nhapkhau[i].nhap();
    }
    cout << setw(20) << left << "Ma Hang"
             << setw(20) << left << "Ten Hang"
             << setw(10) << left << "Don Gia"
             << setw(10) << left << "So Luong"
             << setw(20) << left << "Thanh Tien"
             << endl;
    for(int i =0;i<n;i++)
    {
        nhapkhau[i].xuat();
    }

    return 0;
}
