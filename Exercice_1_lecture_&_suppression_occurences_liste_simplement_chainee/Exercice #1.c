#include <stdio.h>
#include <stdlib.h>
#include "Exercice #1.h"

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour supprimer toutes les occurrences d'une valeur Node
void supprmerOccurence(Node** head, int val) {
    Node* curr = *head;
    Node* prev = NULL;
    while (curr != NULL) {
        if (curr == *head && curr->data == val){
            *head = curr->next;
            free(curr);
            curr = *head;
        }else if (curr != *head && curr->data == val){
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        }else{
            prev = curr;
            curr = curr->next;
        }
        afficherListe(*head);

    }
}

// Fonction pour afficher la liste
void afficherListe(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

    // Fonction pour insérer un élément en tête
Node* insererEnTete(Node** head, int val) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;

    return newNode;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    insererEnTete(&head, 3);
    insererEnTete(&head, 5);
    insererEnTete(&head, 7);
    insererEnTete(&head, 5);
    insererEnTete(&head, 2);

    printf("Liste initiale :\n");
    afficherListe(head);

    int valeur;
    printf("Entrez la valeur à supprimer : ");
    scanf("%d", &valeur);

    supprmerOccurence(&head, valeur);
    printf("Liste après suppression :\n");
    afficherListe(head);

    printf("La tete est: %d", head->data);
    return 0;
}
