#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
char password[84];
int i, n;

srand(time(NULL));

for (i = 0; i < 10; i++)
{
password[i] = rand() % 94 + 33;
}
password[i++] = '\xef';
password[i++] = '\x98';
password[i++] = '\x04';
password[i] = '\x08';

printf("%s", password);

return (0);
}
