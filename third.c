#include <stdio.h>
 
int main(void)
{
   system("chcp 1251");
 
   int month;
   printf("Месяц:") ;
   scanf ("%i", &month);
 
   switch (month) {
   case 12:
   case 1:
   case 2:
       printf("зима\n") ;
       break;
   case 3:
   case 4:
   case 5:
       printf("весна\n") ;
       break;
   case 6:
   case 7:
   case 8:
       printf("літо\n") ;
       break;
   case 9:
   case 10:
   case 11:
       printf("осень\n") ;
       break;
   }
   return 0;
}