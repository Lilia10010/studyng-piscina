# `ft_strlcat`

A função `ft_strlcat` é uma implementação personalizada da função `strlcat` em C. Ela é utilizada para concatenar strings de forma segura, garantindo que não haja estouro de buffer e que a string resultante seja devidamente terminada.

## Objetivo

A função `ft_strlcat` concatena a string `src` ao final da string `dest`, respeitando um limite de tamanho (`size`) para evitar ultrapassar a capacidade do buffer. A função assegura que a string `dest` seja terminada com um byte nulo (`\0`), se houver espaço disponível.

## Funcionamento

1. **Calcular Comprimentos**:
   - **Comprimento de `dest`**: A função calcula o comprimento da string `dest`, excluindo o byte nulo.
   - **Comprimento de `src`**: A função calcula o comprimento da string `src`, excluindo o byte nulo.

2. **Calcular Comprimento Total Esperado**:
   - A função soma o comprimento atual de `dest` com o comprimento de `src`, ajustando para o tamanho máximo (`size`).

3. **Concatenar com Limite**:
   - A função concatena `src` ao final de `dest`, respeitando o limite de `size - 1` para evitar ultrapassar a capacidade do buffer.
   - Garante que `dest` seja terminada com um byte nulo (`\0`), se houver espaço disponível.

4. **Retornar Comprimento Total**:
   - A função retorna o comprimento total que a string concatenada teria se não houvesse limite de tamanho (`size`).

## Comportamento

- Se o comprimento de `dest` é maior ou igual a `size`, `ft_strlcat` não adiciona nada de `src` e retorna `size + comprimento de `src`.
- Se há espaço suficiente em `dest`, `src` é concatenada até o limite de `size - 1`, garantindo que o byte nulo seja adicionado ao final.

## Exemplo de Uso

```c
#include <stdio.h>

// Prototipo da funcao ft_strlcat
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 50;
    unsigned int result;

    // Exibir strings originais
    printf("Antes:\n");
    printf("dest: '%s'\n", dest);
    printf("src: '%s'\n", src);

    // Chamar ft_strlcat
    result = ft_strlcat(dest, src, size);

    // Exibir resultado
    printf("\nDepois:\n");
    printf("dest: '%s'\n", dest);
    printf("Comprimento total da string concatenada: %u\n", result);

    return 0;
}

<p align="center"> Developed by 🍄 Lília Paula </p>
