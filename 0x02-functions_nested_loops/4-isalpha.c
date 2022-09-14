#include "main.h"
/**
 * _isalpha - check if character is a alphabet.
 * @c: type int character
 * REturn: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
