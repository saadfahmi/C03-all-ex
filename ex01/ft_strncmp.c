#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n){

    unsigned int i = 0;

    while(i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){


        i++;

    }
    
    if(i == n){

    
    return(0);

    }

    return(s1[i] - s2[i]);


}
int main(){


     printf("%d\n", ft_strncmp("Hello", "HelloWorld", 2));
     printf("%d\n", ft_strncmp("test", "tes", 4));
    

}