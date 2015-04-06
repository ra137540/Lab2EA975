#import <stdio.h>
#import <string.h>

#SIZE 100
int main()
{
   char a[SIZE], b[SIZE];
 
   Console.Write("Enter the first string\n"); 
   a = Console.ReadLine();
   Console.Write("Enter the second string\n"); 
   b = Console.ReadLine();
 
   if (strcmp(a,b) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
 
   return 0;
}