Rapport d’avancement personnel
1. Problème à résoudre

Le programme a pour objectif de supprimer toutes les occurrences d’une valeur donnée dans une liste.
 
2. Principe du code

Définition de la structure Node : chaque nœud contient une donnée (data) et un pointeur vers le nœud suivant (next).

Insertion en tête : une fonction insererEnTete permet d’ajouter un nouvel élément au début de la liste.

Suppression d’occurrences : la fonction supprmerOccurence parcourt la liste et supprime tous les nœuds qui contiennent la valeur donnée.

Affichage : la fonction afficherListe parcourt la liste et affiche les éléments sous la forme valeur -> ... -> NULL.

Programme principal (main) :

Crée une liste avec quelques valeurs initiales.

Affiche la liste avant suppression.

Demande à l’utilisateur une valeur à supprimer.

Supprime toutes les occurrences de cette valeur.

Affiche la liste après suppression.


4. Algorithme (pseudo-code)

    Début
   Définir une structure Node avec :

       entier data
       pointeur vers Node next

   Fonction insererEnTete(head, val) :

       créer un nouveau nœud
       newNode.data ← val
       newNode.next ← head
       retourner newNode

   Fonction afficherListe(head) :

       tant que head ≠ NULL faire
           afficher head.data
           head ← head.next
       afficher "NULL"

   Fonction supprimerOccurence(head, val) :

       tant que head ≠ NULL ET head.data = val faire
           temp ← head
           head ← head.next
           libérer temp
       current ← head
       tant que current ≠ NULL ET current.next ≠ NULL faire
           si current.next.data = val alors
               temp ← current.next
               current.next ← temp.next
               libérer temp
           sinon
               current ← current.next
       retourner head

   Début programme principal :

       liste ← NULL
       insérer 3 en tête
       insérer 5 en tête
       insérer 7 en tête
       afficher la liste initiale
       lire valeur à supprimer
       liste ← supprimerOccurence(liste, valeur)
       afficher liste après suppression

       Fin
.

6. Complexité

Insertion : O(1)

Affichage : O(n)

Suppression : O(n)

Complexité totale : O(n)
 


