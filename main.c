#include<stdio.h>
#include "libft.h"


int main(int argc, char const *argv[])
{
    // const char *str = "heeafwafawef";
    // char  c;
    // c = 'e';
    // printf("Found letter:%c\n", *ft_strchr(str, c));
    // ft_strchr(str, c);
    // return 0;
    const char cdizi[] = "Bilgisayar";
    char *ret;

    ret = ft_strchr(cdizi, 's');

    printf("Bulunan karakterden itibaren dizi içeriği: %s", ret);

    return 0;
}
