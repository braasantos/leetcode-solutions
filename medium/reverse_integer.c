#include <stdio.h>


long reverse_n(long n)
{
    long i = n;
	long rev = 0;
	if (n < 0)
	    n *= -1;
	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	if (i < 0)
	    return (rev * (-1));
	return (rev);
}

int reverse(int x)
{
    long n = reverse_n(x);
    if (n < -2147483647 || n > 2147483648)
        return (0);
    return (n);
}

