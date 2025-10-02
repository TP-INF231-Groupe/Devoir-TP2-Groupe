#ifndef LISTE_TRI_H
#define LISTE_TRI_H

#include <stdio.h>
#include <stdlib.h>

// Définition de la structure Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Prototypes des fonctions
Node* insererTrie(Node* head, int valeur);
void afficherListe(Node* head);

#endif
