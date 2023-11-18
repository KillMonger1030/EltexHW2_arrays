/*Задание (массивы)
3.Заполнить верхний треугольник матрицы на 1, а нижний 0.
Пример:
0 0 1
0 1 1
1 1 1
*/

#include <stdio.h>

#define N 5

int main(){
    int array[N][N];

    //Заполнение матрицы
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (i <= j){
                array[i][j] = 1;
            }
            else { array[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%-2d", array[i][j]);
        }
        printf("\n");
    }
}