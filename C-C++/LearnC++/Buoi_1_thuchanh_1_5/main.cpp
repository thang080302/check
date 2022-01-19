#include<bits/stdc++.h>
using namespace std;
void Swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
class SoNguyen
{
private:
    int value;
public:
    void nhap()
    {
        cout << "Nhap gia tri : ";      cin >> value;
    }
    void xuat()
    {
        cout << value << " ";
    }
    friend class Mang;
};
class Mang {
private:
    int n;
    SoNguyen *a = new SoNguyen[n];
public:
    void nhap()
    {
        cout << "Nhap so phan tu mang : ";      cin >> n;
        for(int i =0;i<n;i++)
        {
            a[i].nhap();
        }
    }
    void xuat()
    {
        cout << "Mang : ";
        for(int i =0;i<n;i++)
        {
            a[i].xuat();
        }
    }
    void Sort()
    {
        for(int i =0;i<n;i++)
        {
            for(int j = i+1 ;j<n;j++)
            {
                if( a[i].value > a[j].value ) Swap(a[i].value,a[j].value);
            }

        }
    }
};

int main() {
    Mang a;
    a.nhap();
    a.xuat();
    a.Sort();
    cout << "\nMang sau khi sap xep : \n";
    a.xuat();
    return 0;
}
