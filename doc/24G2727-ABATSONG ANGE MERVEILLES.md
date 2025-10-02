Rapport d'Avancement Individuel
1. Problème
Le problème posé consiste à gérer l'insertion d'éléments dans une liste chaînée de manière à ce que la liste reste triée. L'objectif est donc de créer une structure de données dynamique permettant d'ajouter des entiers tout en maintenant l'ordre croissant.<br>
2. Principe du code.<br>
Le programme implémente une liste chaînée simple dans laquelle les insertions se font de manière triée. Lorsqu'un nouvel élément est inséré, le code parcourt la liste afin de trouver la bonne position et insère le nœud à cet endroit. Ainsi, à tout moment, la liste reste triée sans nécessiter de tri supplémentaire.<br>
3. Dictionnaire de données.<br>
> Nom	Type	Rôle
> Node	Structure	Représente un nœud de la liste contenant une donnée entière et un pointeur vers le suivant.
data	int	La valeur stockée dans le nœud.
next	Node*	Pointeur vers le prochain nœud de la liste.
head	Node*	Pointeur vers le premier élément de la liste chaînée.
valeur	int	Valeur entière à insérer dans la liste.
nouveau	Node*	Nœud nouvellement créé lors d'une insertion.
current	Node*	Variable de parcours utilisée pour trouver la bonne position d'insertion.
4. Algorithme
Algorithme InsererTrie(valeur, head):
  1. Créer un nouveau nœud avec la valeur.
  2. Si la liste est vide ou si la valeur est inférieure à la première donnée :
        - Insérer le nouveau nœud en tête.
        - Retourner le nouveau nœud comme tête.
  3. Sinon :
        - Parcourir la liste avec un pointeur courant jusqu'à trouver la bonne position.
        - Insérer le nouveau nœud après le pointeur courant.
  4. Retourner la tête de la liste.

Algorithme AfficherListe(head):
  1. Tant que la liste n'est pas vide :
        - Afficher la donnée du nœud courant suivie de '->'.
        - Passer au nœud suivant.
  2. Afficher 'NULL' à la fin.
5. Complexité
- Temps : L'insertion dans la liste nécessite dans le pire des cas de parcourir toute la liste, soit une complexité en O(n), où n est le nombre d'éléments. L'affichage parcourt également toute la liste en O(n).
- Espace : Chaque nœud occupe un espace mémoire constant, donc l'espace total est en O(n).
