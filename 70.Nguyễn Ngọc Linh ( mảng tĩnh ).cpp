#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
private:
    string hoTen;
    int tuoi;
    double luong;

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
    NhanVien dsnv[10];

    // Nhap du lieu cho 10 nhan vien
    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== NHAP THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        dsnv[i].nhap();
    }

    // Xuat du lieu
    cout << "\n\n========== DANH SACH NHAN VIEN ==========" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        dsnv[i].xuat();
    }

    return 0;
}