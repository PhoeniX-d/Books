/* Program to find subtraction of 2 matrices */
#include<stdio.h>

#define MAXROW  10
#define MAXCOL  15

void AcceptInput(int[][MAXCOL], int, int);
void ComputeDiff(int[][MAXCOL], int[][MAXCOL], int[][MAXCOL], int, int);
void Display(int[][MAXCOL], int, int);

int main()
{
    int a[MAXROW][MAXCOL], b[MAXROW][MAXCOL], c[MAXROW][MAXCOL], iRow = 0, iCol = 0;
    printf("Enter total number of rows\n");
    scanf("%d", &iRow);
    printf("Enter total number of cols\n");
    scanf("%d", &iCol);

    printf("Enter contents for table 1\n");
    AcceptInput(a, iRow, iCol);
    printf("Enter contents for table 2\n");
    AcceptInput(b, iRow, iCol);

    printf("Contents of table 1:\n");
    Display(a, iRow, iCol);
    printf("Contents of table 1:\n");
    Display(b, iRow, iCol);

    ComputeDiff(a, b, c, iRow, iCol);
    printf("Difference between two matrices is\n");
    Display(c, iRow, iCol);

    return 0;
}

void AcceptInput(int x[][MAXCOL], int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

void Display(int x[][MAXCOL], int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
           printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

void ComputeDiff(int a[][MAXCOL], int b[][MAXCOL], int c[][MAXCOL], int iRow, int iCol)
{
    int i = 0, j = 0;
     for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}