#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

/*	int ConversãoBinDec(char bin[]){
		
		for(i = 0; bin > 0; i++)
		{	dec = dec + pow(2, i) * (bin % 10);
			bin = bin / 10;
		}
		return dec;
	};
*/
int main()
{
	int Mem[tamanho][5];				
	
	//int i=0;
	int RB[3];							//registrador B
	int RC[3];							//registrador C
	int RA[3];							//registrador A
	//int dec;							//
	char ins[16];						//vetor da instrução obtido pela matriz mem
	//string inst;						//
	bool T11= false;					//Variavel tipo 11 (Load) = falso
	bool T12= false;					//Variavel tipo 12 (Store) = falso
	bool T2= false;						//Variavel tipo 2 (R) = falso
	bool T3= false;						//Variavel para desvio = falso
	bool T4= false;						//Variavel para desvio = falso
	bool T5= false;						//Variavel para desvio = falso
	bool T6= false;						//Variavel para desvio = falso
	bool T7= false;						//Variavel para desvio = falso


/*
	FILE *arq;

    char c, letra = '\n';

    int tamanho;

    arq = fopen("teste.txt","r");

        //Lendo o arquivo 1 por 1
        while(fread (&c, sizeof(char), 1, arq)) {
            if(c == letra) {
                tamanho++;
            }
        } 
	
	char p[4];
	
    //fclose(arq);
	
	for(int i=0; i<tamanho; i++){
		for(int j=0; j<4; j++){
			p= gets(arq);
			Mem[i][j]= p[j];
		}
	}

*/

	//ID
	//for (int i=0; i<16; i++){
	//	ins[i]= inst;
	//}
	
	
	if((ins[0]==0) && (ins[1]==1){ // ou do tipo 1 ou do tipo 7
		if((ins[5]==1) && (ins[6]==0) && (ins[7]==1) && (ins[8]==0) && (ins[9]==0)){ //comparando o OP para saber se é do tipo &
			T11= true; // é do tipo 7, load
			int i=2;
			int j=0;
				while(i<5 && j<3){ 
					RC[j] = ins[i]; //preencher o vetor do RC
					i++;
					j++;
				}
			int i=10;
			int j=0;
				while(i<12 && j<3){
					RA[j] = ins[i];	//preencher o vetor do RC
					i++;
					j++;
				}	
		}
		
		if((ins[5]==1) && (ins[6]==0) && (ins[7]==1) && (ins[8]==1) && (ins[9]==0)){ //comparando o OP para saber se é do tipo &
			T12= true; // é do tipo 7, store
			int i=13;
			int j=0;
				while(i<16 && j<3){ 
					RB[j] = ins[i]; //preencher o vetor do RB
					i++;
					j++;
				}
			int i=10;
			int j=0;
				while(i<12 && j<3){
					RA[j] = ins[i];	//preencher o vetor do RC
					i++;
					j++;
				}	
		}
		else{
				T2=true; //A instrução é do tipo 2 (R)
				// Fazer as verificações da ALU 
			}
		if((ins[5]==0) && (ins[6]==0) && (ins[7]==1) && (ins[8]==1) && (ins[9]==0)){
			//Tipo I, and
		}
				
	}			
			
			if((ins[0]==1) && (ins[1]==0){ //compara o primeiro e o segundo bit
				T3=true;				   //a variável é T3
			}
			if((ins[0]==1) && (ins[1]==1){ //compara o primeiro e o segundo bit 
				T4=true;				   //a variavel é T4
			}
			if((ins[0]==0) && (ins[1]==0){ //ou é do tipo 4, ou do tipo 5, ou 6
				if((ins[2]==0) && (ins[3]==0)){ //comparando o OP para saber se é do tipo &
				//Jump False T4
				
				}
				if((ins[2]==0) && (ins[3]==1)){ //comparando o OP para saber se é do tipo &
				//Jump True T4
				}
				if((ins[2]==1) && (ins[3]==0)){ //comparando o OP para saber se é do tipo &
				//T5 Jump Incondicional
				}
				else{
					// T6
				}
			}
		
	
	return 0;
}
/*
 *condições do tipo 4
 * */
 

