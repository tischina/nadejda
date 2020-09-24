#include <stdio.h>
#include <math.h>

int main() {

//Обьявление переменных действительного типа

    float a, b, c, F, StartX, EndX, dX;

// Запрашивание ввода данных с клавиатуры

  printf("\ta = "); scanf("%f", &a);
    printf("\tb = "); scanf("%f", &b);
    printf("\tc = "); scanf("%f", &c);
    printf("\tX нач. = "); scanf("%f", &StartX);
    printf("\tX кон. = "); scanf("%f", &EndX);
    printf("\tdX = "); scanf("%f", &dX);
    
// Выполняем сам цикл
      for (float x = StartX; x <= EndX; x += dX)
    {
// Вычисляем значение функции F
          if (x+5 <0 && c==0)
            F = 1 / (a*x) -b;
             else if (x+5 >0 && c!=0 )
                F = (x-a) / x;
                  else F = (10*x) / (c-4);

// Проверяем заданное условие 
  if (!(((long)floor(a) | (long)floor(b)) & ((long)floor(a) | (long)floor(c))))
    printf("x = %.2f\tF = %.0f\n", x, F);
              else
                 printf("x = %.2f\tF = %.2f\n", x, F);
                 
     }   


return 0;
}