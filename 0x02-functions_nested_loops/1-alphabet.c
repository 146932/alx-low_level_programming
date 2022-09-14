#include "main.h"
/**
  * main - Prints the alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */

 void print_alphabet(void)
 {
         char love;

         for (love = 'a'; love <= 'z'; love++)
         {
                 _putchar(love);
         }
         _putchar('\n');
 }
