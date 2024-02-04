#include<iostream>
using namespace std;
class CPhanSo {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	CPhanSo Tong(CPhanSo);
	CPhanSo Hieu(CPhanSo);
	CPhanSo	Tich(CPhanSo);
	CPhanSo Thuong(CPhanSo);
};
void CPhanSo::Nhap() {
	cout << "\nNhap tu: "; cin >> tu;
	cout << "\nNhap mau: "; cin >> mau;
}
void CPhanSo::Xuat() {
	cout << "\nTu = " << tu;
	cout << "\nMau = " << mau;
}
CPhanSo CPhanSo::Tong(CPhanSo x) {
	CPhanSo temp;
	temp.tu = tu*x.mau+x.tu*mau;
	temp.mau = mau * x.mau;
	return temp;
}
CPhanSo CPhanSo::Hieu(CPhanSo x){
	CPhanSo temp;
	temp.tu = tu * x.mau - mau * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
CPhanSo CPhanSo::Tich(CPhanSo x) {
	CPhanSo temp;
	temp.tu = tu * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
CPhanSo CPhanSo::Thuong(CPhanSo x){
	CPhanSo temp;
	temp.tu = tu * x.mau;
	temp.mau = mau * x.tu;
	return temp;
}
int main() {
	CPhanSo ps1, ps2,kq;
	cout << "\nNhap phan so thu 1: ";
		ps1.Nhap();
	cout << "\nNhap phan so thu 2: ";
		ps2.Nhap();
	kq = ps1.Tong(ps2);
		cout << "\nTong cua 2 phan so: ";
		kq.Xuat();
	kq = ps1.Hieu(ps2);
		cout << "\nHieu cua 2 phan so: ";
		kq.Xuat();
	kq = ps1.Tich(ps2);
		cout << "\nTich cua 2 phan so: ";
		kq.Xuat();
	kq = ps1.Thuong(ps2);
		cout << "\nThuong cua 2 phan so: ";
		kq.Xuat();
	return 1;
}