#include <stdio.h>

int main() {
    int tableau[5] = {10, 20, 30, 40, 50};

    printf("-- Partie 1 : Affichage du tableau --\n");
    for (int i = 0; i < 5; i++) {
        printf("Élément %d : %d\n", i, tableau[i]);
    }

    // Calcul de la somme
    int somme = 0;
    for (int i = 0; i < 5; i++) {
        somme += tableau[i];
    }

    // Trouver la valeur maximale
    int max = tableau[0];
    for (int i = 1; i < 5; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Calcul de la moyenne
    float moyenne = (float)somme / 5;

    printf("\n-- Partie 2 : Manipulations sur le tableau --\n");
    printf("Somme : %d\n", somme);
    printf("Valeur maximale : %d\n", max);
    printf("Moyenne : %.2f\n", moyenne);

    return 0;
}
