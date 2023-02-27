/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i, num, count;
if (a == NULL)
return;

for (i = 0; i < n; i++)
{
num = a[i];
count = 0;

/* Handle negative numbers */
if (num < 0)
{
putchar('-');
num = -num;
}

/* Count number of digits in the number */
if (num == 0)
count = 1;
else
{
while (num > 0)
{
count++;
num /= 10;
}
}
/* Print the number */
num = a[i];
if (num < 0)
num = -num;
do
{
putchar(num / pow(10, count - 1) + '0');
num %= (int) pow(10, count - 1);
count--;
} while (count > 0);

/* Print comma and space except for the last element */
if (i < n - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}

