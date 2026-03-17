# 🚀 Space Battle Simulator (C)

<p align="center">
  <img src="https://img.shields.io/badge/language-C-blue.svg">
  <img src="https://img.shields.io/badge/project-Algorithmic-green.svg">
  <img src="https://img.shields.io/badge/status-Academic-orange.svg">
</p>

---

## 📌 Description

Ce projet est une application en **langage C** qui simule et analyse une partie de **bataille spatiale** entre deux joueurs (Alice et Bernard).

Le programme lit un fichier d’entrée représentant une partie, vérifie sa validité, détecte les erreurs et détermine le gagnant.

📖 Le projet s’inscrit dans le cadre du module **INF1031 – Algorithmique et Programmation** .

---

## 🎯 Objectifs

* Lire un fichier décrivant une partie de jeu
* Vérifier la validité des coups
* Détecter les erreurs (coups interdits, partie incomplète)
* Simuler la partie coup par coup
* Déterminer le gagnant ou une égalité

---

## 🧠 Fonctionnalités

### ✅ Validation des données

* Vérification de la taille du plateau
* Vérification du nombre de vaisseaux
* Détection des coups invalides

👉 Exemple :

* `ILLEGAL MOVE : GAME OVER`
* `MISSING MOVE : INCOMPLETE GAME`

---

### 🎮 Simulation du jeu

* Alternance des coups entre Alice et Bernard
* Détection des tirs réussis
* Mise à jour de l’état des vaisseaux

---

### 🏆 Résultat final

Le programme affiche :

* Le nombre total de coups
* Le gagnant
* Ou une égalité

👉 Exemple :

* `GAME OVER: ALICE WINS`
* `GAME OVER: BERNARD WINS`
* `GAME OVER: TIE`

---

## 🛠️ Technologies utilisées

* **Langage :** C
* **Compilation :** GCC
* **Entrée :** redirection de fichier (`stdin`)

---

## 📂 Structure du projet

```text
project/
├── main.c
├── README.md
└── input_files/
```

---

## ⚙️ Compilation

```bash
gcc -Wall -Werror -Wfatal-errors main.c -o game
```

---

## ▶️ Exécution

```bash
./game < PARTIE_1.dat
```

👉 Le programme lit les données depuis un fichier grâce à la redirection standard .

---

## 📊 Exemple de fonctionnement

Le fichier d’entrée contient :

* taille du plateau
* positions des vaisseaux
* liste des coups

Le programme :

1. analyse les données
2. vérifie leur validité
3. simule la partie
4. affiche le résultat

---

## ⚠️ Contraintes importantes

* ❌ Pas de variables globales
* ❌ Pas de fonctions de fichiers (`fopen`, etc.)
* ✅ Utilisation de la redirection (`stdin`)
* ✅ Respect strict du format de sortie

---

## 👨‍💻 Auteurs

* Ahmed Jaziri

---

## 📜 Licence

Projet académique (ESIEA).
