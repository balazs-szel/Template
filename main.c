#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1=0, num2=0;

    printf("Hello! Adj meg két számot szóközzel elválasztva:");
    scanf("%d %d", &num1, &num2);

    printf("Az elso szám: %d\n", num1);
    printf("Az második szám: %d\n", num2);

    if(num1>num2){
        int i=0;
        i=num1;
        num1=num2;
        num2=i;
    }

    printf("A megcserélt elso szám: %d\n", num1);
    printf("A megcserélt második szám: %d\n", num2);



    return EXIT_SUCCESS;
}
