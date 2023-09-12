#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    FILE *file = fopen("example.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int delimiter = ','; // Custom delimiter for CSV file

    while ((read = getdelim(&line, &len, delimiter, file)) != -1) {
        printf("CSV Field: %s", line);
    }

    free(line);
    fclose(file);

    return 0;
}

