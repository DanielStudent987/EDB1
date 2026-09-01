/**
 * @file raizQuadradaInteira.cpp
 * @brief Encontra a parte inteira da raiz quadrada de um número usando busca binária.
 * 
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/**
 * @brief Encontra a parte inteira da raiz quadrada de um número não negativo usando busca binária.
 *
 * @param N O número não negativo.
 * @return A parte inteira da raiz quadrada de N.
 */
int raizQuadradaInteira(int N) {
    return -1;
}

TEST_CASE("Encontrar a Raiz Quadrada Inteira - Raízes exatas") {
    CHECK(raizQuadradaInteira(0) == 0);
    CHECK(raizQuadradaInteira(1) == 1);
    CHECK(raizQuadradaInteira(4) == 2);
    CHECK(raizQuadradaInteira(9) == 3);
    CHECK(raizQuadradaInteira(16) == 4);
    CHECK(raizQuadradaInteira(25) == 5);
}

TEST_CASE("Encontrar a Raiz Quadrada Inteira - Raízes aproximadas") {
    CHECK(raizQuadradaInteira(20) == 4);
    CHECK(raizQuadradaInteira(27) == 5);
    CHECK(raizQuadradaInteira(39) == 6);
    CHECK(raizQuadradaInteira(54) == 7);
    CHECK(raizQuadradaInteira(69) == 8);
}
