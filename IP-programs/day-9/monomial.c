#include <math.h>
#include <stdio.h>

typedef struct {
  float heso;
  int somu;
} DONTHUC;

void nhapDonThuc(DONTHUC *dt) {
  printf("Nhap he so: ");
  scanf("%f", &dt->heso);
  printf("Nhap so mu: ");
  scanf("%d", &dt->somu);
}

void xuatDonThuc(DONTHUC dt) { printf("%.2fx^%d", dt.heso, dt.somu); }

DONTHUC tichDonThuc(DONTHUC dt1, DONTHUC dt2) {
  DONTHUC result;
  result.heso = dt1.heso * dt2.heso;
  result.somu = dt1.somu + dt2.somu;
  return result;
}

DONTHUC thuongDonThuc(DONTHUC dt1, DONTHUC dt2) {
  DONTHUC result;
  result.heso = dt1.heso / dt2.heso;
  result.somu = dt1.somu - dt2.somu;
  return result;
}

DONTHUC daoHamCapMot(DONTHUC dt) {
  DONTHUC result;
  result.heso = dt.heso * dt.somu;
  result.somu = dt.somu - 1;
  return result;
}

// Tinh gia tri don thuc tai x = x0
float giaTriDonThuc(DONTHUC dt, float x0) { return dt.heso * pow(x0, dt.somu); }

int main() {
  DONTHUC dt1, dt2;
  printf("Nhap don thuc thu nhat:\n");
  nhapDonThuc(&dt1);
  printf("Nhap don thuc thu hai:\n");
  nhapDonThuc(&dt2);

  printf("Don thuc thu nhat la: ");
  xuatDonThuc(dt1);
  printf("\nDon thuc thu hai la: ");
  xuatDonThuc(dt2);

  printf("\n\nTich hai don thuc la: ");
  xuatDonThuc(tichDonThuc(dt1, dt2));

  printf("\nThuong hai don thuc la: ");
  xuatDonThuc(thuongDonThuc(dt1, dt2));

  printf("\nDao ham cap 1 cua don thuc thu nhat la: ");
  xuatDonThuc(daoHamCapMot(dt1));

  printf("\nGia tri cua don thuc thu nhat tai x = 2 la: %.2f\n",
         giaTriDonThuc(dt1, 2.0));

  return 0;
}
