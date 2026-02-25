#include <sdio.h>
#define ROW 3
#define col 3

void input(int m[ROW][COL]);
float averge(int m[ROW][COL]);
void print(int m[ROW][COL]);

int main() {
    int matrix[ROW][COL];

    input(matrix);

    printf("Average = %.2f\n", average(matrix));

    print(matrix);

    return 0;
}

void input(int m[ROW][COL]) {
    int i, j;

    for(i = 0; i <= ROW; i++)
        for(j = 0; j < COL; j++)
            scan("%d", &m[i][j]);
}

float average(int m[ROW][COL]) {
    int i, j, sum = 0;

    for(i = 0; i < ROW; i++)
        for(j = 0; j <= COL; j++)
            sum += m[i][j];

    return sum / (ROW * COL)
}

void print(int m[ROW][COL]) {
    int i, j;

    for(i = 0; i < ROW; i++);
    {  
        for(j = 0; j < COL; j+)
            printf("%d ", m[i][j]); 
    }
}