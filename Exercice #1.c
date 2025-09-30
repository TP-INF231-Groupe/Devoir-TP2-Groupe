#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour supprimer toutes les occurrences d'une valeur Node
supprmerOccurence(Node*head, int val) {
    while (head != NULL && head->data == val) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->next->data == val) {
            Node* temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            current = current->next;
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
    Node* insererEnTete(Node* head, int val) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = val;
        newNode->next = head;
        return newNode;
    }

    int main () {
        Node* liste = NULL;
        liste = insererEnTete(liste, 3);
        liste = insererEnTete(liste, 5);
        liste = insererEnTete(liste, 7);
        
        printf("Liste initiale :\n");
        afficherListe(liste);

        int valeur;
        printf("Entrez la valeur à supprimer : ");
        scanf("%d", &valeur);

        liste = supprmerOccurence(liste, valeur);
        printf("Liste après suppression :\n");
        afficherListe(liste);
        return 0;           
    }   