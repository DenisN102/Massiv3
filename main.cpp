// Поменять местами максимальный и последний отрицательный элементы массива M(40).


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
constexpr int size = 20;
    int mass[size]={5, 4 ,3, 18, 7, -6, 3};

    int i;
    int max = mass[0];
    int index=0;

    for(int i=0; i<size; ++i)
    {
     printf("%d ", mass[i]);
    }
        printf("\n");

   for (int i = 0; i < size; ++i)       //ищем максимальное число
    {
      if (mass[i] > max)                //прогоняем цикл, сравнивая все значения с максимальным, обновляяе его
      {
        max = mass[i];                  // максимальное значение
        index = i;                      // записали индекс максимального числа
      }
    }
    for (i = size - 1; i > 0; i--)   //начинаем с конца искать первый отриц. элемент
    {
      if ( mass[i] < 0)
      {
        int temp = mass[i];
        mass[i] = mass[index];
        mass[index] = temp;
            break;
      }
    }
    for ( i = 0; i <size; i++)
    {
      printf("%2d ", mass[i] );
    }

    printf( "\n");

}
