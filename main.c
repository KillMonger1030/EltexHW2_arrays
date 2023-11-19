/*Задание (массивы)
4.Заполнить матрицу числами от 1 до N2 улиткой
Пример:
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
*/

#include <stdio.h>
#include <math.h>
# define N 5

int main(){
    int array[N][N];

    int number = 1;
    int startRow = 0;
    int finishRow = N-1;
    int startCol = 0;
    int finishCol = N-1;

    while (startRow <= finishRow && startCol <= finishCol){
        //заполнение вправо
        for(int i = startCol; i <= finishCol; i++){
            array[startRow][i] = number++;
        }
        startRow++;

        //заполнение вниз
        for(int i = startRow; i <= finishRow; i++){
            array[i][finishCol] = number++;
        }
        finishCol--;

        //заполнение влево
        if(startRow <= finishRow){
            for(int i = finishCol; i >= startCol; i--){
                array[finishRow][i] = number++;
            }
            finishRow--;
        }
        //заполнение вверх
        if(startCol <= finishCol){
            for(int i = finishRow; i >= startRow; i--){
                array[i][startCol] = number++;
            }
            startCol++;
        }
    }

    printf("Матрица улиткой: \n");
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                printf("%3d", array[i][j]);
            }
            printf("\n");
        }

    return 0;
}