/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:49:39 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/30 11:03:14 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is a file for the test porposes only*/

#include "libft.h"

/*

//ft_strlen
int		main(void)
{
	printf("%i", ft_strlen("Hello"));
	return (0);
}

//ft_memset
int		main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";

	ft_memset(str + 12, 'b', 5*sizeof(char));
	printf("%s", str);
	return (0);
}

//ft_strcmp
int		main(void)
{
	char str[50] = "	";
	char str2[50] = "	";
	int result;

	result = ft_strcmp(str, str2);
	printf("%d", result);
	return (0);
}
//ft_bzero
int		main(void)
{
	char test[] = "hello";
	int c = 5;
	ft_bzero(test, c);
	printf("%s", test);
	return (0);
}
//ft_strcpy
int		main(void)
{
	char src[40];
	char dest[100];

	ft_memset(dest, '\0', sizeof(dest));
   	ft_strcpy(src, "\0");
   	ft_strcpy(dest, src);
	printf("Final copied string : %s\n", dest);
	return (0);
}

//ft_memcpy
int		main(void)
{
	char str1[] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char str2[] = "zyxwvutsrqponmjjjjjjjjjjjjjjjj";

	printf("Before ft_memcpy: %s\n", str1);
	ft_memcpy(str1, str2, sizeof(str2));
	printf("After ft_memcpy: %s", str1);
	return (0);
}

//ft_memccpy
int		main(void)
{
	char str1[80] = "jhgfldjklfhfhi9";
	char str2[80] = "djkj:kfdjf";

	printf("Before ft_memccpy: %s\n", str1);
	ft_memccpy(str1, str2, ':', 80);
	printf("After ft_memccpy: %s", str1);
	return (0);
}

//ft_memmove
int     main(void)
{
	char csrc[100] = "Geeksfor";
	ft_memmove(csrc+5, csrc, strlen(csrc)+1);
	printf("%s", csrc);
	return 0;
}

//ft_memchr
int		main(void)
{
	char str[] = "ABCDEFG ";
	char *ps = ft_memchr(str, ' ', strlen(str));
	if (ps != NULL)
		printf ("Search character found: %s\n", ps);
	else
		printf ("Search character not found\n");
	return (0);
}

//ft_memcmp
int		main(void)
{
	int result, result2;
	char s1[] = "";
	char s2[] = "";

	result = memcmp(s1, s2, 6);
	result2 = ft_memcmp(s1, s2, 6);
	printf("memcmp: %d\n", result);
	printf("ft_memcmp: %d", result2);
	return (0);
	return (0);
}
//ft_strdup
int		main(void)
{
	char *a = "Helloldfjf";
	char *p;

	p = ft_strdup(a);
	printf("%s", p);
	return (0);
}
//ft_strncpy
int		main(void)
{
  char str1[]= "To bfdkfk";
  char str2[40];
  char str3[40];

  //copy to sized buffer (overflow safe):
  strncpy ( str2, str1, sizeof(str2) );
  ft_strncpy ( str2, str1, sizeof(str2) );

  //partial copy (only 5 chars):
  strncpy ( str3, str2, 7);
  ft_strncpy ( str3, str2, 7);
  str3[4] = '\0';   // null character manually added 

  printf("%s", str1);
  printf("%s", str2);
  printf("%s", str3);
  return 0;
}

//ft_strcat
int		main(void)
{
	char s1[80];

	ft_strcat(s1, "Hello ");
	ft_strcat(s1, "there!");
	printf("%s", s1);
	return (0);
}

int     main(void)
{
    char s1[19] = "fjdjpsssss";
	int i;
	
    i = ft_strlncat(s1, "Hello ", 26);
    printf("%d", i);
    return (0);
}

//ft_strlcat
int     main(void)
{
	char *s1;
    int i;

	s1 = (char *)malloc(sizeof(*s1) * 15);	
	memset(s1, 'a', 14);
    i = ft_strlcat(s1, "lorem ipsum dolor sit amet", 15);
    printf("%d", i);
    return (0);
}

//ft_strchr
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

//ft_strrchr
int		main()
{
	const char str[] = "\0fj.jdj\0djdjf";
	char ch = '\0';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}

//ft_strstr
int main() 
{ 
    // Take any two strings 
    char s1[] = "YevforYev"; 
    char s2[] = "f"; 
    char* p; 
  
    // Find first occurence of s2 in s1 
    p = ft_strstr(s1, s2); 
  
    // Prints the result 
    if (p) { 
        printf("String found\n"); 
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p); 
    } else
        printf("String not found\n"); 
  
    return 0; 
}
*/
//ft_strnstr
int main()
{
    // Take any two strings
    char s1[] = "lorem ipsum dolor sit amet";
    char s2[] = "dolor";
    char* p;

    // Find first occurence of s2 in s1
    p = strnstr(s1, s2, 15);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");

    return 0;
}















