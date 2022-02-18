#include "./ex00/ft_strcpy.c"
#include "./ex01/ft_strncpy.c"
#include "./ex02/ft_str_is_alpha.c"
#include "./ex03/ft_str_is_numeric.c"
#include "./ex04/ft_str_is_lowercase.c"
#include "./ex05/ft_str_is_uppercase.c"
#include "./ex06/ft_str_is_printable.c"
#include "./ex07/ft_strupcase.c"
#include "./ex08/ft_strlowcase.c"
#include "./ex09/ft_strcapitalize.c"
#include "./ex10/ft_strlcpy.c"
#include "./ex11/ft_putstr_non_printable.c"

#include <stdio.h>

void ex00()
{
	char src[] = "Teste";
	char dest[] = "";
	char *pointer;

	pointer = ft_strcpy(dest, src);

	for(int i = 0; i<dest[i]; i++)
	{
		printf("%c", pointer[i]);
	}
	printf("\n%s\n", pointer);
}

void ex01()
{
	unsigned int n = 3;
	char dest[n];
	char src[] = "Teste";
	char *pointer;

	pointer = ft_strncpy(dest, src, n);

	for(int i = 0; i<(int)n; i++)
	{
		printf("%c", pointer[i]);
	}
	printf("\n%s\n", pointer);
}

void ex02()
{
	printf("%d\n", ft_str_is_printable("aldfkj"));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("aldfk1"));
	//printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("ASFGEE"));
	printf("%d\n", ft_str_is_printable("ASFG#EE\t"));
}

void ex03()
{
	printf("%d\n", ft_str_is_printable("aldfkj"));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("aldfk1"));
	//printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("ASFGEE"));
	printf("%d\n", ft_str_is_printable("ASFG#EE\t"));
}

void ex04()
{
	printf("%d\n", ft_str_is_printable("aldfkj"));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("aldfk1"));
	//printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("ASFGEE"));
	printf("%d\n", ft_str_is_printable("ASFG#EE\t"));

void ex05()
{
	printf("%d\n", ft_str_is_printable("aldfkj"));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("aldfk1"));
	//printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("ASFGEE"));
	printf("%d\n", ft_str_is_printable("ASFG#EE\t"));
}

void ex06()
{
	printf("%d\n", ft_str_is_printable("aldfkj"));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("aldfk1"));
	//printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("€"));
	printf("%d\n", ft_str_is_printable("ASFGEE"));
	printf("%d\n", ft_str_is_printable("ASFG#EE\t"));

void ex07()
{
	char str[] = "cafsS'ahsfpiuhsdGKJÇKz";
	char *pointer;
	
	pointer = ft_strupcase(str);
	printf("%s ", pointer);	
}

void ex08()
{
	char str[] = "cafsS'ahsfpiuhsdGKJÇKz";
	char *pointer;

	pointer = ft_strlowcase(str);
	printf("%s ", pointer);
}

int main(void)
{
	printf("\n\n---EX00---\n\n");
	ex00();
	printf("\n\n---EX01---\n\n");
	ex01();
	printf("\n\n---EX02---\n\n");
	ex02();
	printf("\n\n---EX03---\n\n");
	ex03();
	printf("\n\n---EX04---\n\n");
	ex04();
	printf("\n\n---EX05---\n\n");
	ex05();
	printf("\n\n---EX06---\n\n");
	ex06();
	printf("\n\n---EX07---\n\n");
	ex07();
	printf("\n\n---EX08---\n\n");
	ex08();
	return (0);
}

//norminette -R CheckForbiddenSourceHeader
//gcc -Wall -Werror -Wextra *.c -o teste && ./teste
//by: briferre
