#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else  
	{
	        return (0);
	}		
=======
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
>>>>>>> 677624dd1cf4fd33bcfad41c0196bf17437d512e
