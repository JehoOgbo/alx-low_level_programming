#include <stdio.h>

/**
 * main - Entry point
 *
 * this program will output all
 * possible combinations of 3 digit numbers
 *
 * Return: always 0.success
 */
int main(void)
{
	int huns = 0;
	int tens;
	int units;

	while (huns < 10)
	{
		tens = huns + 1;
		while (tens < 10)
		{
			units = tens + 1;
			while (units < 10)
			{
				putchar(huns + '0');
				putchar(tens + '0');
				putchar(units + '0');

				if ((huns != 7) || (tens != 8) || (units != 9))
				{
					putchar(',');
					putchar(' ');
				}
				units++;
			}
			tens++;
		}
		huns++;
	}
	putchar('\n');
	return (0);
}
