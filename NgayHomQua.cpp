#include <iostream>
using namespace std;
class CNgay {
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	void Xuat();
	int ktNhuan();
	CNgay NgayHomQua();
};
void CNgay::Nhap() {
	cout << "\nNhap ngay: ";
	cin >> Ngay;
	cout << "\nNhap thang: ";
	cin >> Thang;
	cout << "\nNhap nam: ";
	cin >> Nam;
}
void CNgay::Xuat() {
	cout << "\nNgay: " << Ngay;
	cout << "\nThang: " << Thang;
	cout << "\nNam: " << Nam;
}
int CNgay::ktNhuan() {
	if ((Nam % 4 == 0) && (Nam % 100 != 0))
		return 1;
	if (Nam % 400 == 0)
		return 1;
	return 0;
}
CNgay CNgay::NgayHomQua() {
	int NgayThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan() == 1)
		NgayThang[1] = 29;
	--Ngay;
	if (Ngay == 0) {
		Thang--;
		if (Thang == 0) {
			Nam--;
			Thang = 12;
		}
		Ngay = NgayThang[Thang - 1];
	}
	return *this;
}
int main() {
	CNgay ngay;
	ngay.Nhap();
	cout << "\nNgay ban dau: ";
	ngay.Xuat();
	cout << endl;
	CNgay kq = ngay.NgayHomQua();
	cout << "\nNgay hom qua: ";
	kq.Xuat();
	return 1;
}