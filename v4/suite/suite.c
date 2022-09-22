#include "suite.h"
#include "generator.h"
#include <stdio.h>

void suite_e_suite(int longueur)
{
    generator_generate(Debut);
    printf("(");
    while (longueur-- >= 0)
    {
        printf("%d, ", generator_generate(Suivant));
    }
    printf(")\n");
}