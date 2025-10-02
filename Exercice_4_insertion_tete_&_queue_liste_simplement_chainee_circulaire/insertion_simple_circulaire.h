#include <stdio.h>

#ifndef INSERTION_SIMPLE_CIRCULAIRE
#define INSERTION_SIMPLE_CIRCULAIRE


struct Node;


void display_menu();

int input_number();

struct Node* create_node(char data);

void display_simple_circular_list(struct Node* head);

int circular_len(struct Node* head);

void insert_front_in_simple_circular_list(struct Node** head, struct Node** tail, char data);

void insert_back_in_simple_circular_list(struct Node** head, struct Node** tail, char data);

#endif // INSERTION_SIMPLE_CIRCULAIRE
