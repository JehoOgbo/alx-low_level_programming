#include <stdio.h>

/**
 * main - Entry point
 *
 * this program will output all possible combinations of
 * two two digit numbers
 *
 * Return: always 0 success
 */
int main(void)
{
	int tens = 0;
	int units;
	int tenss;
	int unitss;

	while (tens < 10)
	{
		units = tens;
		while (units < 10)
		{
			tenss = tens;
			unitss = units + 1;
			while (tenss < 10)
			{
				while (unitss < 10)
				{
					putchar(tens + '0');
					putchar(units + '0');
					putchar(' ');
					putchar(tenss + '0');
					putchar(unitss + '0');

					if (tens < 10 || units < 9 || tenss < 10 || unitss < 10)
					{
						putchar(',');
						putchar(' ');
					}
					unitss++;
				}
				units = 0;
				tenss++;
			}
			units++;
		}
		tens++;
	}
	putchar('\n');
	return (0);
}

