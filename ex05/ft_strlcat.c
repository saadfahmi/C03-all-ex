#include <stdio.h>
int ft_strlen(char *str){

    int i;
    i = 0;
    while(str[i] != '\0'){

        i++;

    }
    return(i);


}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){


    unsigned i;
    unsigned j;
    unsigned dlen;
    unsigned slen;
    i = 0;
    j = 0;


      while(dest[j] != '\0'){

        j++;

      } 
      dlen = j;
      slen = ft_strlen(src);
      if(dest[j] == 0 || size <= dlen)
      while(src[i] != '\0' && (i < size - dlen - 1)){

        dest[j] = src[i];

        j++;
        i++;


        
      }
      dest[j] = '\0';

      return(dlen + slen);
    
}

int main(){

    char src[] = "testttttt";
    char dest[] = "84272";
    printf("%u\n", ft_strlcat(dest, src, 30));
    printf("%s\n", dest);

}







