#include <stdio.h>

int main() {
 FILE *file;

 // Open the file for writing
 file = fopen("example.txt", "w");

 if (file == NULL) {
   perror("Error opening file");
   return 1;
 }

 // Write to the file
 fprintf(file, "This is a test.");

 // Close the file
 fclose(file);

 return 0;

