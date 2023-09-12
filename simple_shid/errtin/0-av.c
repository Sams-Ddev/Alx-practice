#include <stdio.h>

int main(int ac, char **av) {
    int i = 1; /* Start from av[1] since av[0] is the program name*/

    /* Iterate through the av array until av[i] is NULL*/
    while (av[i] != NULL) {
        printf("Argument %d: %s\n", i, av[i]);
        i++;
    }

    return (0);
}

