#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double quadrat(int zahl) {
    return zahl * zahl;
}

int main(int argc, char* argv[]) {
    char puffer[32];
    int eingabe;
    double ergebnis;

    /* Hier muss der Benutzer etwas eingeben. */
    puts("Bitte geben Sie eine Zahl ein: ");
    fflush(stdout);
    fgets(puffer, 32, stdin);
    eingabe = atoi(puffer);

    /* Ruf die Funktion 'quadrat' auf und speichere das Ergebnis */
    ergebnis = quadrat(eingabe);
    printf("Das Quadrat der Zahl %d ist %f\n", eingabe, ergebnis);

    return 0;
}
