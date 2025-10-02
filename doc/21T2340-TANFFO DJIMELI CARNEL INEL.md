# 🚀 **EXERCICE 4: Insertion en tete et en queue dans une liste simplement chainee circulaire**


## 📌 Problème
La diffucluté principale ici reside dans le fait d'inserser un élement (dans notre solution, un caractere * **char** *) 
au debut ou a la fin d'une liste simplement chainnée circulaire. 
Ce projet pospose une solution efficace pour resoudre ce probleme.<br>

## Quelques definitions
> <u>*noeud*</u>: Enregistrement comportant un champ "next" qui pointe vers le meme structure et un ou plusieurs champs selon le besoin.<br>
> *Liste simplement chainnée circulaire:* Un ensemble de <u>*noeud*</u> liés dont l'élement suivant du dernier noeud c'est sur le premier.<br>
> *Tete*: Le premier noeud de la liste.<br>
> *Tail*: Le dernier noeud de la liste.<br>


## 🔎 Principe
* On cree un <u>*noeud*</u> tete et un <u>*noeud*</u> queue qu'on initialise a NULL. 
* **Dans une insertion en tete:**
    - On cree un nouveau <u>*noeud*</u>. 
    - Si la liste est vide, alors le <u>*noeud*</u> suivant du noeud crée c'est lui meme, la tete et la queue tous deux égalent le <u>*noeud*</u> crée.
    - Si la liste n'est pas vide, alors on definit le <u>*noeud*</u> crée comme étant la nouvelle tete et l'élement suivant de la queue devient la nouvelle tete.

* **Dans une insertion en queue:**
    - On cree un nouveau <u>*noeud*</u>. 
    - Si la liste est vide, alors le <u>*noeud*</u> suivant du noeud crée c'est lui meme, la tete et la queue tous deux égalent le <u>*noeud*</u> crée.
    - Si la liste n'est pas vide, alors on definit le <u>*noeud*</u> crée comme étant la nouvelle queue et l'élement suivant de la nouvelle queue c'est la tete 


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

| **Données**                         | **Type**            | **Description**                                                  |
|-------------------------------------|---------------------|------------------------------------------------------------------|
| *Node*                              | structure           | Représente un nœud                                               |
| *->next*                            | pointeur (Node*)    | Représente l’élément suivant d’un nœud                           |
| *->data*                            | char                | Représente le contenu du nœud, la valeur saisie par l’utilisateur |
| *head*                              | pointeur (Node*)    | Représente la tête de la liste                                   |
| *tail*                              | pointeur (Node*)    | Représente la queue de la liste                                  |
| *create_node()*                     | fonction            | Fonction qui permet de créer un nœud                             |
| *display_simple_circular_list()*    | fonction            | Fonction qui affiche la liste                                    |
| *insert_front_in_simple_circular_list()* | fonction       | Fonction qui insère une valeur en tête de liste                  |
| *insert_back_in_simple_circular_list()*  | fonction       | Fonction qui insère une valeur en queue de liste                 |
| *display_menu()*                    | fonction            | Fonction qui affiche le menu                                     |
| *input_number()*                    | fonction            | Fonction qui permet à l’utilisateur de faire un choix du menu    |

 
## ⚡ Complexité

| **Algorithme**          | **Complexité en temps** | **Complexité en espace** |
|-------------------------|-------------------------|--------------------------|
| *Insertion en tete*     | O(1)                    | O(1)                     | 
| *Insertion en queue*    | O(1)                    | O(1)                     |
| *Affichage de la liste* | O(n)                    | O(1)                     |


------------------------------------------------------------------------------------------------------------------------------------------

# 🚀 **EXERCICE 5: Insertion en tete et en queue dans une liste doublement chainee circulaire**

## 📌 Problème
La diffucluté principale ici reside dans le fait d'inserser un élement (dans notre solution, un caractere * **char** *) 
au debut ou a la fin d'une liste doublement chainnée circulaire. 
Ce projet pospose une solution efficace pour resoudre ce probleme.<br>

## Quelques definitions
> <u>*noeud*</u>: Enregistrement comportant un champ "next", "prev" qui pointent vers le meme structure et un ou plusieurs champs selon le besoin.<br>
> *Liste simplement chainnée circulaire:* Un ensemble de <u>*noeud*</u> liés dont l'élement suivant du dernier noeud c'est sur le premier.<br>
> *Tete*: Le premier noeud de la liste.<br>
> *Tail*: Le dernier noeud de la liste.<br>


## 🔎 Principe
* On cree un <u>*noeud*</u> tete et un <u>*noeud*</u> queue qu'on initialise a NULL. 
* **Dans une insertion en tete:**
    - On cree un nouveau <u>*noeud*</u>. 
    - Si la liste est vide, alors le <u>*noeud*</u> suivant et precedent du <u>*noeud*</u> crée c'est lui meme,  la tete et la queue tous deux égalent le <u>*noeud*</u> crée.
    - Si la liste n'est pas vide, alors on definit le <u>*noeud*</u> crée comme étant la nouvelle tete dont le precedent est la queue et le <u>*noeud*</u> suivant de la queue devient la nouvelle tete.

