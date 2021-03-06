#include <math.h>
#include <stdio.h>


int BinatiToDecimal(int x) {
  int res = 0, help = 0;
  while (x) {
    int help2 = x % 10;
    if (help2 == 1)
      res += pow(2, help);
    help++;
    x /= 10;
  }

  return res;
}

int main() {
  int j, i, biNum, decNum;
  printf("Ввдеите количество членов в масииве\n");
  scanf("%d", &j);
  if(j == 0 ){
    printf("Введите число");
    return 0;
  }
  int mass_bin[j];

  for (i = 0; i < j; i++) {
    printf("Введите дв. число: ");
    scanf("%d", &biNum);
    mass_bin[i] = biNum;
  }

  printf("Двоичное = десятичное\n");
  for (i = 0; i < j; i++) {
    biNum = mass_bin[i];
    decNum = BinatiToDecimal(biNum);
    printf("\n%d = %d\n", biNum, decNum);
  }
  return 0;
}