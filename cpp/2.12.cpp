// Sử dụng C-Free 5
// Giải thuật Quay lui

#include <iostream> // cin, cout
#include <cstdlib> // NULL

/* CÁC KIỂU DỮ LIỆU */

enum PhepToan {
  CONG, TRU
};

/* CÁC HÀM CẦN XÂY DỰNG */

// Chương trình chính
int main ();

// Hàm nhập
void nhap (int & tong, int * & dayso, unsigned & soluong);

// Hàm xuất
void xuat (bool ketqua, int * dayso = NULL, PhepToan * pheptoan = NULL, unsigned soluong = 0);

// Hàm xuất đa thức
void xuat (int * dayso, PhepToan * pheptoan, unsigned soluong);

// Hàm tìm đa thức
bool timdathuc (PhepToan * & pheptoan, int tong, int * dayso, unsigned soluong);

/* NỘI DUNG */

int main () {
  int tong, * dayso, soluong;
  PhepToan * pheptoan;
  nhap(tong, dayso, soluong);
  bool ketqua = timdathuc(pheptoan, tong, dayso, soluong);
  xuat(ketqua, dayso, pheptoan, soluong - 1);
  delete [] dayso;
  delete [] pheptoan;
  return 0;
}

void nhap (int & tong, int * & dayso, unsigned & soluong) {
  cout << "Nhap tong: ";
  cin >> tong;
  cout << "Nhap so luong: ";
  cin >> soluong;
  dayso = new int[soluong];
  cout << "Nhap tung phan tu cua day so: ";
  for (unsigned i = 0; i != soluong; ++i) {
    cin >> dayso[i];
  }
}
