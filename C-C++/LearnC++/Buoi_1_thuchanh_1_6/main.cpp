#include<bits/stdc++.h>
using namespace std;
void Swap(int &x,int &y)

class SoThuc
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
    SoThuc *a = new SoThuc[n];
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
    float FindMax()
    {
        int MAX = a[0].value;
        for(int i =0;i<n;i++)
        {
            if(a[i].value >= MAX) MAX = a[i].value;
        }
        return MAX;
    }
    float FindMin()
    {
        int MIN = a[0].value;
        for(int i =0;i<n;i++)
        {
            if(a[i].value <= MIN) MIN = a[i].value;
        }
        return MIN;
    }
};

int main() {
    Mang arr;
    arr.nhap();
    arr.xuat();
    cout << "\n Gia tri lon nhat : " << arr.FindMax() ;
    cout << "\n Gia tri nho nhat : " << arr.FindMin() ;

    return 0;
}
