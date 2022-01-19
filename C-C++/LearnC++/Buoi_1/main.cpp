#include <bits/stdc++.h>

using namespace std;
class HANG
{
private :
    char ma_hang[30];
    char ten_hang[30];
    double don_gia;
    char nsx[30];
public :
    void nhap()
    {
        cout << "Nhap ma hang : ";          fflush(stdin);  cin.getline(ma_hang,30);
        cout << "Nhap ten hang : ";         fflush(stdin);  cin.getline(ten_hang,30);
        cout << "Nhap don gia: ";           cin >> don_gia;
        cout << "Nhap nha san xuat : ";     fflush(stdin);  cin.getline(nsx,30);
    }
    void xuat()
    {
        cout << "\tThong tin : \n";
        cout << setw(10) << ma_hang
             << setw(10) << ten_hang
             << setw(10) << don_gia
             << setw(10) << nsx
             << endl;
    }
};
int main()
{
    int n;
    HANG *tivi = new HANG[n];
    cout << "nhap so luong hang : ";
    cin >> n;
    cout << setw(10) << "ma hang" << setw(10) << "ten hang" << setw(10) << "don gia" << setw(10) << "Nha san xuat" << endl;
    for(int i = 0;i<n;i++)
    {
        tivi[i].nhap();
    }
    for(int i = 0;i<n;i++)
    {
        tivi[i].xuat();
    }
    return 0;
}
