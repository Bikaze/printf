/**
  *_strlen - program function
  *@s: will be holding a pointer to a string
  *Return: return length of a string
  */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
