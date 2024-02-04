#include<iostream>
using namespace std;
class CPhanSo {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	float PhansoMax(CPhanSo);
};
void CPhanSo::Nhap() {
	cout << "\nNhap tu: "; cin >> tu;
	cout << "\nNhap mau: "; cin >> mau;
}
void CPhanSo::Xuat() {
	cout << "\nTu: " << tu;
	cout << "\nMau: " << mau;
}
float CPhanSo::PhansoMax(CPhanSo ps) {
	float a = (float) tu / mau;
	float b = (float) ps.tu / ps.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
int main() {
	CPhanSo ps1, ps2;
	cout << "\nNhap phan so thu 1: ";
	ps1.Nhap();
	cout << "\nNhap phan so thu 2: ";
	ps2.Nhap();
	float kq = ps1.PhansoMax(ps2);
	cout << "\nPhan so lon nhat la: ";
	if(kq>=0)
		ps1.Xuat();
	else
		ps2.Xuat();
	return 1;
}