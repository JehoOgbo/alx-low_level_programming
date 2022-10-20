#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
	int len;
	int len2;
	char c[] = "this is it";
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len: %d\n", len);
	printf("len2: %d\n", len2);
	len = printf("Tyr out %s\n", c);
	len2 = _printf("Tyr out %s\n", c);
	printf("len: %d\n, len2: %d\n", len, len2);

	_printf("th  %c %c\n", 'F', 'G');
	printf("th  %c %c\n", 'F', 'G');
	len = _printf("%%\n");
	printf("%%\n");
	printf("%i", len);

	return (0);
}

