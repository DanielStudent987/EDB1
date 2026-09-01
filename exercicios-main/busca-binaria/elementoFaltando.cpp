/**
 * @file elementoFaltando.cpp
 * @brief Encontra o valor que falta em um array ordenado com elementos de 1 a tamanho + 1.
 * 
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/**
 * @brief Encontra o valor que falta em um array ordenado com elementos de 1 a tamanho + 1.
 *
 * @param arr O array ordenado contendo os valores de 1 a tamanho + 1, exceto um deles.
 * @param tamanho O tamanho do array.
 * @return O valor do elemento que falta.
 */
int elementoFaltando(const int arr[], int tamanho) {
    return -1;
}

TEST_CASE("Encontrar o Valor de um Elemento que Falta em um Array - Testes") {
    int arr1[] = {1, 2, 4, 5, 6};
    CHECK(elementoFaltando(arr1, 5) == 3);
    
    int arr2[] = {1, 2, 3, 4, 6};
    CHECK(elementoFaltando(arr2, 5) == 5);
    
    int arr3[] = {2, 3, 4, 5, 6};
    CHECK(elementoFaltando(arr3, 5) == 1);
    
    int arr4[] = {1, 2, 3, 4, 5, 7};
    CHECK(elementoFaltando(arr4, 6) == 6);
}
