#include "ft_print_memory.c"
#include <stdio.h>

int main()
{
    char str[] = "Bonjour les aminches\x09\x0a\x09" "c\x07 est fou\x09tout\x09" "ce qu on peut faire avec\x09\x0a\x09print_memory\x0a\x0a\x0a\x09lol.lol\x0a \x00";

    ft_print_memory(str, 92);
}
