#ifndef LISTE_DOUBLEMENT_CHAINE_TRIEE_H
#define LISTE_DOUBLEMENT_CHAINE_TRIEE_H

typedef struct Noeud {
    int valeur;
    struct Noeud* precedent;
    struct Noeud* suivant;
} Noeud;

typedef struct Liste {
    Noeud* tete;
    Noeud* queue;
} Liste;

Noeud* CreerNoeud(int element);
void InsererDansListe(Liste* liste, int element);
void AfficherListe(Liste* liste, int ordre);

#endif