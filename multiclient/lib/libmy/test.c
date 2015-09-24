#include <stdio.h>
#include <string.h>

int	main()
{
  char	*s1 = "lol";
  char	*s2 = "lol";
  printf("chaine 1 : \"%s\"\n", s1);
  printf("chaine 2 : \"%s\"\n", s2);    
  printf("cmp = %d\n", strcmp(s1, s2));
  
  printf("chaine 1 : \"%s\"\n", s1);
  printf("chaine 2 : \"%s\"\n", s2);    
  printf("cmp = %d\n", my_strcmp(s1, s2));
  
}
