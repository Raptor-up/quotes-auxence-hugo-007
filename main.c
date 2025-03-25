#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quotes.h"

int main() {
    srand(time(NULL));

    char * quotes[MAX_QUOTES] = {
        "Pourquoi les plongeurs plongent-ils toujours en arrière et jamais en avant ? Parce que sinon ils tombent dans le bateau.",
        "Je suis contre les pickpockets… sauf en cas de légitime défense.",
        "J’ai acheté un aspirateur… mais il ne fait que prendre la poussière.",
        "Si le travail c’est la santé… alors vive la maladie !",
        "Il vaut mieux mobiliser son intelligence sur des conneries que mobiliser sa connerie sur des choses intelligentes.",
        "L’alcool ne résout pas les problèmes… mais l’eau et le lait non plus.",
        "Je n’ai pas le temps de me dépêcher.",
        "La vitesse de la lumière est supérieure à celle du son. C’est pourquoi certaines personnes paraissent brillantes jusqu’à ce qu’elles parlent.",
        "Je suis multitâche : je peux écouter, ignorer et oublier en même temps.",
        "Je ne suis pas en retard, je suis en édition spéciale."
    };

    print_random_quote(quotes);
    return 0;
}
