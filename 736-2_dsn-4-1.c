#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
	int a; 
	struct stack * next; 
	} 
node_t, stack_t;

int b(stack_t ** top) {
	return *top == NULL;
	}

void push(stack_t ** top, int a) {
	node_t *node = (node_t *)malloc(sizeof(node_t));
	node->a = a;
	node->next = NULL;
	if(!b(top))
	node->next = *top;
	(*top) = node;
	}

void pop(stack_t **top) {
	node_t *node;
	if(!b(top)) {
		node = *top;
		*top = (*top)->next;
		free(node);
		node = NULL;
		}
	}

int top(stack_t **top) {
	if(!b(top))
	return (*top)->a;
	else
	return 0;
	}

void clear(stack_t **top) {
	while(!b(top))
	pop(top);
	}

void print(stack_t **top) {
	node_t *node;
	for(node = *top; node != NULL; node = node->next)
	printf("%d -> ", node->a);
	printf("\b\b\b \n");
	}
int main()
{
int i;
stack_t *s1 = NULL; 

for(i = 0; i < 10; ++i)
push(&s1, i);

printf("contents of thestack: \n");
print (&s1);
for(i = 0; i < 5; ++i) {
	pop(&s1);
	}
printf("\ncontents of the first stack: \n");
print (&s1);

clear(&s1);

return 0;
}
