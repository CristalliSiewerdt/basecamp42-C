// Testes criados por "maolivei | Matheus"
// Os testes são feitos em sua maioria com printf();
// Esse é apenas um método de testar
// Sinta-se livre para modificar e implementar sua própria maneira
// Os testes são apenas uma base do que eu acho interessante ser testado
// Não deixe de testar os casos especificados no PDF, eles são importantes
// Não se esqueça da biblioteca!!!
// | | |
// V V V
#include <stdio.h>

// ======================== EXERCÍCIO 00 ========================
// deve printar o tamanho da string (caso do exemplo = 7)
// ==============================================================
// Esse exercício é repetido, já vimos ele na C01. A função deve
// retornar o tamanho da string passada como parâmetro.
#include <stdio.h>

int	main()
{
	char	string[] = "palavra"; // altere à vontade

	printf("Tamanho da string: %d\n", ft_strlen(string));
}


// ======================== EXERCÍCIO 01 ========================
// deve printar a string (caso do exemplo = palavra + quebra de linha)
// ==============================================================
// Esse exercício é repetido, já vimos ele na C01. A função deve
// printar a string passada como parâmetro.
int	main()
{
	char	string[] = "palavra\n"; // altere à vontade

	ft_putstr(string);
}


// ======================== EXERCÍCIO 02 ========================
// deve printar os números passados como parâmetro
// ==============================================================
// Esse exercício é repetido, já vimos ele na C00. A função deve
// ser capaz de printar toda a extensão de caracteres possíveis
// dentro de um 'int'. Isto é, desde o menor int (-2147483648)
// até o maior int (2147483647). No exemplo abaixo, esses valores
// são testados.
int	main()
{
	ft_putnbr(0); // altere à vontade
	write(1, "\n", 1);
	ft_putnbr(2147483647); // altere à vontade
	write(1, "\n", 1);
	ft_putnbr(-2147483648); // altere à vontade
	write(1, "\n", 1);
}


// ======================== EXERCÍCIO 03 ========================
// deve tramsformar em inteiro uma string passada como parâmetro
// ==============================================================
// A função deve funcionar de forma quase idêntica a 'atoi' original,
// ou seja, os números passados como string devem virar inteiros.
// A função deve ignorar qualquer tipo de espaço (espaços, tabs,
// quebras de linha, tudo especificado no isspace(3)) e também
// deve alterar o sinal do número de acordo com a quantidade de
// sinais de (-), sendo positivo para uma quantidade par e negativo
// para uma quantidade ímpar. Ao encontrar um caractere que não 
// seja número, a função deve ser interrompida e devolver o que
// conseguiu converter até o momento. No exemplo abaixo, deve
// ser printado -1234.
#include <stdio.h>

int	main()
{
	char	string[] = " 	---+--+1234ab567"; // altere à vontade

	printf("Resultado: %d\n", ft_atoi(string));
}


// ======================== EXERCÍCIO 04 ========================
// deve printar os números passados como parâmetro na base especificada
// ==============================================================
// A diferença desse exercício para o exercício 02 é que dessa vez,
// juntamente ao número, vamos passar uma base a ser seguida. No
// exemplo abaixo, a base usada é a hexadecimal (de 0 a 9, de A a F).
// Os valores testados são os mesmos do exercício 02: o maior int
// possível, o menor int possível, e zero.
// Os valores a serem printados devem ser, respectivamente:
// 0
// 7FFFFFFF
// -80000000
//
// Altere a base e os valores como quiser, tem até alguns exemplos
// de base no PDF. Muitos dos testes a serem feitos estão lá, na 
// verdade.
int	main()
{
	char s[] = "0123456789ABCDEF"; // altere à vontade
	ft_putnbr_base(0, s); // altere à vontade
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, s); // altere à vontade
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, s); // altere à vontade
	write(1, "\n", 1);
}


// ======================== EXERCÍCIO 05 ========================
// // po fml esse eu nao fiz, foi mal
// ==============================================================