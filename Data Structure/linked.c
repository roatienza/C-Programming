#include <stdio.h>
#include <stdlib.h>

struct node{
	char a;
	struct node* next;
};

struct node* create_node(char a)
{
	struct node* node = malloc(sizeof(struct node));
	node->a = a;
	node->next = 0;
	return node;
}

void print_linked_list(struct node* head)
{
	while(head){
		printf("%c",head->a);
		head = head->next;
	}
	puts("");
}

int main()
{
	struct node* head = 0;
	struct node* node = 0;
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
