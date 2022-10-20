#ifndef LISTS_H
#define LISTS_H

/* include header file for output fuctions like printf */
#include <stdio.h>

/**
 * struct list_s - singly linked lists
 * @str: malloc'ed string
 * @len: length of string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/* print all elements of linked list; return number of nodes */
size_t print_list(const list_t *h);

#endif /* LISTS_H*/
