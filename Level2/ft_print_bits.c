#include <unistd.h>
#include <stdio.h>
// imprime los bits
// void ft_print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char 	bit;//almacena cada bit antes de imprimirlo

// 	while (i--)//el bucle se ejecuta mientras decremente el valor de i
// 	// va desde el 8 hasta el 0 sin incluirlo
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		// cada iteración extrae un bit espcífico
// 		// primero hace un desplazamiento a la dcha en el valor de octet por i posiciones
// 		//hace una operación AND con 1 para obtener solo el último bit(el menos significativo)
// 		// le suma cero para convertirlo en caracter 0
// 		write(1, &bit, 1);
// 	}
// }
void ft_print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	bit;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}


int	main()
{
	unsigned char octet;
	octet = 7;
	ft_print_bits(octet);
	return (0);
	
}
// int main()
// {
// 	unsigned char test_values[4] = {0x00, 0x01, 0xFF, 0x7F}; // Valores de prueba: 00000000, 00000001, 11111111 y 01111111

// 	for (int i = 0; i < sizeof(test_values); i++)
// 	{
// 		ft_print_bits(test_values[i]); // Llama a la función para imprimir los bits
// 		write(1, "\n", 1);              // Nueva línea después de cada impresión
// 	}

// 	return 0;
// }


void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsignet char bit;

	while (i--)
		bit = (octet >> i & 1) + '0';
	write(1, &bit, 1);
}
