#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t
print_list(const list_t *h)
{
	size_t node_count = 0;
	const char* nill = "[0] (nil)";
	const list_t *current = h;

	while (current != NULL) {
	node_count++;
	if (current->str == NULL) {
		printf("%s\n", nil);
	} else {
		printf("[%d] %s\n", current->len, current->str);
	}
	
	current = current->next;
	}
	return(node_count);
}
