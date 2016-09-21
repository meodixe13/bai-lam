#include <iostream>

using namespace std;

struct TapGoiKeo {
  int goikeo[50]; // N < 50
  unsigned soluong, tongsokeo;
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

// Hàm khởi tạo
void khoitao (TapGoiKeo & keo) {
  keo.soluong = keo.tongsokeo = 0;
}

/* NỘI DUNG */

int main () {
  TapGoiKeo nguon, nguoinhan1, nguoinhan2;
  nhap(nguon);
  khoitao(nguoinhan1);
  khoitao(nguoinhan2);
  chiakeo(nguoinhan1, nguoinhan2, nguon);
  xuat(nguoinhan1, nguoinhan2);
  return 0;
}
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

int nhap(TapGoiKeo &nguon)
{
  int n;
  cout<<"Nhap so goi keo (<50): ";
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cout<<"Nhap so luong goi keo thu "<<nguon.goikeo[i]<<":";
    cin>>nguon.soluong;
    nguon.soluong += nguon.soluong;
  }
}
