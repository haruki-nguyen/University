#include <math.h>
#include <stdio.h>

struct TAMGIAC {
  float a;
  float b;
  float c;
};

void nhapTamGiac(struct TAMGIAC *t) {
  printf("Nhap canh a: ");
  scanf("%f", &(t->a));
  printf("Nhap canh b: ");
  scanf("%f", &(t->b));
  printf("Nhap canh c: ");
  scanf("%f", &(t->c));
}

void xuatTamGiac(struct TAMGIAC t) {
  printf("Canh a: %f\n", t.a);
  printf("Canh b: %f\n", t.b);
  printf("Canh c: %f\n", t.c);
}

float tinhChuVi(struct TAMGIAC t) { return t.a + t.b + t.c; }

float tinhDienTich(struct TAMGIAC t) {
  float p = tinhChuVi(t) / 2;
  return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

int main() {
  struct TAMGIAC tg;

  printf("Nhap thong tin tam giac:\n");
  nhapTamGiac(&tg);

  printf("Thong tin tam giac:\n");
  xuatTamGiac(tg);

  printf("Chu vi tam giac: %f\n", tinhChuVi(tg));
  printf("Dien tich tam giac: %f\n", tinhDienTich(tg));

  return 0;
}
