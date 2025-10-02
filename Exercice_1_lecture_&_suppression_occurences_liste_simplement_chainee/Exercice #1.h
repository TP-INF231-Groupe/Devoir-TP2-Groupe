#ifndef LISTE_H
#define LISTE_H

#include <stdio.h>
#include <stdlib.h>

// Définition de la structure Node
struct Node;


// Prototypes des fonctions
void supprmerOccurence(struct Node* head, int val);

void afficherListe(struct Node* head);

Node* insererEnTete(struct Node* head, int val);

#endif
