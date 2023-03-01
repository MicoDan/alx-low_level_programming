#include <stdio.h>

char *_strncat(char *dest, char *src, int n) {
// Find the end of the dest string
char *end = dest + strlen(dest);

// Append at most n characters from src to dest
int i;
for (i = 0; i < n && src[i] != '\0'; i++) {
end[i] = src[i];
}
end[i] = '\0';

// Return the updated dest string
return dest;
}
