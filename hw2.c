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
jump:
printf("Ввдеите количество членов в масииве\n");
scanf_s("%d", &j);
if (j == 0) {
printf("Введите число != 0 \n");
goto jump;
}
int mass_bin[100];

for (i = 0; i < j; i++) {
printf("Введите дв. число: ");
scanf_s("%d", &biNum);
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
