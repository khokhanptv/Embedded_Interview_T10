#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class sinhvien {
protected:
    string tensv;
    int tuoisv;
    int idsv;
    float diemtoansv;
    float diemlysv;
    float diemhoasv;
    float diemtrungbinhsv;

public:
    sinhvien() : tuoisv(0), idsv(0), diemtoansv(0.0), diemlysv(0.0), diemhoasv(0.0), diemtrungbinhsv(0.0) {}

    sinhvien(string name, int old, int id, float diemtoan, float diemly, float diemhoa)
        : tensv(name), tuoisv(old), idsv(id), diemtoansv(diemtoan), diemlysv(diemly), diemhoasv(diemhoa) {}

    void nhapthongtinsv() {
        cout << "Nhap ten sinh vien: ";
        cin.ignore();
        getline(cin, tensv);
        
        cout << "Nhap tuoi sinh vien: ";
        cin >> tuoisv;

        cout << "Nhap ID sinh vien: ";
        cin >> idsv;

        cout << "Nhap diem toan sinh vien: ";
        cin >> diemtoansv;

        cout << "Nhap diem ly sinh vien: ";
        cin >> diemlysv;

        cout << "Nhap diem hoa sinh vien: ";
        cin >> diemhoasv;
    }

    void diemtrungbinh() {
          diemtrungbinhsv = (diemtoansv + diemlysv + diemhoasv) / 3;
    }

    string layXepLoai() const {
        if (diemtrungbinhsv > 8) {
            return "Gioi";
        } else if (diemtrungbinhsv >= 6.5 && diemtrungbinhsv < 8) {
            return "Kha";
        } else {
            return "TB";
        }
    }

    string layThongTin() const {
        return "Ten: " + tensv + "\nTuoi: " + to_string(tuoisv) + "\nID: " + to_string(idsv) +
               "\nDiem Toan: " + to_string(diemtoansv) + "\nDiem Ly: " + to_string(diemlysv) +
               "\nDiem Hoa: " + to_string(diemhoasv) + "\nDiem Trung Binh: " + to_string(diemtrungbinhsv) +
               "\nXep loai: " + layXepLoai();
    }

    int layIdSV() const {
        return idsv;
    }
};

class danhsachSV {
private:
    vector<sinhvien> danhsachsinhvien;

    vector<sinhvien>::iterator timSinhVienTheoID(int id) {
        return find_if(danhsachsinhvien.begin(), danhsachsinhvien.end(),
                       [id]( sinhvien sv) { return sv.layIdSV() == id; });
    }

    bool kiemTraTrungID(int id) {
    return find_if(danhsachsinhvien.begin(), danhsachsinhvien.end(),
                       [id]( sinhvien sv) { return sv.layIdSV() == id; }) != danhsachsinhvien.end();
    }

public:
    void xoasv(int id) {
        auto it = timSinhVienTheoID(id);
        if (it != danhsachsinhvien.end()) {
            danhsachsinhvien.erase(it);
            cout << "Da xoa sinh vien co ID " << id << endl;
        } else {
            cout << "Khong tim thay sinh vien co ID " << id << endl;
        }
    }

    // Sửa thông tin của sinh viên
    void suaThongTinSV(int id) {
        auto it = timSinhVienTheoID(id);

        if (it != danhsachsinhvien.end()) {
            // Nếu tìm thấy sinh viên theo ID
            cout << "Nhap thong tin moi cho sinh vien:\n";
            sinhvien svMoi;
            svMoi.nhapthongtinsv();
            svMoi.diemtrungbinh();

            // Cập nhật thông tin cho sinh viên
            *it = svMoi;
            cout << "Da cap nhat thong tin cho sinh vien co ID " << id << endl;
        } else {
            // Nếu không tìm thấy sinh viên
            cout << "Khong tim thay sinh vien co ID " << id << endl;
        }
    }

    // Sắp xếp sinh viên theo tên
    void sapXepTheoTen() {
        sort(danhsachsinhvien.begin(), danhsachsinhvien.end(),
             []( sinhvien sv1,  sinhvien sv2) { return sv1.layThongTin() < sv2.layThongTin(); });
    }

    // Sắp xếp sinh viên theo điểm trung bình
        void sapXepTheoDiemTB() {
            sort(danhsachsinhvien.begin(), danhsachsinhvien.end(),
                []( sinhvien sv1,  sinhvien sv2) { return sv1.layXepLoai() > sv2.layXepLoai(); });
        }

    void inThongTinDanhSach() const {
        for ( auto  sv : danhsachsinhvien) {
            cout << sv.layThongTin() << endl;
            cout << "-------------" << endl;
        }
    }
    void nhapThemSV() {
    int id;
    bool trungID;

    do {
        sinhvien sv;
        trungID = false;
        sv.nhapthongtinsv();
        id = sv.layIdSV();

        if (kiemTraTrungID(id)) {
            cout << "ID da ton tai. Vui long nhap lai.\n";
            trungID = true;
        } else {  
            sv.diemtrungbinh();          
            danhsachsinhvien.push_back(sv);
            
           
            
        }
    } while (trungID);
    }



};

int main() {
    danhsachSV dssv;

    int addsv = 0;
    int xoasv = 0;
    int suaThongTin = 0;
    int soluongsv;
    do {
        cout << "Nhap so luong sinh vien (khong duoc am): ";
        cin >> soluongsv;
    } while (soluongsv < 0);

    for (int i = 0; i < soluongsv; i++) {
        dssv.nhapThemSV();
       
    }

    cout << "Ban co muon them sv khong? co nhan phim 1, khong nhan phim 0: ";
    cin >> addsv;
    if (addsv == 1) {
        dssv.nhapThemSV();
    }

    cout << "Ban co muon xoa sv khong? co nhan phim 1, khong nhan phim 0: ";
    cin >> xoasv;
    if (xoasv == 1) {
        int idcanxoa;
        cout << "Vui long nhap ID SV can xoa: ";
        cin >> idcanxoa;
        dssv.xoasv(idcanxoa);
    }

    cout << "Ban co muon sua thong tin sv khong? co nhan phim 1, khong nhan phim 0: ";
    cin >> suaThongTin;
    if (suaThongTin == 1) {
        int idcansua;
        cout << "Vui long nhap ID SV can sua: ";
        cin >> idcansua;
        dssv.suaThongTinSV(idcansua);
    }

     
   // dssv.sapXepTheoTen();
    //cout << "Danh sach sinh vien sau khi sap xep theo ten:\n";
   // dssv.inThongTinDanhSach();

    dssv.sapXepTheoDiemTB();
    cout << "Danh sach sinh vien sau khi sap xep theo diem trung binh:\n";
    dssv.inThongTinDanhSach();

    return 0;
}