* **Dans une insertion en queue:**
    - On cree un nouveau <u>*noeud*</u>. 
    - Si la liste est vide, alors le <u>*noeud*</u> suivant et precedent du <u>*noeud*</u> crée c'est lui meme, la tete et la queue tous deux égalent le <u>*noeud*</u> crée.
    - Si la liste n'est pas vide, alors on definit le <u>*noeud*</u> crée comme étant la nouvelle queue dont le suivant c'est la tete et le <u>*noeud*</u> precedent de la tete c'est la nouvelle queue.


## 🧮 Algorithme
* **Dans une insertion en tete:**
    1. initializer la tete et la queue
    2. lire la valeur saisi par l'utilisateur
    3. creer un nouveau noeud
    4. si la tete est null alors:
        - le noeud suivant et le noeud precedent du nouveau noeud c'est lui meme
        - la tete devient le nouveau noeud 
        - la queue devient le nouveau noeud
    5. Si la tete n'est pas null: 
        - l'element suivant du nouveau noeud devient la tete
        - l'element precedent du nouveau noeud devient la queue
        - l'element suivant de la queue devient le nouveau noeud
        - l'element precedent de la tete devient le nouveau noeud
        - la tete devient le nouveau noeud
    
    > *pseudo code*
    ```pseudo 
    fonction insererTete(tete: Noeud, queue: Noeud, valeur: char):
        nouveau_noeud <-- creer_noeud(valeur);
        si tete = null alors
            nouveau_noeud.suivant <-- nouveau_noeud;
            nouveau_noeud.prev <-- nouveau_noeud;
            tete <-- nouveau_noeud
            queue <-- nouveau_noeud;
        sinon:
            nouveau_noeud.suivant <-- tete;
            nouveau_noeud.precedent <-- queue;
            queue.suivant <-- nouveau_noeud;
            tete.precedent <-- nouveau_noeud;
            tete <-- nouveau_noeud;
    ```

* **Dans une insertion en queue:**
    1. initializer la tete et la queue
    2. lire la valeur saisi par l'utilisateur
    3. creer un nouveau noeud
    4. si la tete est null alors:
        - le noeud suivant du nouveau noeud c'est lui meme
        - le noeud precedent cu nouveau noeud c'est lui meme
        - la tete devient le nouveau noeud 
        - la queue devient le nouveau noeud
    5. Si la tete n'est pas null: 
        - le noeud suivant du nouveau noeud devient la tete
        - le noeud precedent du nouveau noeud devient la queue
        - le noeud suivant de la queue devient le nouveau noeud
        - le noeud precedent de la tete devient le nouveau noeud
        - la queue devient le nouveau noeud

    > *pseudo code*
    ```pseudo 
    fonction insererTete(tete: Noeud, queue: Noeud, valeur: char):
        nouveau_noeud <-- creer_noeud(valeur);
        si tete = null alors
            nouveau_noeud.suivant <-- nouveau_noeud;
            nouveau_noeud.precedent <-- nouveau_noeud;
            tete <-- nouveau_noeud;
            queue <-- nouveau_noeud;
        sinon:
            nouveau_noeud.suivant <-- tete;
            nouveau_noeud.precedent <-- queue;
            queue.suivant <-- nouveau_noeud;
            tete.precedent <--- nouveau_noeud;
            queue <-- nouveau_noeud;
    ```
    

## 📖 Dictionnaire de données

| **Données**                         | **Type**            | **Description**                                                  |
|-------------------------------------|---------------------|------------------------------------------------------------------|
| *Node*                              | enregistrement      | Représente un nœud                                               |
| *->next*                            | pointeur (Node*)    | Représente le noeud suivant d’un nœud                           |
| *->prev*                            | pointeur (Node*)    | Représente le noeud precedent d’un nœud                           |
| *->data*                            | char                | Représente le contenu du nœud, la valeur saisie par l’utilisateur |
| *head*                              | pointeur (Node*)    | Représente la tête de la liste                                   |
| *tail*                              | pointeur (Node*)    | Représente la queue de la liste                                  |
| *create_node()*                     | fonction            | Fonction qui permet de créer un nœud                             |
| *display_simple_circular_list()*    | fonction            | Fonction qui affiche la liste                                    |
| *insert_front_in_simple_circular_list()* | fonction       | Fonction qui insère une valeur en tête de liste                  |
| *insert_back_in_simple_circular_list()*  | fonction       | Fonction qui insère une valeur en queue de liste                 |
| *display_menu()*                    | fonction            | Fonction qui affiche le menu                                     |
| *input_number()*                    | fonction            | Fonction qui permet à l’utilisateur de faire un choix du menu    |

 
## ⚡ Complexité

| **Algorithme**          | **Complexité en temps** | **Complexité en espace** |
|-------------------------|-------------------------|--------------------------|
| *Insertion en tete*     | O(1)                    | O(1)                     | 
| *Insertion en queue*    | O(1)                    | O(1)                     |
| *Affichage de la liste* | O(n)                    | O(1)                     |


## 👨‍💻 Auteur
> Projet développé par **TANFFO DJIMELI CARNEL INEL** dans le cadre tu TP N°2 de l'UE INF231
