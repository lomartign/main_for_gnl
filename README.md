# Main for GNL

## Description

J'ai créé ce petit outil pour vous permettre de tester facilement votre `get_next_line` sans avoir à refaire un `main` à chaque fois.

Le tout avec un affichage propre et numéroté dans le terminal !

## Installation

Placez-vous dans le dossier de votre projet `get_next_line` et clonez le dépôt :
```bash
git clone https://github.com/lomartign/main_for_gnl.git
```

Vous devriez avoir quelque chose comme ça :
```
get_next_line/
|--- get_next_line.c
|--- get_next_line_utils.c
|--- get_next_line.h
|--- main_for_gnl/
	 |--- Makefile
	 |--- main.c
	 |--- test.txt
```

## Comment l'utiliser ?

Rien de plus simple ! Rendez-vous dans le dossier `main_for_gnl` :
```bash
cd main_for_gnl
```

Puis lancez :
```bash
make
```

Le Makefile s'occupe de tout : la compilation, le lancement du test et la suppression de l'exécutable si tout se passe bien.

### Exemple de résultat
```bash
\______ TEST ______/

|- Line 1 : Hello

|- Line 2 : World

|-[ TESTS COMPLETE ]-|
```

## Personnalisation

Vous pouvez modifier le fichier `test.txt` comme bon vous semble pour tester votre GNL avec des lignes longues, des lignes vides ou même un fichier complètement vide.

Vous pouvez également modifier le `BUFFER_SIZE` directement dans le Makefile, Par défaut, il est défini à **42** *(évidemment)*.

## À savoir

Ce n'est pas un testeur complet ! Le but est simplement de pouvoir tester rapidement votre GNL et de visualiser le résultat.

Il ne vérifie pas automatiquement les erreurs ou les fuites de mémoire.

Si vous avez des idées d'amélioration ou si vous trouvez des bugs, n'hésitez pas à contribuer directement au projet ! Les `Pull Requests` sont les bienvenues.
