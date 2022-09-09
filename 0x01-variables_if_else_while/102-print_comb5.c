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
					putchar(tens);
					putchar(units);
					putchar(' ');
					putchar(tenss);
					putchar(unitss);

					if (tens != 9 || units != 8 || tenss != 9 || unitss != 9)
					{
						putchar(',');
						putchar(' ');
					}
					unitss++;
				}
				tenss++;
			}
			units++;
		}
		tens++;
	}
	putchar('\n');
	return (0);
}

