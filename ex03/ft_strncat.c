#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb){
    unsigned int i;
    unsigned int j;
    i = 0;
    j = 0;

    while(dest[i] != '\0'){

        i++;
    }

    while(j < nb && src[j] != '\0'){


        dest[i] = src[j];

        i++;
        j++;

    }

    dest[i] = '\0';

    return(dest);




}
int main(){

    char src[] = "hello";
    char dest[100] = "2348904924238";
    printf("%s", ft_strncat(dest, src, 6));

}