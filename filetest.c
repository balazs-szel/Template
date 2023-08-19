#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *fp;

    int start=0;
    int end=0;

    printf("Adj meg egy kezdő értéket:");
    scanf("%d", &start);
    printf("Adj meg egy befejező értéket:");
    scanf("%d", &end);


 fp = fopen("ezegy.txt", "w");
    for(int i= start; i<=end; i++)
    {
        fprintf(fp, "%d ,",i);
    }
    fclose(fp);
    return 0;
    }

