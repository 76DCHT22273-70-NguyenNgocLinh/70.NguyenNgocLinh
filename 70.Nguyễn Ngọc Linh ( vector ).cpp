#include <iostream>
#include <string>
#include <vector>

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
    // Cach 3: dung vector

    vector<NhanVien> ds;

    // Nhap du lieu cho 10 nhan vien
    for (int i = 0; i < 10; i++)
    {
        NhanVien nv;

        cout << "\n=== NHAP THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        nv.nhap();

        // Them nhan vien vao danh sach
        ds.push_back(nv);
    }

    // Xuat du lieu
    for (int i = 0; i < ds.size(); i++)
    {
        cout << "\n=== XUAT THONG TIN NHAN VIEN THU "
             << i + 1 << " ===" << endl;

        ds[i].xuat();
    }

    return 0;
}