#ifndef LISTE_H
#define LISTE_H

#include <stdio.h>
#include <stdlib.h>

// Définition de la structure Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Prototypes des fonctions
Node* supprmerOccurence(Node* head, int val);
void afficherListe(Node* head);
Node* insererEnTete(Node* head, int val);

#endif
