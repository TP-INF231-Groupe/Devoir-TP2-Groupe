#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Insertion triée
Node *insererTrie(Node* head, int valeur) {
    Node *nouveau = malloc(sizeof(Node));
    nouveau->data = valeur;
    nouveau->next = NULL;

    if (head ==NULL || valeur < head->data) {
        nouveau->next = head;
        return nouveau;
    }

    Node* current = head;
    while (current->next != NULL && current->next->data < valeur) {
        current = current->next;
    }
    nouveau->next = current->next;
    current->next = nouveau;
    return head;
}
// Affichage
void afficherListe(Node* head) {
    while (head != NULL) {
        printf("%d ->", head->data);
        head = head->next;
    }
    printf("NULL\n");   
}
int main() {
    Node* liste = NULL;

    // Insertion de quelques valeurs
    liste = insererTrie(liste, 10);
    liste = insererTrie(liste, 5);
    liste = insererTrie(liste, 15);
    liste = insererTrie(liste, 8);

    printf("Liste triée :\n");
    afficherListe(liste);

    return 0;   
}   
