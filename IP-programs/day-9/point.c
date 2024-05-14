#include <math.h>
#include <stdio.h>

struct DIEM {
  float x;
  float y;
};

void nhapDiem(struct DIEM *p) {
  printf("Nhap hoanh do: ");
  scanf("%f", &(p->x));
  printf("Nhap tung do: ");
  scanf("%f", &(p->y));
}

void xuatDiem(struct DIEM p) { printf("(%f, %f)\n", p.x, p.y); }

float tinhKhoangCach(struct DIEM p1, struct DIEM p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

struct DIEM doiXungQuaGoc(struct DIEM p) {
  struct DIEM pMoi;
  pMoi.x = -p.x;
  pMoi.y = -p.y;
  return pMoi;
}

struct DIEM doiXungQuaOx(struct DIEM p) {
  struct DIEM pMoi;
  pMoi.x = p.x;
  pMoi.y = -p.y;
  return pMoi;
}

struct DIEM doiXungQuaOy(struct DIEM p) {
  struct DIEM pMoi;
  pMoi.x = -p.x;
  pMoi.y = p.y;
  return pMoi;
}

void kiemTraPhanTu(struct DIEM p) {
  if (p.x == 0 && p.y == 0) {
    printf("Diem nam o goc toa do.\n");
  } else if (p.x == 0) {
    if (p.y > 0) {
      printf("Diem thuoc truc hoanh va nam tren truc Ox.\n");
    } else {
      printf("Diem thuoc truc hoanh va nam duoi truc Ox.\n");
    }
  } else if (p.y == 0) {
    if (p.x > 0) {
      printf("Diem thuoc truc tung va nam ben phai truc Oy.\n");
    } else {
      printf("Diem thuoc truc tung va nam ben trai truc Oy.\n");
    }
  } else {
    if (p.x > 0) {
      if (p.y > 0) {
        printf("Diem thuoc phan tu thu nhat.\n");
      } else {
        printf("Diem thuoc phan tu thu tu.\n");
      }
    } else {
      if (p.y > 0) {
        printf("Diem thuoc phan tu thu hai.\n");
      } else {
        printf("Diem thuoc phan tu thu ba.\n");
      }
    }
  }
}

int main() {
  struct DIEM p1, p2;

  printf("Nhap toa do diem thu nhat:\n");
  nhapDiem(&p1);
  printf("Nhap toa do diem thu hai:\n");
  nhapDiem(&p2);

  printf("Toa do diem thu nhat: ");
  xuatDiem(p1);
  printf("Toa do diem thu hai: ");
  xuatDiem(p2);

  printf("Khoang cach giua hai diem: %f\n", tinhKhoangCach(p1, p2));

  printf("Diem doi xung qua goc toa do voi diem thu nhat: ");
  xuatDiem(doiXungQuaGoc(p1));

  printf("Diem doi xung qua truc Ox voi diem thu hai: ");
  xuatDiem(doiXungQuaOx(p2));

  printf("Diem doi xung qua truc Oy voi diem thu nhat: ");
  xuatDiem(doiXungQuaOy(p1));

  printf("Phan tu cua diem thu nhat: ");
  kiemTraPhanTu(p1);

  return 0;
}
