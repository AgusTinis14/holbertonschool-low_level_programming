#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "lal");
    add_node(&head, "lul");
    printf("Prueba 3: %s %d\n", head->str, head->len);
    print_list(head);
    return (0);
}
