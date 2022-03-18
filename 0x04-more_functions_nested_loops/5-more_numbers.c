#include "main.h"
/**
 * more_numbers - program that prints numbers 1-14 x10
 */
void more_numbers(void)
{
  int a = 0;
  
  while (a <= 10)
  {
		int number;

		for (number = 0; number <= 14; number++)
			if (number > 9){
			    putchar((number / 10) + '0');
			    putchar((number % 10) + '0');
			}
			else{
			    	putchar(number + '0');
			}
		putchar('\n');
		a++;
	}
}
	
