// Copyright © 2024 Mauro Silva.
/**
 * \file testa_velha.cpp
 */

#include "../TDD_velha/velha.hpp"

#define CATCH_CONFIG_MAIN
#include "../TDD_velha/catch.hpp"
TEST_CASE("Testa velha", "[single-file]") {
    int teste1[3][3] = {{ 1, 1, 2 },
                        { 0, 2, 1 },
                        { 2, 0, 0 }};
    REQUIRE(VerificaVelha(teste1) == 2);
}

