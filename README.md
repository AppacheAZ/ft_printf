# ft_printf
This project recreate the popular function printf from the standard library in C.
This project is part of the **42** school cursus and follows the Norme coding standard.

this prototype have the following formats:
- %c
- %s
- %p
- %d
- %i
- %u
- %x
- %X
- %%
- ... more to come

## Usage

To compile the library, run `make` in the root of the repository. This will create a `libftprintf.a` file that you can link to your project.
Use the following command to clean the object files:
`make clean` to clean the object files, `make fclean` to clean the object files and the library, `make re` to recompile the library and to see what does the Makefile do, use the following command: `make -n`

## Example
To test the library, you can use the following code:
<pre><code>
#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
    int myft;
    int real;
    char *str = "hola";
    
    myft = ft_printf("myft: Hol%c %s %p %d%i %u %x %X %%\n", 'a', "mundo", str, 4, 2, -42, 31, 232988557);
    real = printf("real: Hol%c %s %p %d%i %u %x %X %%\n", 'a', "mundo", str, 4, 2, -42, 31, 232988557);

    printf("\nmyft: %d\nreal: %d\n", myft, real);

    return (0);
}
</code></pre>