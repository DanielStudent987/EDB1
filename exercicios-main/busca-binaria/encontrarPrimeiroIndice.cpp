/**
 * @file encontrarPrimeiroIndice.cpp
 * @brief Encontra o primeiro índice de um elemento em um array ordenado.
 * 
 * (C) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/**
 * @brief Encontra o primeiro índice de um elemento no array usando busca binária.
 *
 * @param arr O array ordenado de inteiros.
 * @param tamanho O tamanho do array.
 * @param alvo O elemento a ser buscado.
 * @return o primeiro índice do elemento encontrado, ou -1 se não estiver presente.
 */
int validaBuscaRecursiva(const int arr[], int alvo, int index) {
    if (index==0) {
        return 0;
    }

    if (arr[index] != arr[index-1]) {
        return index;
    } else if (arr[index] == arr[index-1]) {
        return validaBuscaRecursiva(arr, alvo, index-1);
    } else {
        return -1;
    }
}

int buscaRecursiva (int inicio, int fim, const int arr[], int alvo) {
    if (inicio>fim) {
        return -1;
    }

    int meio = (fim + inicio) / 2;
    if (arr[meio]>alvo) {
        return buscaRecursiva(inicio, meio-1, arr, alvo);    
    } else if (arr[meio]<alvo) {
        return buscaRecursiva(meio+1, fim, arr, alvo);
    } else {
        return validaBuscaRecursiva(arr, alvo, meio);
    }
}

int encontrarPrimeiroIndice(const int arr[], int tamanho, int alvo) {
    

    return buscaRecursiva(0, tamanho-1, arr, alvo);
}

TEST_CASE("Encontrar Primeiro Índice - Testes") {
    int arr1[] = {1, 2, 2, 2, 3, 4, 5};

    auto resultado = encontrarPrimeiroIndice(arr1, 7, 2);
    CHECK(resultado == 1);

    resultado = encontrarPrimeiroIndice(arr1, 7, 4);
    CHECK(resultado == 5);

    resultado = encontrarPrimeiroIndice(arr1, 7, 5);
    CHECK(resultado == 6);

    resultado = encontrarPrimeiroIndice(arr1, 7, 6);
    CHECK(resultado == -1);

    resultado = encontrarPrimeiroIndice(arr1, 7, 1);
    CHECK(resultado == 0);
}
