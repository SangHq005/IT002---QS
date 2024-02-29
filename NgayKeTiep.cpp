#include<iostream>
using namespace std;

class CNgay 
{
	private:
		int Ngay;
		int Thang;
		int Nam;
	public:
		void Nhap();
		void Xuat();
		bool KTNamNhuan();
		bool DieuKien();
		CNgay NgayKeTiep(CNgay);
};
void CNgay::Nhap() 
{
		cout << "Nhap ngay: ";
		cin >> Ngay;
		cout << "Nhap thang: ";
		cin >> Thang;
		cout << "Nhap nam: ";
		cin >> Nam;
}
bool CNgay::DieuKien() 
{
	int NgayThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (Ngay < 1 || Ngay > 31 || Thang > 12 || Thang < 1 || Nam < 1)
	{
		return 0;
	}
	if (KTNamNhuan() == 0)
	{
		if (Ngay > 28)
		{
			return 0;
		}
	}
	return 1;
}
void CNgay::Xuat()
{
	cout << "\tNgay " << Ngay;
	cout << "\tThang " << Thang;
	cout << "\tNam " << Nam;
}
bool CNgay::KTNamNhuan()
{
	if ((Nam % 4 == 0) && (Nam % 100 != 0))
		return 1;
	if (Nam % 400 == 0)
		return 1;
	return 0;
}
CNgay CNgay::NgayKeTiep(CNgay ngay)
{
	int NgayThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KTNamNhuan() == 1)
	{
		NgayThang[1] = 29;
	}
	++Ngay;
	if (Ngay > NgayThang[Thang - 1])
	{
		++Thang;
		if (Thang > 12)
		{
			++Nam;
		}
		Ngay = 1;
	}
	return *this;
}
int main()
{
	CNgay ngay;
	ngay.Nhap();
	if (ngay.DieuKien() == 1)
	{
		cout << "\nNgay ban dau: ";
		ngay.Xuat();
		cout << "\nNgay ke tiep: ";
		CNgay result = ngay.NgayKeTiep(ngay);
		result.Xuat();
		cout << endl;
	}
	else
	{
		cout << "Ngay Khong hop le!"<< endl;
		ngay.Nhap();
	}
	return 0;
}
