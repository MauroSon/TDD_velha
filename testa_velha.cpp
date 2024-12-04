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

TEST_CASE("Testa Impossivel7", "[single-file]") {
    int testeImp7[3][3] = {{ 1, 1, 1 },
                           { 0, 0, 0 },
                           { 0, 0, 0 }};
    REQUIRE(VerificaVelha(testeImp7) == -2);
}

TEST_CASE("Testa Impossivel8", "[single-file]") {
    int testeImp8[3][3] = {{ 2, 2, 2 },
                           { 0, 0, 0 },
                           { 0, 0, 0 }};
    REQUIRE(VerificaVelha(testeImp8) == -2);
}

TEST_CASE("Testa VitoriaXL1", "[single-file]") {
    int testeVXL1[3][3] = {{ 1, 1, 1 },
                           { 2, 2, 0 },
                           { 0, 0, 0 }};
    REQUIRE(VerificaVelha(testeVXL1) == 1);
}

TEST_CASE("Testa VitoriaXL2", "[single-file]") {
    int testeVXL2[3][3] = {{ 2, 2, 0 },
                           { 1, 1, 1 },
                           { 0, 0, 0 }};
    REQUIRE(VerificaVelha(testeVXL2) == 1);
}

TEST_CASE("Testa VitoriaXL3", "[single-file]") {
    int testeVXL3[3][3] = {{ 0, 0, 0 },
                           { 2, 2, 0 },
                           { 1, 1, 1 }};
    REQUIRE(VerificaVelha(testeVXL3) == 1);
}

TEST_CASE("Testa VitoriaXC1", "[single-file]") {
    int testeVXC1[3][3] = {{ 1, 0, 0 },
                           { 1, 2, 0 },
                           { 1, 2, 0 }};
    REQUIRE(VerificaVelha(testeVXC1) == 1);
}

TEST_CASE("Testa VitoriaXC2", "[single-file]") {
    int testeVXC2[3][3] = {{ 0, 1, 0 },
                           { 2, 1, 0 },
                           { 2, 1, 0 }};
    REQUIRE(VerificaVelha(testeVXC2) == 1);
}

TEST_CASE("Testa VitoriaXC3", "[single-file]") {
    int testeVXC3[3][3] = {{ 0, 0, 1 },
                           { 0, 2, 1 },
                           { 0, 2, 1 }};
    REQUIRE(VerificaVelha(testeVXC3) == 1);
}

TEST_CASE("Testa VitoriaOL1", "[single-file]") {
    int testeVOL1[3][3] = {{ 2, 2, 2 },
                           { 1, 1, 0 },
                           { 0, 1, 0 }};
    REQUIRE(VerificaVelha(testeVOL1) == 2);
}

TEST_CASE("Testa VitoriaOL2", "[single-file]") {
    int testeVOL2[3][3] = {{ 1, 1, 0 },
                           { 2, 2, 2 },
                           { 0, 1, 0 }};
    REQUIRE(VerificaVelha(testeVOL2) == 2);
}

TEST_CASE("Testa VitoriaOL3", "[single-file]") {
    int testeVOL1[3][3] = {{ 0, 1, 0 },
                           { 1, 1, 0 },
                           { 2, 2, 2 }};
    REQUIRE(VerificaVelha(testeVOL1) == 2);
}

TEST_CASE("Testa VitoriaOC1", "[single-file]") {
    int testeVOC1[3][3] = {{ 2, 0, 0 },
                           { 2, 1, 1 },
                           { 2, 1, 0 }};
    REQUIRE(VerificaVelha(testeVOC1) == 2);
}

TEST_CASE("Testa VitoriaOC2", "[single-file]") {
    int testeVOC1[3][3] = {{ 0, 2, 0 },
                           { 1, 2, 1 },
                           { 1, 2, 0 }};
    REQUIRE(VerificaVelha(testeVOC1) == 2);
}

TEST_CASE("Testa VitoriaOC3", "[single-file]") {
    int testeVOC1[3][3] = {{ 0, 0, 2 },
                           { 1, 1, 2 },
                           { 0, 1, 2 }};
    REQUIRE(VerificaVelha(testeVOC1) == 2);
}

TEST_CASE("Testa VitoriaXD1", "[single-file]") {
    int testeVXD1[3][3] = {{ 1, 0, 0 },
                           { 2, 1, 0 },
                           { 2, 0, 1 }};
    REQUIRE(VerificaVelha(testeVXD1) == 1);
}

TEST_CASE("Testa VitoriaXD2", "[single-file]") {
    int testeVXD2[3][3] = {{ 0, 0, 1 },
                           { 0, 1, 2 },
                           { 1, 0, 2 }};
    REQUIRE(VerificaVelha(testeVXD2) == 1);
}

TEST_CASE("Testa VitoriaOD1", "[single-file]") {
    int testeVOD1[3][3] = {{ 2, 0, 0 },
                           { 1, 2, 0 },
                           { 1, 1, 2 }};
    REQUIRE(VerificaVelha(testeVOD1) == 2);
}

TEST_CASE("Testa VitoriaOD2", "[single-file]") {
    int testeVOD2[3][3] = {{ 0, 0, 2 },
                           { 0, 2, 1 },
                           { 2, 1, 1 }};
    REQUIRE(VerificaVelha(testeVOD2) == 2);
}

TEST_CASE("Testa Empate1", "[single-file]") {
    int testeE1[3][3] = {{ 1, 2, 1 },
                         { 2, 1, 1 },
                         { 2, 1, 2 }};
    REQUIRE(VerificaVelha(testeE1) == 0);
}