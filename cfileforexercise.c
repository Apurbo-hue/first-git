#include<stdio.h>
int main()
{
   FILE *ptr;

   ptr = fopen("example.txt","w");


   char ch[]="hello world this is the content of my file management learning";

   fprintf(ptr,ch);

   fclose(ptr);

   return 0;
}
