#include <iostream>
using namespace std;
class CToa_Do {
private:
	int x;
	int y;
public:
	void Nhap_Toa_Do(){
		cout << "\nNhap x: "; cin >> x;
		cout << "\nNhap y: "; cin >> y;
	}
	void Xuat_Toa_Do(){
		cout << "\n X = " << x;
		cout << "\n Y = " << y;
	}
};
class CTron {
private:
	CToa_Do I;
	float R;
public:
	void Nhap() {
		cout << "\nNhap tam I: ";
		I.Nhap_Toa_Do();
		cout << "\nNhap ban kinh R: ";
		cin >> R;
	}
	void Xuat() {
		cout << "\nToa do tam I = ";
		I.Xuat_Toa_Do();
		cout << "\nBan kinh R = " << R;
	}
	float Chu_Vi() {
		return 2 * 3.14 * R;
	}
	float Dien_Tich() {
		return 3.14 * R * R;
	}
};
int main() {
	CTron tron;
	tron.Nhap();
	tron.Xuat();
	float cv = tron.Chu_Vi();
	cout << "\nChu vi duong tron: " << cv;
	float dt = tron.Dien_Tich();
	cout << "\nDien tich duong tron: " << dt;
	return 1;
}