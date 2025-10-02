# **EXERCICE 4: Insertion en tete et en queue dans une liste simplement chainee circulaire**


## 📌 Problème
La diffucluté principale ici reside dans le fait d'inserser un élement (dans notre solution, un caractere * **char** *) 
au debut ou a la fin d'une liste simplement chainnée circulaire. 
Ce projet pospose une solution efficace pour resoudre ce probleme.


## Quelques definitions
> *Noeud*: Enregistrement comportant un champ "next" qui pointe vers le meme structure et un ou plusieurs champs selon le besoin.
> *Liste simplement chainnée circulaire:* Un ensemble de *noeud* liés dont l'élement suivant du dernier noeud c'est sur le premier.
> *Tete*: Le premier noeud de la liste.
> *Tail*: Le dernier noeud de la liste.


## 🔎 Principe
* On cree un *noeud* tete et un *noeud* queue qu'on initialise a NULL. 
* **Dans une insertion en tete:**
    - On cree un nouveau *noeud*. 
    - Si la liste est vide, alors le *noeud* suivant du noeud crée c'est lui meme, la tete et la queue tous deux égalent le *noeud* crée.
    - Si la liste n'est pas vide, alors on definit le *noeud* crée comme étant la nouvelle tete et l'élement suivant de la queue devient.la nouvelle tete.

* **Dans une insertion en queue:**
    - On cree un nouveau *noeud*. 
    - Si la liste est vide, alors le *noeud* suivant du noeud crée c'est lui meme, la tete et la queue tous deux égalent le *noeud* crée.
    - Si la liste n'est pas vide, alors on definit le *noeud* crée comme étant la nouvelle queue et l'élement suivant de la nouvelle queue c'est la tete 


## 🧮 Algorithme
* **Dans une insertion en tete:**
    1. initializer la tete et la queue
    2. lire la valeur saisi par l'utilisateur
    3. creer un nouveau noeud
    4. si la tete est null alors:
        - le noeud suivant du nouveau noeud c'est lui meme
        - la tete devient le nouveau noeud 
        - la queue devient le nouveau noeud
    5. Si la tete n'est pas null: 
        - l'element suivant du nouveau noeud devient la tete
        - l'element suivant de la queue devient le nouveau noeud
        - la tete devient le nouveau noeud
    
    > *pseudo code*
    ```pseudo 
    fonction insererTete(tete: Noeud, queue: Noeud, valeur: char):
        nouveau_noeud <-- creer_noeud(valeur);
        si tete = null alors
            nouveau_noeud.suivant <-- nouveau_noeud;
            tete <-- nouveau_noeud
            queue <-- nouveau_noeud;
        sinon:
            nouveau_noeud.suivant <-- tete;
            queue.suivant <-- nouveau_noeud;
            tete <-- nouveau_noeud;
    ```

* **Dans une insertion en queue:**
    1. initializer la tete et la queue
    2. lire la valeur saisi par l'utilisateur
    3. creer un nouveau noeud
    4. si la tete est null alors:
        - le noeud suivant du nouveau noeud c'est lui meme
        - la tete devient le nouveau noeud 
        - la queue devient le nouveau noeud
    5. Si la tete n'est pas null: 
        - l'element suivant du nouveau noeud devient la tete
        - l'element suivant de la queue devient le nouveau noeud
        - la queue devient le nouveau noeud

    > *pseudo code*
    ```pseudo 
    fonction insererTete(tete: Noeud, queue: Noeud, valeur: char):
        nouveau_noeud <-- creer_noeud(valeur);
        si tete = null alors
            nouveau_noeud.suivant <-- nouveau_noeud;
            tete <-- nouveau_noeud
            queue <-- nouveau_noeud;
        sinon:
            nouveau_noeud.suivant <-- tete;
            queue.suivant <-- nouveau_noeud;
            queue <-- nouveau_noeud;
    ```
    

## 📖 Dictionnaire de données

| **Données** | **Type** | **Description** |
| *Node* | enregistrement | represente un noeud |
| *->next* | pointeur (Node*) | represente l'element suivant d'un noeud|
| *->data* | char | represente le contenu du noeud, la valeur saisie pa l'utilisateur |
| *head* | Pointeur (Node*) | represente la tete de la liste |
| *tail* | pointeur (Node*) | represente la queue de la liste |
| *create_node()* | fonction | fonction qui premet de creer un noeud |
| *display_simple_circular_list()* | fonction | represente la fonction qui affiche la liste |
| *insert_front_in_simple_circular_list()* | fonction | represente la fonction pour inserer une valeur en tete de liste |
| *insert_back_in_simple_circular_list()* | fonction | represente la fonction pour inserer une valeur en queue de liste |
| *display_menu()* | fonction | represente la fonction pour afficher le menu |
| *input_number()* | fonction | represente la fonction qui permet a l'utilisateur de faire un choix du menu |

 
## ⚡ Complexité
| **Algorithme** | **Complexité en temps** | **Complexité en espace** |
| *Insertion en tete* | O(1) | O(n) | 
| *Insertion en queue* | O(1) | O(n) |
| *Affichage de la liste* | O(n) | O(1) |


## 👨‍💻 Auteur
> Projet développé par **TANFFO DJIMELI CARNEL INEL** dans le cadre tu TP N°2 de l'UE INF231
