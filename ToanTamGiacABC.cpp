#include <iostream>
using namespace std;
class CDiem {
private:
	int x;
	int y;
public:
	void Nhap_Toa_Do();
	void Xuat_Toa_Do();
	float Lay_X();
	float Lay_Y();
	void Cap_Nhat_X(float);
	void Cap_Nhat_Y(float);
	float Khoang_Cach(CDiem);
};
void CDiem::Nhap_Toa_Do() {
	cout << "\nNhap x: "; cin >> x;
	cout << "\nNhap y: "; cin >> y;
}
void CDiem::Xuat_Toa_Do() {
	cout << "X =  " << x <<"\t";
	cout << "Y = " << y;
}
float CDiem::Lay_X() {
	return x;
}
float CDiem::Lay_Y() {
	return y;
}
void CDiem::Cap_Nhat_X(float xx) {
	x = xx;
}
void CDiem::Cap_Nhat_Y(float yy) {
	y = yy;
}
float CDiem::Khoang_Cach(CDiem P) {
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}
class CTam_Giac {
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	void Nhap_Diem();
	void Xuat_Diem();
	float Chu_vi();
	float Dien_tich();
	CDiem Trong_tam();
};
void CTam_Giac::Nhap_Diem() {
	cout << "\nNhap A: ";  
	A.Nhap_Toa_Do();
	cout << "\nNhap B: "; 
	B.Nhap_Toa_Do();
	cout << "\nNhap C: ";
	C.Nhap_Toa_Do();
}
void CTam_Giac::Xuat_Diem() {
	cout << "\nA:  ";
	A.Xuat_Toa_Do();
	cout << "\nB:  ";
	B.Xuat_Toa_Do();
	cout << "\nC:  ";
	C.Xuat_Toa_Do();
}
float CTam_Giac::Chu_vi() {
	float a = B.Khoang_Cach(C);
	float b = A.Khoang_Cach(C);
	float c = A.Khoang_Cach(B);
	return (a + b + c);
}
float CTam_Giac::Dien_tich() {
	float a = B.Khoang_Cach(C);
	float b = A.Khoang_Cach(C);
	float c = A.Khoang_Cach(B);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
CDiem CTam_Giac::Trong_tam() {
	CDiem temp;
	temp.Cap_Nhat_X((A.Lay_X() + B.Lay_X() + C.Lay_X())/3);
	temp.Cap_Nhat_Y((A.Lay_Y() + B.Lay_Y() + C.Lay_Y())/3);
	return temp;
}
int main() {
	CTam_Giac tg;;
	tg.Nhap_Diem();
	tg.Xuat_Diem();
	float cv = tg.Chu_vi();
	cout << "\nChu vi tam giac: " << cv << endl;
	float dt = tg.Dien_tich();
	cout << "\nDien tich tam giac: " << dt<<endl;
	CDiem G = tg.Trong_tam();
	cout << "\nTrong tam tam giac: ";
	G.Xuat_Toa_Do();
	return 1;
}