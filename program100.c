///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display character in below format
//
// INPUT: ROW 4    COLUMNS 4
// OUTPUT :
//          *   *   *   *
//          *   *   *   *
//          *   *   *   *
//          *   *   *   *
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iRow, int iColl) // Time complexity N^2
{
    int i = 0, j = 0;

    if (iRow < 0)
    {
        iRow = -(iRow);
    }

    if (iColl < 0)
    {
        iColl = -(iColl);
    }

    //      1       2       3
    for (i = 1; i <= iRow; i++)
    {
        //      1       2        3
        for (j = 1; j <= iColl; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    printf("Enter number of rows:\n");
    scanf("%d", &iNo1);

    printf("Enter number of columns:\n");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);

    return 0;
}
