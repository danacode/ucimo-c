# Učimo C

## Instalacija

Instaliraj [Code::Blocks](http://www.codeblocks.org/) IDE za jednostavno kompajliranje i pokretanje C fajlova

## Prost primer

Napravi fajl `zdravo.c ` sledeće sadržine:

```c
#include<stdio.h>

int main() {
  printf("Zdravo Svete");
}
```

Print liniju možeš malo izmeniti:
```c
printf("Zdravo %s Svete\n", "Predivni");
```

## Kompajliranje

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
