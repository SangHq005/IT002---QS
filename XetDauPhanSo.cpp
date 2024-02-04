#include<iostream>
using namespace std;
class CPhanSo {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	int XetDau();
};
void CPhanSo::Nhap() {
	cout << "\nNhap tu: ";
	cin >> tu;
	cout << "\nNhap mau: ";
	cin >> mau;
}
void CPhanSo::Xuat() {
	cout << "\nTu = " << tu;
	cout << "\nMau = " << mau;
}
int CPhanSo::XetDau() {
	if (tu * mau > 0)
		return 1;
	if (tu * mau < 0)
		return -1;
	return 0;
}
int main() {
	CPhanSo ps;
	ps.Nhap();
	int kq = ps.XetDau();
	switch (kq) {
	case 1: cout << "\nPhan so > 0 ";
		break;
	case -1:cout << "\nPhan so < 0";
		break;
	case 0: cout << "\nPhan so = 0";
		break;
	}
	return 0;
}