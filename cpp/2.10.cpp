#include <iostream>

using namespace std;

struct TapGoiKeo {
  int goikeo[50]; // N < 50
  unsigned soluong;
};

/* CÁC HÀM CẦN XÂY DỰNG */

// Chương trình chính
int main ();

// Hàm nhập: Nhập số lượng và các gói kẹo được chia
void nhap (TapGoiKeo & nguon);

// Hàm xuất
void xuat (TapGoiKeo nguoinhan1, TapGoiKeo nguoinhan2);

// Hàm chia kẹo theo Giải thuật Tham lam
void chiakeo (TapGoiKeo & nguoinhan1, TapGoiKeo & nguoinhan2, TapGoiKeo nguon);

/* NỘI DUNG */

int main () {
  TapGoiKeo nguon, nguoinhan1, nguoinhan2;
  nhap(nguon);
  chiakeo(nguoinhan1, nguoinhan2, nguon);
  xuat(nguoinhan1, nguoinhan2);
  return 0;
}
