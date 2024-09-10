#include <stdio.h>
#include <stdbool.h>
bool solution(int **matrix, int xc[], int yc[], int x, int y, int n)
{
}
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d", &n);
    int n = 8;
    int matrix[8][8];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = -1;
        }
    }
    int x = 0, y = 0, moves = 1;
    int xc[] = {1, -1, -2, -2, 1, -1, 2, 2};
    int yc[] = {2, 2, -1, 1, -2, -2, 1, -1};
    matix[x][y] = 0;
    solution(matrix, xc, yc, x, y, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matrix[i][j]);
            printf("\n");
        }
    }
}