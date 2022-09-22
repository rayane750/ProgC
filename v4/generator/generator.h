#ifndef GENERATOR_H
#define GENERATOR_H

enum message
{
    Debut,
    Suivant,
    Pas,
    Premier
};

typedef enum message message;

extern int generator_generate(message, ...); // prototype , N.B: on devrait normalement mettre le nom du module devant generate: generator_generate

#endif