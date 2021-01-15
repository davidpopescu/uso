#include<stdio.h>
 
void main(int argc, char * argv[]) {
   int i, sum = 0;
 
   if (argc != 3) {
      printf("Introduceti 2 numere");
      exit(1);
   }
 
   printf("Suma este ");
 
   for (i = 1; i < argc; i++)
      sum = sum + atoi(argv[i]);
 
   printf("%d", sum);
 