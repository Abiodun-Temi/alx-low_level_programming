/**
 * leet - a function that encodes a string to hack3r dialogue
 *
 * @s: The string to encode.
 *
 * Return: A pointer to the string after we encode it.
*/

char *leet(char *s)
{
	int t;
	int e = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[e] != '\0')
	{
		for (t = 0; t < 5; t++)
		{
			if (s[e] == sl[t] || s[e] == ul[t])
			{
				s[e] = n[t];
				break;
			}
		}
		e++;
	}
	return (s);
}
