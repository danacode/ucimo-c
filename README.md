# Učimo C

Uvodni tutorijal: http://poincare.matf.bg.ac.rs/~jelenagr/op/cc1.htm
Rešeni primeri i zadaci: http://www.its.edu.rs/ITS-Reseni-primeri-iz-programskog-jezika-C_799
Literatura na srpskom: http://tutoriali.org/C.html
Learn C The Hard Way: http://c.learncodethehardway.org/book/

## Instalacija

Instaliraj [Code::Blocks](http://www.codeblocks.org/) IDE za jednostavno kompajliranje i pokretanje C fajlova

## Prost primer

Napravi fajl `zdravo.c ` sledeće sadržine:

```c
#include<stdio.h>

void main() {
  printf("Zdravo Svete");
}
```

Print liniju možeš malo izmeniti:
```c
printf("Zdravo %s Svete\n", "Predivni");
```

## Kompajliranje

### GCC (the GNU Compiler Collection)

GNU C prevodilac pokrećemo `gcc` komandom:
```
gcc zdravo.c
```

Nakon toga, u direktorijumu se pojavljuje izvršni fajl `a.out` koji pokrećemo na sledeći način:
```
./a.out
```

Prevodiocu možete proslediti argument `-o` sa imenom izvršnog programa:
```
gcc -o zdravo zdravo.c
```
Nakon toga, u direktorijumu se pojavljuje izvršni fajl `zdravo` koji pokrećemo na sledeći način:
```
./zdravo
```

### make (GNU make utility to maintain groups of programs)

Komanda `make` od fajla `zdravo.c` pravi izvršni fajl `zdravo`, koji se potom pokreće iz konzole:
```
make zdravo
./zdravo
```
