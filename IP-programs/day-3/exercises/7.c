// Resources
// https://vi.wikipedia.org/wiki/Gi%E1%BA%A3i_thu%E1%BA%ADt_Euclid#:~:text=Gi%E1%BA%A3i%20thu%E1%BA%ADt%20Euclid%20d%E1%BB%B1a%20tr%C3%AAn,v%C3%A0%20252%20%E2%88%92%20105%20%3D%20147.
// https://youtu.be/Jwf6ncRmhPg

#include <stdio.h>

int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return 0;
}

int main() {
  int a, b;

  printf("Nhap a va b: ");
  scanf("%d %d", &a, &b);

  if (a < b) {
    swap(&a, &b);
  }

  int r;
  do {
    r = a % b;
    a = b;
    b = r;
  } while (b != 0);

  printf("Uoc chung lon nhat la: %d", a);
}
