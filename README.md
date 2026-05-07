# Space Battle Simulator (C)

Programme en C qui simule et analyse une partie de bataille spatiale entre deux joueurs (Alice et Bernard) à partir d'un fichier d'entrée. Le programme valide le format de la partie, détecte les coups invalides, simule les tirs et détermine le gagnant.

## Contexte

Projet académique réalisé en solo à l'ESIEA (septembre 2023 – janvier 2024) dans le cadre du module **INF1031 – Algorithmique et Programmation** (1ère année).

## Fonctionnement

Le programme lit la description d'une partie depuis l'entrée standard (`stdin`) :

1. Taille du plateau et nombre de vaisseaux
2. Positions initiales des vaisseaux des deux joueurs (chaque vaisseau occupe 3 cases consécutives)
3. Identité du joueur qui commence
4. Liste des coups joués, alternés entre les deux joueurs

Il analyse ensuite la partie et affiche :

- La taille du plateau et le nombre de vaisseaux
- Le nombre total de coups joués
- Le gagnant (Alice, Bernard ou égalité), ainsi que le nombre de cases restantes pour chaque joueur

## Cas d'erreur détectés

- **Coup illégal** : un tir hors des limites du plateau → `ILLEGAL MOVE : GAME OVER`
- **Partie incomplète** : nombre impair de coups → `MISSING MOVE : INCOMPLETE GAME`

## Exemples de sortie
BOARD SIZE : 10
NUMBER OF SPACESHIPS : 2
NUMBER OF MOVES : 14
GAME OVER: ALICE WINS : 3 TO 1
COURSE OVER : GAME OVER
## Stack technique

- **Langage :** C
- **Compilation :** gcc
- **Entrée :** redirection depuis un fichier (`stdin`)
- **Contraintes du sujet :** pas de variables globales, pas de fonctions de fichier (`fopen`, etc.), uniquement la redirection standard

## Compilation et exécution

```bash
gcc -Wall main.c -o game
./game < partie.dat
```

## Compétences mises en œuvre

- Programmation en C : tableaux, boucles, fonctions
- Lecture et parsing d'entrée structurée via `scanf`
- Logique de validation et de simulation de jeu
- Respect d'un format d'entrée/sortie strict imposé par un sujet

## Auteur

Projet réalisé en solo par Ahmed Jaziri à l'ESIEA.

## Licence

Projet académique à but pédagogique.
