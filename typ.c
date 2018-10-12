#include <stdbool.h>
#include "stdio.h"

int main()  {
    enum dni {
        ni, po = 5, wt, sr, cz, pi, so
    };

    enum dni dzien_tygodnia;
    bool czy_byl_obecny = false;

    dzien_tygodnia = so;
    printf("%i", dzien_tygodnia);

    printf("%i", czy_byl_obecny);


}