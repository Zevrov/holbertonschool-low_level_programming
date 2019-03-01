int _atoi(char *c)
{
	int k = 0;

	while (*p)
    	{
		k = (k<<3)+(k<<1)+(*p)-'0';
		p++;
	}
	return k;
}
