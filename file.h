#include <stdio.h>
#include <stdlib.h>

void file_storage_process (){
int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("/Users/szelbalazs/Documents/VS Code/projetcs_code/Template/test_file.rtf","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);
   exit(1);
};
