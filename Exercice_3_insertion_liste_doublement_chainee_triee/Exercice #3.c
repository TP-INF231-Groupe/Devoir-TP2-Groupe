#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
    int valeur;
    struct Noeud* precedent;
    struct Noeud* suivant;
} Noeud;

typedef struct Liste {
    Noeud* tete;
    Noeud* queue;
} Liste;

// Fonction pour créer un nouveau nœud
Noeud* CreerNoeud(int element) {
    Noeud* nouveau = malloc(sizeof(Noeud));
    if (!nouveau) exit(EXIT_FAILURE);
    nouveau->valeur = element;
    nouveau->precedent = NULL;
    nouveau->suivant = NULL;
    return nouveau;
}

// Fonction pour insérer un élément dans la liste
void InsererDansListe(Liste* liste, int element) {
    Noeud* nouveau = CreerNoeud(element);
    if (!liste->tete) {
        liste->tete = liste->queue = nouveau;
    } else if (element < liste->tete->valeur) {
        nouveau->suivant = liste->tete;
        liste->tete->precedent = nouveau;
        liste->tete = nouveau;
    } else if (element > liste->queue->valeur) {
        nouveau->precedent = liste->queue;
        liste->queue->suivant = nouveau;
        liste->queue = nouveau;
    } else {
        Noeud* temp = liste->tete;
        while (temp->suivant && temp->suivant->valeur < element) {
            temp = temp->suivant;
        }
        nouveau->suivant = temp->suivant;
        nouveau->precedent = temp;
        temp->suivant->precedent = nouveau;
        temp->suivant = nouveau;
    }
}

// Fonction pour afficher la liste
void AfficherListe(Liste* liste, int ordre) {
    Noeud* temp = ordre == 1 ? liste->tete : liste->queue;
    while (temp) {
        printf("%d ", temp->valeur);
        temp = ordre == 1 ? temp->suivant : temp->precedent;
    }
    printf("\n");
}

int main() {
    Liste liste = {NULL, NULL};
    int choix;
    do {
        printf("1. Insérer un élément\n");
        printf("2. Afficher la liste (croissant)\n");
        printf("3. Afficher la liste (décroissant)\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: {
                int element;
                printf("Entrez l'élément : ");
                scanf("%d", &element);
                InsererDansListe(&liste, element);
                break;
            }
            case 2:
                printf("Liste (croissant) : ");
                AfficherListe(&liste, 1);
                break;
            case 3:
                printf("Liste (décroissant) : ");
                AfficherListe(&liste, -1);
                break;
            case 4:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 4);
    return 0;
}