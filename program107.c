///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display below pattern
//
// INPUT: iRow = 4    iCol = 4
// OUTPUT:
//       C
//   R   1  $  3  $
//       1  $  3  $
//       1  $  3  $
//       1  $  3  $
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (j % 2 == 0)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}