# Učimo C

## Instalacija

Instaliraj [Code::Blocks](http://www.codeblocks.org/) IDE za jednostavno kompajliranje i pokretanje C fajlova

## Prost primer

Napravi fajl `zdravo.c ` sledeće sadržine:

```c
#include<stdio.h>

int main() {
  printf("Zdravo %s Svete\n", "dobri");
}
```

## Kompajliranje

C kompajler pokrećemo `gcc` komandom:
```shell
gcc zdravo.c
```

Nakon toga, u direktorijumu se pojavljuje izvršni fajl `a.out` koji pokrećemo na sledeći način:
```sh
./a.out
```
