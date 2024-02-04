#include<iostream>
using namespace std;
class CPhanSo {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	float SoSanh(CPhanSo,CPhanSo);
};
void CPhanSo::Nhap() {
	cout << "\nNhap tu: ";
	cin >> tu;
	cout << "\nNhap mau: ";
	cin >> mau;
}
void CPhanSo::Xuat() {
	cout << "\nTu= " << tu;
	cout << "\nMau= " << mau;
}
float CPhanSo::SoSanh(CPhanSo A, CPhanSo B) {
	float a = (float)A.tu / A.mau;
	float b = (float)B.tu / B.mau;
	if (a > b)
		return 1;
	else
		return -1;
	return 0;
}
int main() {
	CPhanSo ps1, ps2;
	ps1.Nhap();
	ps2.Nhap();
	float kq = ps1.SoSanh(ps1,ps2);
	cout << "\nPhan so lon nhat la: ";
	if ( kq>=0)
		ps1.Xuat();
	else
		ps2.Xuat();
	return 1;
}