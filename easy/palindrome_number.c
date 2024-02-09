long	reverse_n(long n)
{
	long rev = 0;
	while(n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	return (rev);
}

bool	isPalindrome(int x)
{
	int n = reverse_n(x);
	if (x == n)
		return (true);
	else
		return (false);
}
