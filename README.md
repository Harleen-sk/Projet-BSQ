# BSQ – Find the Biggest Square

Projet réalisé dans le cadre du cursus **EPITECH** (module *Elementary Programming in C*), en 1ʳᵉ année.

## Description

BSQ (*Biggest SQuare*) est un programme en C qui trouve le plus grand carré possible pouvant être placé sur une carte, en évitant des obstacles, un peu à la manière d'un "démineur inversé" : au lieu d'éviter les mines une par une, le programme calcule directement la plus grande zone libre disponible.

La carte est fournie sous forme de fichier texte, où :
- `.` représente une case vide
- `o` représente un obstacle
- la première ligne du fichier indique le nombre de lignes de la carte

Le programme affiche la carte en entrée, avec le plus grand carré trouvé marqué par des `x`.

## Compilation

```bash
make
```

Règles disponibles : `re`, `clean`, `fclean`.

## Utilisation

```bash
./bsq fichier_carte
```

### Exemple

Fichier d'entrée :
```9
...........................
....o......................
............o..............
...........................
....o......................
..............o............
...........................
......o..............o.....
..o.......o................```

Résultat :

```.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxxo...............
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxx...o............
.....xxxxxxx................
......o...............o.....
..o.......o.................```

## Algorithme

Le programme parcourt la carte pour déterminer, pour chaque case, la taille du plus grand carré pouvant s'y terminer, en tenant compte des obstacles. La solution retenue est le carré valide le plus grand ; en cas d'égalité, le carré le plus haut est choisi, puis le plus à gauche.

## Contraintes techniques

- Langage : C
- Seuls les appels système suivants sont autorisés : `open`, `read`, `write`, `close`, `malloc`, `free`, `stat`
- Le programme doit fonctionner en lecture seule sur le fichier fourni
- Gestion des erreurs : sortie sur `stderr`, code de retour 84 en cas d'erreur (0 sinon)