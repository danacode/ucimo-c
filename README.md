# Učimo C

* [Uvodni tutorijal](http://poincare.matf.bg.ac.rs/~jelenagr/op/cc1.htm)
* [Rešeni primeri i zadaci](http://www.its.edu.rs/ITS-Reseni-primeri-iz-programskog-jezika-C_799)
* [Literatura na srpskom](http://tutoriali.org/C.html)
* [Learn C The Hard Way](https://wizardforcel.gitbooks.io/lcthw-en/content/)

## Instalacija

`C` se već nalazi na svim Unix sistemima (Linux i OS X).

## Prost primer

Napravi fajl `zdravo.c ` sledeće sadržine:

```c
#include<stdio.h>

void main() {
  printf("Zdravo Svete");
}
```

## Kompajliranje

Na Unix sistemima ima nekoliko prevodilaca za `C`, te kompajlirati možemo na razne načine.

### CC

C kompajleru prosleđujemo izvorni fajl i izlaz:
```
cc zdravo.c -o zdravo
```

Nakon toga, u direktorijumu se pojavljuje izvršni fajl `zdravo` koji pokrećemo iz konzole:
```
./zdravo
```

### GCC

GNU C prevodilac pokrećemo `gcc` komandom:
```
gcc zdravo.c
```

Ukoliko je bez argumenata, u direktorijumu se pojavljuje izvršni fajl `a.out` koji pokrećemo na sledeći način:
```
./a.out
```

Prevodiocu možete proslediti argument `-o` sa imenom izlaznog fajla:
```
gcc -o zdravo zdravo.c
```

### make

Komanda `make` od fajla `zdravo.c` automatski pravi izvršni fajl `zdravo`:
```
make zdravo
```

U pozadini, `make` zapravo radi:
```
cc zdravo.c -o zdravo
```

## IDE

Možeš instalirati [Code::Blocks](http://www.codeblocks.org/) za jednostavno kompajliranje i pokretanje C fajlova.
