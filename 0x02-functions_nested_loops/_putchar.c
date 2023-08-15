#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _putchar - includes prototypes for function _putchar
 *
 */

int _putchar(void)
{
        int length;
        char *to_print = "_putchar\n";
        length = strlen(to_print);

        write(1, to_print, length);
        
        return (0);
}
