// Copyright © 2024 Mauro Silva.
/**
 * \file testa_velha.cpp
 */

#include "../TDD_velha/velha.hpp"

#define CATCH_CONFIG_MAIN
#include "../TDD_velha/catch.hpp"
TEST_CASE("Testa Inicio", "[single-file]") {
    int testeInicio[3][3] = {{ 0, 0, 0 },
                             { 0, 0, 0 },
                             { 0, 0, 0 }};
    REQUIRE(VerificaVelha(testeInicio) == -1);
}

TEST_CASE("Testa Impossivel1", "[single-file]") {
    int testeImp1[3][3] = {{ 1, 1, 1 },
                           { 1, 1, 1 },
                           { 1, 1, 1 }};
    REQUIRE(VerificaVelha(testeImp1) == -2);
}

TEST_CASE("Testa Impossivel2", "[single-file]") {
    int testeImp2[3][3] = {{ 2, 2, 2 },
                           { 2, 2, 2 },
                           { 2, 2, 2 }};
    REQUIRE(VerificaVelha(testeImp2) == -2);
}

TEST_CASE("Testa Impossivel3", "[single-file]") {
    int testeImp3[3][3] = {{ 2, 1, 2 },
                           { 1, 2, 1 },
                           { 2, 1, 2 }};
    REQUIRE(VerificaVelha(testeImp3) == -2);
}

TEST_CASE("Testa Impossivel4", "[single-file]") {
    int testeImp4[3][3] = {{ 1, 1, 2 },
                             { 1, 2, 1 },
                             { 2, 1, 2 }};
    REQUIRE(VerificaVelha(testeImp4) == -2);
}

TEST_CASE("Testa Impossivel5", "[single-file]") {
    int testeImp5[3][3] = {{ 1, 2, 2 },
                             { 1, 2, 1 },
                             { 1, 2, 1 }};
    REQUIRE(VerificaVelha(testeImp5) == -2);
}