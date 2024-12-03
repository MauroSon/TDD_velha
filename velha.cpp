/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{
	int qnt_x = 0, qnt_o = 0;

	//Mapeia a velha e seus valores

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (velha[i][j] == 2)
				qnt_o++;
			if (velha[i][j] == 1)
				qnt_x++;
		}
	}

	//Avalia se o jogo é impossível

	if (qnt_x < qnt_o || qnt_x-1 > qnt_o)
		return -2; // Retorna -2, que caracteriza jogo impossível

	// Avalia vitórias
	for (int i=0; i<3; i++){
		// fixa as colunas e avalia as linhas
		if ((velha[i][0]==1 && velha[i][1]==1 && velha[i][2]==1)|| (velha[0][i]==1 && velha[1][i]==1 && velha[2][i]==1)){
			if (qnt_o >= qnt_x) // vitória de X, é valido para menos O que X
				return -2;
			return 1;
		}
	}
	return 0; /*!< retorna zero para teste */ 
}


