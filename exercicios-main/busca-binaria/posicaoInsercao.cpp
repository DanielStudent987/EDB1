/**
 * @file posicaoInsercao.cpp
 * @brief Encontra a posição de inserção de um elemento em um array ordenado.
 *
 * @copyright (c) 2026 Eiji Adachi Medeiros Barbosa
 *
 * Este código é licenciado sob a Licença MIT.
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/**
 * @brief Encontra a posição onde um elemento deve ser inserido em um array ordenado.
 *
 * @param arr O array ordenado de inteiros.
 * @param tamanho O tamanho do array.
 * @param alvo O elemento a ser inserido.
 * @return O índice de inserção do alvo ou, se ele já existir, o índice de sua primeira ocorrência.
 
 Implemente uma função que, dado um array ordenado de inteiros e 
 um elemento alvo, usa busca binária para encontrar o índice onde 
 o alvo deve ser inserido para manter o array ordenado. Se o alvo já estiver presente,
  a função deve retornar o índice de sua primeira ocorrência.
 */
int validaPrimeiraOcorrencia(const int arr[], int index, int alvo) {

    if (arr[index] != arr[index-1]) {
        return index;
    } else if (arr[index-1]==alvo) {
        return validaPrimeiraOcorrencia(arr, index-1, alvo);
    }  else {
        return index;
    }
}

int buscaRecursiva (const int arr[], int inicio, int fim, int alvo) {
    if (fim<inicio) {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (alvo>arr[meio] && alvo<arr[meio+1]) {
        return meio;
    } else if (alvo<arr[meio]) {
        return buscaRecursiva(arr, meio+1, fim, alvo);
    } else if(alvo<arr[meio]) {

    } else if (alvo==arr[meio]) {
        return validaPrimeiraOcorrencia(arr, meio, alvo);
    } else {
        return meio;
    }

}
int posicaoInsercao(const int arr[], int tamanho, int alvo) {
    return buscaRecursiva(arr, 0, tamanho-1, alvo);
}

TEST_CASE("Encontrar a Posição de Inserção - Testes") {
    int arr1[] = {1, 3, 5, 6};
    CHECK(posicaoInsercao(arr1, 4, 5) == 2);
    CHECK(posicaoInsercao(arr1, 4, 2) == 1);
    CHECK(posicaoInsercao(arr1, 4, 7) == 4);
    CHECK(posicaoInsercao(arr1, 4, 0) == 0);

    int arr2[] = {1, 3, 3, 3, 5};
    CHECK(posicaoInsercao(arr2, 5, 3) == 1);
}
