#include <stdarg.h>
/**
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	int result = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (count = 0; count < n; count++)
		result += va_arg(args, int);
	va_end(args);
	return (result);
}
