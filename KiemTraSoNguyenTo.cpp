#include <iostream>
using namespace std;
bool laSoNguyenTo1(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2) {
        return false;
    }

    for (int i = 2; i < (n - 1); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
void main()
{
    int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;

    if (laSoNguyenTo1(n)) {
        cout << "La so nguyen to";
    }
    else {
        cout << "Khong phai so nguyen to";
    }
}