#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[10];
   char str2[10];
   int compare;

   strcpy(str1, "hello");
   strcpy(str2, "HELLO");
   strcpy(str3, "hello, I am goin to the store");
   strcpy(str4, "HELLODW");

   compare0 = strncmp(str1, str2, 5);
   compare1 = strncmp(str3, str2, 5);
   compare2 = strncmp(str4, str3, 5);
   compare3 = strncmp(str1, str4, 5);

   if(compare < 0){
      printf("str1 is less than str2");
   }
   else if(compare > 0) {
      printf("str2 is less than str1");
   }
   else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}