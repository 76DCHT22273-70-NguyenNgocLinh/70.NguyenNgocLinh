#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
private:
    string hoTen;
    int tuoi;
    float luong;

public:
    void nhap()
    {
        cout << "Nhap ho ten: ";
        getline(cin >> ws, hoTen);

        cout << "Nhap tuoi: ";
        cin >> tuoi;

        cout << "Nhap luong: ";
        cin >> luong;
    }

    void xuat()
    {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Luong: " << luong << endl;
    }
};

int main()
{
    // Cach 2: dung toan tu new cap phat mang dong

    NhanVien *dsnv; // khai bao con tro

    // Cap phat mang dong 10 nhan vien
    dsnv = new NhanVien[10];

    // Nhap du lieu cho 10 nhan vien
    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== NHAP THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        dsnv[i].nhap();
    }

    // Xuat du lieu
    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== XUAT THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        dsnv[i].xuat();
    }

    // Giai phong bo nho
    delete[] dsnv;

    return 0;
}