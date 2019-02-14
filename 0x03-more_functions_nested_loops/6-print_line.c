/**
 * print_line - prints a line
 * @n: the line length
 */
void print_line(int n)
{
	int Z;

	if (n > 0)
	{
		for (Z = 0; Z < n; Z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
