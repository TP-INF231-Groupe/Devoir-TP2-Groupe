#include <stdio.h>

#ifndef INSERTION_DOUBLE_CIRCULAIRE
#define INSERTION_DOUBLE_CIRCULAIRE

typedef struct Node;

void display_menu();

int input_number();

struct Node* create_node(char data);

struct Node* display_doubly_circular_list(struct Node* head);

int circular_len(struct Node* head);

void insert_front_in_doubly_circular_list(struct Node* head, struct Node* tail, char data);

void insert_back_in_doubly_circular_list(struct Node* head, struct Node* tail, char data);


#endif // INSERTION_DOUBLE_CIRCULAIRE
