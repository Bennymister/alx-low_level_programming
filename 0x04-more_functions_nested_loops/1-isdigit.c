#include <main.h>

/**
 * isdigit - Checks for a digit
 * @c:The character to be checked
 */

int isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
