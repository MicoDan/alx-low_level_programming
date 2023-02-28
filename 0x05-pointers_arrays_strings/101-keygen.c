#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
char password[16];
int i, sum, diff;

srand(time(NULL));

/* Generate first 7 characters */
for (i = 0; i < 7; i++)
password[i] = rand() % 10 + '0';

/* Generate next 7 characters */
for (i = 7; i < 14; i++)
password[i] = rand() % 26 + 'a';

/* Generate last character */
sum = 0;
for (i = 0; i < 14; i++)
sum += password[i];
password[14] = (sum ^ 0xef) & 0xff;

/* Print password */
password[15] = '\0';
printf("%s\n", password);
/* Check password */
if (password[0] != '9' ||
password[1] != '8' ||
password[2] != '2' ||
password[3] != '7' ||
password[4] != '1' ||
password[5] != '0' ||
password[6] != '6' ||
password[7] < 'a' ||
password[7] > 'z' ||
password[8] < 'a' ||
password[8] > 'z' ||
password[9] < 'a' ||
password[9] > 'z' ||
password[10] < 'a' ||
password[10] > 'z' ||
password[11] < 'a' ||
password[11] > 'z' ||
password[12] < 'a' ||
password[12] > 'z' ||
password[13] < 'a' ||
password[13] > 'z' ||
password[14] != '\xef')
{
fprintf(stderr, "Wrong password\n");
return (1);
}

printf("Tada! Congrats\n");
return (0);
}



