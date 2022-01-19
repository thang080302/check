#include <bits/stdc++.h>

using namespace std;
class NhaCungCap
{
private:
    char MaNCC[5];
    char TenNCC[30];
public:
    void nhap() 
    {
    	cout << "Nhap ma phieu : ";		fflush(stdin);		cin.getline(MaNCC,5);
    	cout << "Ngay lap : ";			fflush(stdin);		cin.getline(TenNCC,30);	
	}
	void xuat()
	{
		cout << "Ma nha cung cap : \t" << MaNCC << "\tTen nha cung cap : \t" << TenNCC << endl;
	}
};
class Address
{
private:
    char DiaChi[30];
    int tel;
public:
    void nhap() 
    {
    	cout << "Nhap dia chi : ";			fflush(stdin);		cin.getline(DiaChi,30);
    	cout << "So dien thoai: ";			cin >> tel;	
	}
	void xuat()
	{
		cout << "Dia chi : \t" << DiaChi << "\tSo dien thoai : \t" << tel << endl;
	}
};
class Product
{
private:
    char MaSP[10];
    char TenSP[20];
    int SoLuong;
    float DonGia;
public:
    void nhap() 
    {
    	cout << "Nhap ma san pham : ";		fflush(stdin);		cin.getline(MaSP,10);
    	cout << "Ten san pham : ";			fflush(stdin);		cin.getline(TenSP,20);	
    	cout << "So luong : ";				cin >> SoLuong;
    	cout << "Don gia : ";				cin >> DonGia;
	}
	void xuat()
	{
		cout << setw(10) << MaSP 
			 <<	setw(20) << TenSP 
			 <<	setw(20) << SoLuong
			 <<	setw(20) << DonGia
			 <<	setw(20) << DonGia
			 << endl;
	}
};
class PhieuNhap
{
private:
    char MaPhieu[5];
    char NgayLap[20];
    NhaCungCap ncc;
    Address ads;
    int n;
    Product *SP = new Product[n];
public:
    void nhap() 
    {
    	cout << "Nhap ma phieu : ";		fflush(stdin);		cin.getline(MaPhieu,5);
    	cout << "Ngay lap : ";			fflush(stdin);		cin.getline(NgayLap,20);
		ncc.nhap();
		ads.nhap();
		cout << "Nhap so san pham : "; 	cin >> n;
		for(int i =0;i<n;i++)
		{
			SP[i].nhap();
		}
	}
	void xuat()
	{
		cout << "Ma Phieu : \t" << MaPhieu << "\tNgay Lap : \t" << NgayLap << endl;
	}
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

