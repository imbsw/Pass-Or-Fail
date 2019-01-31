#include <stdio.h>
#include <stdlib.h>

int main()
{
    int avg=1.0;

    printf("Enter Avg Mark:");
    scanf("%d",&avg);

    if (avg>=50) {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
