/**
 * regex_match - checks whether a given pattern
 * matches a given string
 *
 * @str: string to scan
 * @pattern: regular expression
 * Return: 1 if the strings can be considered
 * identical, otherwise return 0
 */
int regex_match(char const *str, char const *pattern)
{
	if (*pattern == '\0')
		return (*str == '\0');

	if (*str == '.' || *str == '*')
    	return (0);

	int first_match = (*str && (*pattern == *str || *pattern == '.'));

	if (*(pattern + 1) == '*')
	{
		return (regex_match(str, pattern + 2) || (first_match && regex_match(str + 1, pattern)));
	}

	return (first_match && regex_match(str + 1, pattern + 1));
}
