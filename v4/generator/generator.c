#include "generator.h"
#define INITIAL_VALUE 1 // macro-constante ou constante, c'est une directive. une instruction pour le micro-processeur
#include <stdio.h>
#include <stdarg.h>

#define INITIAL_VALUE 1 // les variables et les constantes de l'environnement
#define INITIAL_STEP 1  // dans lequel s'execute votre fonction

#define RECUPERER(parametres, debut, variable) \
    va_start(parametres, debut);               \
    variable = va_arg(parametres, int);        \
    va_end(parametres);

int generator_generate(message m, ...) // on met le nom du module devant la methode ici generator_
{
    static int init_val = INITIAL_VALUE;
    static int current_val = INITIAL_VALUE;
    static int step = INITIAL_STEP;
    va_list parametres;

    switch (m)
    {

    case Premier:
        // RECUPERER(parametres, m, init_value);
        va_start(parametres, m);
        init_val = va_arg(parametres, int);
        va_end(parametres);
        break;

    case Pas:
        // RECUPERER(parametres, m, STEP);
        va_start(parametres, m);
        step = va_arg(parametres, int);
        va_end(parametres);
        break;

    case Debut:
        current_val = init_val;
        break;

    case Suivant:
        int n = current_val;
        current_val += step;
        return n;

    default:
        printf("problemo!!!");
        break;
    }
    return 0;
}