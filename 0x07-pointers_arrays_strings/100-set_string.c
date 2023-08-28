#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: is a pointer pointing to another pointer
 * @to: a pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
