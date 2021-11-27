#include <stdio.h>

char    *ft_strcapitalize(char *str);

int        main(void)
{
    char str1[] = "deneme, bu bir deneme";
    
    char str2[] = " dEnEmE, bU bIr DeNemE";

    char empty[] = "";

    printf("\n-----\nBEF = %s", str1);
    printf("\nAFT = %s\n", ft_strcapitalize(str1));
    printf("\nBEF = %s", str2);
    printf("\nAFt = %s\n", ft_strcapitalize(str2));
    printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
