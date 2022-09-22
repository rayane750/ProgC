// #include "generator.h" on appelle la methode generate du module generate. pas la peine de l'inclure
#include "suite.h"
#include "generator.h"
#include <stdio.h>
#include <stdlib.h> // Pour pouvoir utiliser EXIT_SUCCESS

int main(int argc, char **argv)
{
    int n = argc > 1 ? atoi(argv[1]) : 0; // atoi: ascii to integer

    generator_generate(Pas, -2);
    generator_generate(Premier, n);
    printf("des suites arithmetiques: \n");
    while (n-- > 0)
    {
        suite_e_suite(n);
        putchar('\n'); // c'est une fonction pour afficher un charactere sur une ligne.  sa definition est dans stdlib.h
    }
    printf("\n");
    return EXIT_SUCCESS;
}
