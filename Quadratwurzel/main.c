#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void quadratwurzelkreis();

double quadrat(int zahl) {
    return zahl * zahl;
}

double quadratwurzel(int zahl) {
    return sqrt(zahl);
}

double kreis_flaeche(int radius){
    return M_PI * radius * radius;
}

int zusatzaufgabe(void) {
    int r;
    printf("| Radius | Kreisflaeche |\n");
    for(r = 1; r <= 20; r++) {
        printf("|%d  \t |  %f\t|\n", r,kreis_flaeche(r));
    }
}

int main(int argc, char* argv[]) {
    //quadratwurzelkreis();
    zusatzaufgabe();
    return 0;
}

void quadratwurzelkreis() {
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

    /* Ruf die Funktion 'quadrat' auf und speichere das Ergebnis */
    ergebnis = quadratwurzel(eingabe);
    printf("Die Quadratwurzel der Zahl %d ist %f\n", eingabe, ergebnis);

    /* Ruf die Funktion 'kreis_flaeche' auf und speichere das Ergebnis */
    ergebnis = kreis_flaeche(eingabe);
    printf("Die Kreisfläche der Zahl %d ist %f\n", eingabe, ergebnis);
}

