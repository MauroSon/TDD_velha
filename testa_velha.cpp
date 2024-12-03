
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 1, 0, 2 }, 
	                      { 1, 0, 2 },
						  { 1, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );


} 
 
