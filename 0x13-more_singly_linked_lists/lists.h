#ifndef LISTS_H
#define LISTS_H

/* include header file to get printf function */
#include <stdio.h>
/* header file to get sizeof operator and malloc */
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* prints all the elements of a listint_t list. Return no. of nodes */
size_t print_listint(const listint_t *h);
/* finds number of elements int a listint_t list. Return no of elements */
size_t listint_len(const listint_t *h);

/* add node to the beginning of the list. Return address of new node / null */
listint_t *add_node(listint_t **head, const int n);
/* add node to the end of the list. Return address of new node / null */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free a listint_t linked list */
void free_listint(listint_t *head);
/* free a listint_t linked list and set head to NULL */
void free_listint2(listint_t **head);

/* delete the head node of a listint_t list. Return data prev stored / 0 */
int pop_listint(listint_t **head);
/* finds the nth node of a listint_t list and return it */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* find the sum of all data of a listint_t list. Return the sum */
int sum_listint(listint_t *head);
/* inserts a new node at a given position. Return new node address */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* deletes a node at a given position. Return 1 for success, -1 otherwise */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif /*LISTS_H*/
