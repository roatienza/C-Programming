#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char a;
	struct node* next;
}NodeT;

node* create_node(char a)
{
	NodeT* node = malloc(sizeof(node));
	node->a = a;
	node->next = 0;
	return node;
}

void print_linked_list(NodeT* head)
{
	while(head){
		printf("%c",head->a);
		head = head->next;
	}
	puts("");
}

int main()
{
	NodeT* head = 0;
	NodeT* node = 0;
	char c = 0;
	while(1){
		c = getchar();
		if(c=='\n') continue;
		if(c==' ') break;
		node = create_node(c);
		if(head){
			node->next = head;
		}
		head = node;			
	};
	print_linked_list(head);
	// destroy the linked list after using
	// complete the code here
	return 0;
}
