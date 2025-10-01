●	Énoncé du problème 

Problème : Implémenter une liste doublement chaînée triée en C.

Exigences :

*   La liste doit être triée automatiquement à mesure que les éléments sont insérés.
*   La liste doit permettre l'insertion d'éléments en début et en fin de liste.
*   La liste doit permettre l'affichage des éléments dans l'ordre croissant et décroissant.

●	Analyse du problème 

Analyse :

*   La liste doublement chaînée triée peut être implémentée en utilisant une structure de données composée de nœuds, chacun contenant une valeur et des pointeurs vers les nœuds précédent et suivant.
*   L'insertion d'éléments peut être effectuée en parcourant la liste pour trouver la position appropriée pour insérer le nouvel élément.
*   L'affichage des éléments peut être effectué en parcourant la liste dans l'ordre croissant ou décroissant.

●	Conception de l’algorithme 

Conception :

*   La liste doublement chaînée triée est représentée par une structure de données composée de deux pointeurs, `tete` et `queue`, qui pointent respectivement vers le premier et le dernier élément de la liste.
*   Chaque nœud de la liste contient une valeur et des pointeurs vers les nœuds précédent et suivant.
*   L'insertion d'un élément est effectuée en créant un nouveau nœud et en l'insérant à la position appropriée dans la liste.

●	Implémentation 

#include <stdio.h>
#include <stdlib.h>

// Structure de données pour les nœuds de la liste
typedef struct Noeud {
    int valeur;
    struct Noeud* precedent;
    struct Noeud* suivant;
} Noeud;

// Structure de données pour la liste
typedef struct Liste {
    Noeud* tete;
    Noeud* queue;
} Liste;

// Fonction pour créer un nouveau nœud
Noeud* CreerNoeud(int element) {
    // ...
}

// Fonction pour insérer un élément dans la liste
void InsererDansListe(Liste* liste, int element) {
    // ...
}

// Fonction pour afficher la liste
void AfficherListe(Liste* liste, int ordre) {
    // ...
}

●	Test et validation 

int main() {
    Liste liste = {NULL, NULL};
    
    // Test de l'insertion d'éléments
    InsererDansListe(&liste, 5);
    InsererDansListe(&liste, 2);
    InsererDansListe(&liste, 8);
    
    // Test de l'affichage de la liste
    printf("Liste (croissant) : ");
    AfficherListe(&liste, 1);
    printf("Liste (décroissant) : ");
    AfficherListe(&liste, -1);
    
    return 0;
}

●	Complexité 

Complexité :

- La complexité de l'algorithme d'insertion dans la liste doublement chaînée triée est O(n) dans le pire des cas, où n est le nombre d'éléments dans la liste. Cela est dû au fait que nous devons parcourir la liste pour trouver la position appropriée pour insérer le nouvel élément.
- La complexité de l'algorithme d'affichage de la liste est O(n), où n est le nombre d'éléments dans la liste. Cela est dû au fait que nous devons parcourir la liste pour afficher tous les éléments.


