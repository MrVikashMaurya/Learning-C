#include<stdio.h>
#include<conio.h>

int main () {
   int fact = 1, i = 0, n = 0;
   
   printf ("Enter the number\t");
   scanf ("%d" , &n);
   
   for (i = 1; i <= n; i ++) 
       fact = fact * i;
   
   printf ("Factorial of %d is %d", n , fact);
   
   getch ();
   return 0;
}

