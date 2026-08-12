#include <stdio.h>

int main() {
  char in[10] = "Klu";
  char v[20];
  int i = 0;
  while (in[i] != '\0') {
    in[i];
    i++;
  }

  for (int j = 0; j < i; j++) {
    v[j] = in[i - j - 1];
  }
  v[i] = '\0';

  printf("%s", v);
  return 0;
}
