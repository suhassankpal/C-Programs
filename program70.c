////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problems on 'N' numbers (Array,Dynamic memory allocation)
//
//  Problem statement:Accept 5 number from user and perform Addition of that numbers
//  INPUT:7+2+1                  |INPUT:9+5+8+4               |OUTPUT:5+2+4+3+6
//  OUTPUT:10                   |OUTPUT:26                    |INPUT:20
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Summation(int Data[], int iSize) // Summation(int *iData,int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    //       1          2           3
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt]; // 4
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("Enter elements of Array :\n");

    //       1          2       3
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]); // 4
    }

    printf("Elements from array are :\n");

    //       1       2         3
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]); // 4
    }

    iRet = Summation(Arr, 5); // Summation(100,5); 100 is considered as base address

    printf("Addition of all elements is %d", iRet);

    return 0;
}
