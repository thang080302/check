#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;

void nhap_so(int &a, float &x)
{
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so thuc x: ";
    cin >> x;
}

void Show(int a, float x)
{
    cout << "Dia chi cua a la: " << &a << endl;
    cout << "Dia chi cua x la: " << &x << endl;
    cout << "Gia tri cua a = " << a << endl;
    cout << "Gia tri cua x = " << x << endl;
}

void con_tro(int a, int x)
{
    int *m, *n;
    m = &a;
    n = &x;
    cout << "__________Thong qua con tro__________ " << endl
         << "Gia tri cua a = " << *m << endl
         << "Gia tri cua x = " << *n << endl
         << "Gia tri con tro vao a = " << m << endl
         << "Gia tri con tro vao x = " << n;
}

int main()
{
    int a;
    float x;
    nhap_so(a, x);
    Show(a, x);
    con_tro(a, x);
    return 0;
}
