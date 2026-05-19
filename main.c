#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	//printf("%d",ft_printf("hay un caracter %c en el s%ctring", '@', '@'));
	//printf("%d",printf("hay un caracter %c en el s%ctring", '@', '@'));
	//ft_printf("%shay un caracter %c en el s%ctring", "no" , '@', '@');
	
	printf("%d",ft_printf("%d %s hay u %s n caracter %c en el s%ctring", 123, "no", "frse2" , '@', '@'));
	printf("%d",printf("%d %s hay u %s n caracter %c en el s%ctring", 123, "no", "frse2" , '@', '@'));
	return (0);
}
