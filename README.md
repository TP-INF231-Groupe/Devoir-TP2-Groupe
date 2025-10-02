# Devoir-TP2-Groupe
# 📘💻INF231 – Structures de données II  
Université de Yaoundé I – L2 Informatique  
**Date : 25 septembre 2025
**Enseignant : Pr. Melatagia

## 🔎 Notre TP2 porte surl'implémentation en C de différentes opérations sur les listes chaînées:  
- suppression d’éléments,  
- insertion dans une liste triée,  
- gestion de listes simples, doubles et circulaires.  

---

## 📱💻Exercices et fichiers

💻1. Suppression dans une liste simplement chaînée
- **Fichier :** `Exercice #1.c` / `Exercice #1.h`  
- **Fonction principale :** `supprimerOccurences()`  
- **Description :**  
  Lit une valeur donnée et supprime toutes ses occurrences dans la liste.  
- **Résumé :** met en pratique la gestion de la mémoire (`free`) et l’itération i sur une liste.

---
📑📑2. Insertion dans une liste simplement chaînée triée
- **Fichier :** `Exercice #2.c` / `Exercice #2.h`  
- **Fonction principale :** `insererTrie()`  
- **Description :**  
  Insère un élément à la bonne position dans une liste triée (ordre croissant).  
- **Résumé :** introduction aux insertions intermédiaires.

---

📘🖊️3. Insertion dans une liste doublement chaînée triée
- **Fichier :** `Exercice #3.c` / `Exercice #3.h`  
- **Fonction principale :** `CreerNoeud()`  
- **Description :**  
  Insère un élément dans une liste doublement chaînée triée en mettant à jour `prev` et `next`.  
- **Résumé :** gestion simultanée des deux pointeurs.

---

📝4. Insertion en tête et en queue – Liste simplement chaînée circulaire
- **Fichier :** `insertion_simple_circulaire.c` / `insertion_simple_circulaire.h`  
- **Fonctions principales :**  
  - `insert_front_in_simple_circular_list()`  
  - `insert_back_in_simple_circular_list()`  
- **Description :**  
  Ajoute un élément soit au début soit à la fin d’une liste circulaire simple.  
- **Résumé :** première approche des listes circulaires.

---

📓🖍️5. Insertion en tête et en queue – Liste doublement chaînée circulaire
- **Fichier :** `insertion_double_circulaire.c` / `insertion_double_circulaire.h`  
- **Fonctions principales :**  
  - `insert_front_in_doubly_circular_list()`  
  - `insert_back_in_doubly_circular_list()`  
- **Description :**  
  Insère en tête ou en queue d’une liste circulaire **double** tout en respectant les pointeurs `prev` et `next`.  
- **Résumé :** fusion des notions de **double chaînage** et **circularité**.

---

🖥️⌨️⚙️ Compilation et exécution
1. Compiler :  
   ```bash
   gcc src/*.c -I include -o programme
