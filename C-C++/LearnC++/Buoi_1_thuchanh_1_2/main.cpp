#include <bits/stdc++.h>

using namespace std;
class HCN
{
private:
    float chieu_dai;
    float chieu_rong;
public:
    void nhap()
    {
        cout << "Nhap chieu dai : ";     cin >> chieu_dai;
        cout << "Nhap chieu rong : ";    cin >> chieu_rong;
    }
    void ve()
    {
        cout << "Hinh chu nhat vua nhap : \n";
        for(int i = 0;i<chieu_rong;i++)
        {
               for(int j = 0;j<chieu_dai;j++)
            {
                cout << " * ";
            }
            cout << endl;
        }

    }
    float dientich()
    {
        return chieu_dai*chieu_rong;
    }
    float chuvi()
    {
        return (chieu_dai+chieu_rong)/2;
    }
};
int main()
{
    HCN x;
    x.nhap();
    x.ve();
    cout << "\nDien tich hinh chu nhat : " << x.dientich() << endl;
    cout << "Dien tich hinh chu nhat : " << x.chuvi();
    return 0;
}
