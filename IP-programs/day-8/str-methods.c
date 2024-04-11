#include "ctype.h"
#include "stdio.h"
#include "string.h"

int main() {
  char src[] = "Hello";
  char dest[20];
  strcpy(dest, src);
  printf("Chuoi da duoc sao chep tu chuoi %s la: %s\n", src, dest);

  char *duplicate = strdup(src);
  printf("Dia chi chuoi %s duplicated la: %p\n", src, duplicate);

  // strlwr and strupr are deprecated after ISO C99
  char ch = 'A';
  char lowercase_ch = tolower(ch);
  printf("%c\n", lowercase_ch);
  char uppercase_ch = toupper(ch);
  printf("%c\n", uppercase_ch);

  int cmpResult = strcmp("hello", "world");
  printf("Ket qua so sanh la: %d\n", cmpResult);
  int icmpResult = strcmp("hello", "HELLO");
  printf("Ket qua so sanh case-sensitive la: %d\n", icmpResult);

  char str3[20] = "Hello";
  char str4[] = " world";
  char *catAddress = strcat(str3, str4);
  printf("Dia chi chuoi sau khi concatnate thanh %s la %p\n", str3, catAddress);

  int length = strlen(src);
  printf("Do dai chuoi src la: %d\n", length);

  char strForSearch[] = "Hello, world!";
  if (strstr(strForSearch, src) != NULL) {
    printf("Tim thay %s trong %s\n", src, strForSearch);
  }
}
