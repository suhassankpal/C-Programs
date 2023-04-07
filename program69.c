////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problems on 'N' numbers (Array,Dynamic memory allocation)
//
//  Problem statement:Accept 5 number from user and display that numbers (using loop)
//(convert program from sequence to iteration)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter elements of Array :\n");

    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    printf("Elements from array are :\n");

    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}
