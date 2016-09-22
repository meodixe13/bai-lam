// Sử dụng C-Free 5
// Thuật toán Quy hoạch động

#include <iostream>
#include <algorithm>

using namespace std;

struct DoVat {
  unsigned khoiluong;
  unsigned giatri;
};

/* CÁC HÀM CẦN XÂY DỰNG */

// Chương trình chính
int main ();

// Hàm nhập
void nhap (DoVat * & mang, unsigned & soluong, unsigned & succhua);

// Hàm xuất
void xuat (DoVat * mang);

// Hàm Chọn đồ vật
void chondovat (DoVat * & dich, unsigned & soluongdich, unsigned succhua, DoVat * nguon, unsigned soluongnguon);

// Hàm sắp xếp: Tỉ lệ giatri/khoiluong giảm dần (hoặc khoiluong/giatri tăng dần)
void sapxep (DoVat * mang, unsigned soluong);

/* NỘI DUNG */

int main () {
  DoVat * nguon, * dich;
  unsigned soluongnguon, soluongdich, succhua;
  nhap (nguon, soluongnguon, succhua);
  chondovat (dich, soluongdich, succhua, nguon, soluongnguon);
  xuat (dich, soluongdich);
  delete [] nguon;
  delete [] dich;
  return 0;
}

void chondovat (DoVat * & dich, unsigned & soluongdich, unsigned succhua, DoVat * nguon, unsigned soluongnguon) {
  dich = new DoVat[soluongnguon];
  soluongdich = 0; // Khởi tạo
  // YOUR TEXT HERE...
}

void nhap (DoVat * & mang, unsigned & soluong, unsigned & succhua) {
  cout << " Nhap so luong : ";
  cin >> soluong;
  cout << " Nhap suc chua : ";
  cin >> succhua;
  mang = new int[soluong];
  for(int i = 0; i != soluong; ++i) {
    cout << "Nhap khoi luong do vat thu "<<i<<" : ";
    cin >> mang[i];
  }
}
