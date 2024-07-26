/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:32:04 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/26 19:22:21 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	comprimento_dest;
	unsigned int	posicao_src;
	unsigned int	total_length;

	comprimento_dest = 0;
	//determinando o comprimento da string dest
	while (dest[comprimento_dest])
		comprimento_dest++;

	total_length = 0;
	//determinando o comprimento da string src
	while (src[total_length])
		total_length++;


	//ajustar total_length para refletir o comprimento total da string concatenada
  if (size <= comprimento_dest)
    total_length += size;
  else
    total_length += comprimento_dest;

  posicao_src = 0;
      // Copiar caracteres de src para o final de dest
    // enquanto houver caracteres em src e houver espaço em dest para a cópia
    // sem ultrapassar o limite de size - 1, garantindo espaço para o byte nulo
  while (src[posicao_src] && (comprimento_dest + posicao_src) < (size - 1))
  {
    dest[comprimento_dest + posicao_src] = src[posicao_src];
    posicao_src++;
  }
   // Garantir que a string dest seja terminada corretamente
  if(comprimento_dest < size)
    dest[comprimento_dest + posicao_src] = '\0';
  return (total_length);
}

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 50;
    unsigned int result;

    result = ft_strlcat(dest, src, size);

    // Exibir resultado
    printf("\nDepois:\n");
    printf("dest: '%s'\n", dest);
    printf("Comprimento total da string concatenada: %u\n", result);

    return 0;
}
