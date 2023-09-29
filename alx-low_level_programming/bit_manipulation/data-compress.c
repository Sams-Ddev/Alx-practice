/**
 * For example, the following code compresses a string of ASCII
 * characters by removing all of the whitespace:
 */

char *compress_string(char *str) {
  char *compressed_str = malloc(strlen(str) / 2 + 1);
  int i = 0;
  int j = 0;
  while (str[i] != '\0') {
    if (str[i] != ' ') {
      compressed_str[j] = str[i];
      j++;
    }
    i++;
  }
  compressed_str[j] = '\0';
  return compressed_str;
}

