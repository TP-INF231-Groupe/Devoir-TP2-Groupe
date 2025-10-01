#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "insertion_simple_circulaire.h"


void display_menu(){
    printf("\n\n\n\t\t\t // INSERTION EN TETE ET EN QUEUE DANS UNE LISTE SIMPLEMENT CHAINEE //\n\n");
    printf("1) Insertion en Tete\n");
    printf("2) Insertion en queue\n");
    printf("3) Afficher la liste\n");
    printf("4) Quitter\n");
}


int input_number(){
    char buffer[100]; // Un tampon pour stocker la saisie de l'utilisateur
    long number;
    char *endptr; // Pointeur pour vérifier où la conversion s'est arrêtée

    while (1) { // Boucle infinie, on en sortira avec break
        printf("\n -> Entrez votre choix : ");

        // Lire toute la ligne de manière sécurisée
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

            // Remplacer le saut de ligne final par un terminateur nul si présent
            buffer[strcspn(buffer, "\n")] = 0;

            // Essayer de convertir la chaîne en nombre
            number = strtol(buffer, &endptr, 10);

            // Vérifications :
            // 1. endptr == buffer : La chaîne ne commençait même pas par un chiffre (ex: "abc")
            // 2. *endptr != '\0' : Il y a des caractères non numériques après le nombre (ex: "123xyz")
            if ((endptr == buffer || *endptr != '\0') || (number < 1 || number > 4)) {
                printf("\t\tErreur : Saisie invalide.\n");
            } else {
                // Succès ! La chaîne entière a été convertie.
                return number; // Sortir de la boucle while
            }
        }
    }
}


typedef struct Node{
    char data;
    struct Node* next;
}Node;


Node* create_node(char data){
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


void display_simple_circular_list(Node* head){
    if (!head) {
        printf("[]\n");
        return;
    }
    Node* temp = head;
    do {
        printf("[%c] -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to %c)\n", head->data);
}


int circular_len(Node* head){
    if (!head) return 0;

    int l = 0;
    Node* temp = head;
    do {
        l++;
        temp = temp->next;
    } while (temp != head);
    return l;
}


void insert_front_in_simple_circular_list(Node** head, Node** tail, char data){
    Node* new_node = create_node(data);
    if (!*head){
        new_node->next = new_node;
        *head = new_node;
        *tail = new_node;
    }else{
        new_node->next = *head;
        (*tail)->next = new_node;
        *head = new_node;

    }
}


void insert_back_in_simple_circular_list(Node** head, Node** tail, char data){
    Node* new_node = create_node(data);
    if (!*head){
        new_node->next = new_node;
        *head = new_node;
        *tail = new_node;
    }else{
        new_node->next = *head;
        (*tail)->next = new_node;
        *tail = new_node;
    }
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while (1){
        display_menu();
        int n = input_number();
        if (n == 1){
            printf("\n\t\t// INSERTION EN TETE //\n\n");
            printf("*Notice: <<Entrez \\ pour stopper>>\n\n");
            char data='a';
            while (1){
                printf("\t -> Entrez une valeur: ");
                scanf(" %c", &data);                // espace avant %C ignore les caracteres blancs
                if (data == '\\') {
                    while (getchar() != '\n');
                    break;
                };
                insert_front_in_simple_circular_list(&head, &tail, data);
                while (getchar() != '\n');
            }
        }else if(n == 2 ){
            printf("\n\t\t// INSERTION EN QUEUE //\n\n");
            printf("*Notice: <<Entrez \\ pour stopper>>\n\n");
            char data='a';

            while (1){
                printf("\t -> Entrez une valeur: ");
                scanf(" %c", &data);
                if (data == '\\') {
                    while (getchar() != '\n');
                    break;
                }
                insert_back_in_simple_circular_list(&head, &tail, data);
                while (getchar() != '\n');
            }
        }
        else if(n == 3){
            printf("\t  La liste est: ");
            display_simple_circular_list(head);
        }else break;
    }
}
