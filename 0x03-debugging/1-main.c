#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

<<<<<<< HEAD
        i = 0;
       	/* 
	 * while (i < 10)
         * {
         *       putchar(i);
         * } 
         */
        printf("Infinite loop avoided! \\o/\n");
=======
	i = 0;
	/*
	 * while (i < 10)
	 *	{
	 *	putchar(i);
	 *	}
	 */
	printf("Infinite loop avoided! \\o/\n");
>>>>>>> 3d7405679d508e3b2b6ce909babee3ef60bf11b4

	return (0);
}
