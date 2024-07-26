# `ft_strstr`

A função `ft_strstr` é uma implementação personalizada da função `strstr` em C. Ela é usada para encontrar a primeira ocorrência de uma substring (`to_find`) dentro de uma string (`str`).

## Objetivo

A função `ft_strstr` localiza a primeira ocorrência da substring `to_find` dentro da string `str`. Se a substring for encontrada, a função retorna um ponteiro para a primeira ocorrência. Caso contrário, retorna `NULL`.

## Funcionamento

1. **Verificar Substring Vazia**:
   - Se a substring `to_find` é uma string vazia (isto é, contém apenas o caractere nulo `\0`), a função retorna o ponteiro para a string `str`.

2. **Iterar Sobre a String `str`**:
   - A função utiliza um loop para iterar sobre cada caractere de `str` até encontrar uma correspondência para a substring `to_find`.

3. **Comparar Substrings**:
   - Para cada posição de `str`, a função compara a substring de `str` com `to_find` caractere a caractere.

4. **Verificar Correspondência Completa**:
   - Se todos os caracteres de `to_find` correspondem à substring atual em `str`, a função retorna o ponteiro para o início da correspondência em `str`.

5. **Retornar `NULL`**:
   - Se a substring `to_find` não for encontrada em `str`, a função retorna `NULL`.

## Exemplo de Uso

```c
#include <stdio.h>

// Prototipo da funcao ft_strstr
char *ft_strstr(char *str, char *to_find);

int main()
{
    char str[] = "Hello, world!";
    char to_find[] = "world";
    char *result;

    // Chamar ft_strstr
    result = ft_strstr(str, to_find);

    // Exibir resultado
    if (result != NULL)
        printf("Substring encontrada: '%s'\n", result);
    else
        printf("Substring não encontrada.\n");

    return 0;
}

