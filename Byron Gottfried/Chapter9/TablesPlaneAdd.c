/* Program to find subtraction of 2 matrices */
#include<stdio.h>

#define MAXPLANE    3
#define MAXROW      10
#define MAXCOL      15

void AcceptInput(int[][MAXROW][MAXCOL], int, int, int);
void ComputeDiff(int [][MAXROW][MAXCOL], int, int, int);
void Display(int [][MAXROW][MAXCOL], int, int, int);

int main()
{
    int a[MAXPLANE][MAXROW][MAXCOL],iPlane = 0, iRow = 0, iCol = 0;

    printf("Enter total number of planes\n");
    scanf("%d", &iPlane);
    printf("Enter total number of rows\n");
    scanf("%d", &iRow);
    printf("Enter total number of cols\n");
    scanf("%d", &iCol);

    printf("Enter contents for table 1\n");
    AcceptInput(a, iPlane, iRow, iCol);

    printf("Contents of table 1:\n");
    Display(a, iPlane, iRow, iCol);

    ComputeDiff(a, iPlane,iRow, iCol);
    printf("Difference between two matrices is\n");
    Display(a, iPlane, iRow, iCol);
    return 0;
}

void AcceptInput(int x[][MAXROW][MAXCOL],int iPlane, int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < iPlane; i++)
    {
        for (j = 0; j < iRow; j++)
        {
            for (k = 0; k < iCol; k++)
            {
                scanf("%d", &x[i][j][k]);
            }                
        }
    }
}

void Display(int x[][MAXROW][MAXCOL],int iPlane, int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < iPlane; i++)
    {
        for (j = 0; j < iRow; j++)
        {
            for (k = 0; k < iCol; k++)
            {
                printf("%d ", x[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void ComputeDiff(int x[][MAXROW][MAXCOL],int iPlane, int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;
    for (j = 0; j < iRow; j++)
    {
        for (k = 0; k < iCol; k++)
        {
             x[2][j][k] = x[0][j][k] - x[1][j][k];
        }                
    }
}