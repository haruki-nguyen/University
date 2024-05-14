#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float heso;
  int somu;
} DONTHUC;

typedef struct {
  int bac;
  DONTHUC *donthuc; // Mang cac don thuc
} DATHUC;

void nhapDonThuc(DONTHUC *dt) {
  printf("Nhap he so: ");
  scanf("%f", &dt->heso);
  printf("Nhap so mu: ");
  scanf("%d", &dt->somu);
}

void xuatDonThuc(DONTHUC dt) { printf("%.2fx^%d", dt.heso, dt.somu); }

void nhapDaThuc(DATHUC *dt) {
  printf("Nhap bac cua da thuc: ");
  scanf("%d", &dt->bac);

  // Cap phat bo nho cho mang don thuc
  dt->donthuc = (DONTHUC *)malloc((dt->bac + 1) * sizeof(DONTHUC));

  printf("Nhap cac don thuc cua da thuc:\n");
  for (int i = 0; i <= dt->bac; i++) {
    printf("Nhap don thuc thu %d:\n", i);
    nhapDonThuc(&(dt->donthuc[i]));
  }
}

void xuatDaThuc(DATHUC dt) {
  for (int i = 0; i <= dt.bac; i++) {
    xuatDonThuc(dt.donthuc[i]);
    if (i < dt.bac)
      printf(" + ");
  }
}

// Hàm tính tổng hai đa thức
DATHUC tongDaThuc(DATHUC dt1, DATHUC dt2) {
  DATHUC result;
  if (dt1.bac >= dt2.bac)
    result.bac = dt1.bac;
  else
    result.bac = dt2.bac;

  result.donthuc = (DONTHUC *)malloc((result.bac + 1) * sizeof(DONTHUC));

  for (int i = 0; i <= result.bac; i++) {
    if (i <= dt1.bac && i <= dt2.bac) {
      result.donthuc[i].heso = dt1.donthuc[i].heso + dt2.donthuc[i].heso;
      result.donthuc[i].somu = dt1.donthuc[i].somu;
    } else if (i <= dt1.bac) {
      result.donthuc[i].heso = dt1.donthuc[i].heso;
      result.donthuc[i].somu = dt1.donthuc[i].somu;
    } else {
      result.donthuc[i].heso = dt2.donthuc[i].heso;
      result.donthuc[i].somu = dt2.donthuc[i].somu;
    }
  }
  return result;
}

int main() {
  DATHUC dt1, dt2;
  printf("Nhap da thuc thu nhat:\n");
  nhapDaThuc(&dt1);
  printf("Nhap da thuc thu hai:\n");
  nhapDaThuc(&dt2);

  printf("Da thuc thu nhat la: ");
  xuatDaThuc(dt1);
  printf("\nDa thuc thu hai la: ");
  xuatDaThuc(dt2);

  printf("\n\nTong hai da thuc la: ");
  xuatDaThuc(tongDaThuc(dt1, dt2));

  return 0;
}
