#include <stdio.h>

typedef struct {
  int tu;
  int mau;
} PHANSO;

void nhapPhanSo(PHANSO *ps) {
  printf("Nhap tu so: ");
  scanf("%d", &(ps->tu));
  printf("Nhap mau so: ");
  scanf("%d", &(ps->mau));
}

void xuatPhanSo(PHANSO ps) { printf("%d/%d", ps.tu, ps.mau); }

// Tim UCLN cua tu va mau
int UCLN(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

PHANSO rutGonPhanSo(PHANSO ps) {
  int ucln = UCLN(ps.tu, ps.mau);
  ps.tu /= ucln;
  ps.mau /= ucln;
  return ps;
}

PHANSO tongPhanSo(PHANSO ps1, PHANSO ps2) {
  PHANSO ketQua;
  ketQua.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
  ketQua.mau = ps1.mau * ps2.mau;
  return rutGonPhanSo(ketQua);
}

PHANSO hieuPhanSo(PHANSO ps1, PHANSO ps2) {
  PHANSO ketQua;
  ketQua.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
  ketQua.mau = ps1.mau * ps2.mau;
  return rutGonPhanSo(ketQua);
}

PHANSO tichPhanSo(PHANSO ps1, PHANSO ps2) {
  PHANSO ketQua;
  ketQua.tu = ps1.tu * ps2.tu;
  ketQua.mau = ps1.mau * ps2.mau;
  return rutGonPhanSo(ketQua);
}

PHANSO thuongPhanSo(PHANSO ps1, PHANSO ps2) {
  PHANSO ketQua;
  ketQua.tu = ps1.tu * ps2.mau;
  ketQua.mau = ps1.mau * ps2.tu;
  return rutGonPhanSo(ketQua);
}

int laPhanSoToiGian(PHANSO ps) { return UCLN(ps.tu, ps.mau) == 1; }

void quyDongPhanSo(PHANSO *ps1, PHANSO *ps2) {
  int boiSoChung = (*ps1).mau * (*ps2).mau / UCLN((*ps1).mau, (*ps2).mau);
  (*ps1).tu *= boiSoChung / (*ps1).mau;
  (*ps1).mau = boiSoChung;
  (*ps2).tu *= boiSoChung / (*ps2).mau;
  (*ps2).mau = boiSoChung;
}

int phanSoAm(PHANSO ps) { return ps.tu * ps.mau < 0; }

int soSanhPhanSo(PHANSO ps1, PHANSO ps2) {
  quyDongPhanSo(&ps1, &ps2);
  if (ps1.tu < ps2.tu)
    return -1;
  else if (ps1.tu > ps2.tu)
    return 1;
  else
    return 0;
}

int main() {
  PHANSO ps1, ps2, ketQua;

  printf("Nhap phan so thu nhat:\n");
  nhapPhanSo(&ps1);

  printf("Nhap phan so thu hai:\n");
  nhapPhanSo(&ps2);

  printf("\nPhan so thu nhat la: ");
  xuatPhanSo(ps1);
  printf("\nPhan so thu hai la: ");
  xuatPhanSo(ps2);

  ketQua = tongPhanSo(ps1, ps2);
  printf("\nTong hai phan so: ");
  xuatPhanSo(ketQua);

  ketQua = hieuPhanSo(ps1, ps2);
  printf("\nHieu hai phan so: ");
  xuatPhanSo(ketQua);

  ketQua = tichPhanSo(ps1, ps2);
  printf("\nTich hai phan so: ");
  xuatPhanSo(ketQua);

  ketQua = thuongPhanSo(ps1, ps2);
  printf("\nThuong hai phan so: ");
  xuatPhanSo(ketQua);

  if (laPhanSoToiGian(ps1))
    printf("\nPhan so thu nhat la phan so toi gian.");
  else
    printf("\nPhan so thu nhat khong phai la phan so toi gian.");

  if (laPhanSoToiGian(ps2))
    printf("\nPhan so thu hai la phan so toi gian.");
  else
    printf("\nPhan so thu hai khong phai la phan so toi gian.");

  printf("\nPhan so thu nhat %s", phanSoAm(ps1) ? "am" : "duong");
  printf("\nPhan so thu hai %s", phanSoAm(ps2) ? "am" : "duong");

  int ketQuaSoSanh = soSanhPhanSo(ps1, ps2);
  if (ketQuaSoSanh < 0)
    printf("\nPhan so thu nhat nho hon phan so thu hai.");
  else if (ketQuaSoSanh > 0)
    printf("\nPhan so thu nhat lon hon phan so thu hai.");
  else
    printf("\nHai phan so bang nhau.");

  return 0;
}
