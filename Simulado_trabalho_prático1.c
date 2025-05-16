#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// mais facil de resolver como recursão quadrupla

int main(){
char** board; 
char* word;
int boardSize, boardColSize;

 exist(board, boardSize, boardColSize, word);

return 1;
}

int exist(char** board, int boardSize, int* boardColSize, char* word) {

    int c;
    int wordSize;
    //recebe as letras para gerar a matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            scanf("", board[i][j]);
        }
    }
    
    
    //recebe a palavra procurada
    gets(word);

    //define o tamanho da palavra procurada para limitar a recursão
    wordSize = strlen(word);

    //recursão para encontrar a palavra
    // o contador c só é agregado quando o strcmp returna que encontrou duas letras iguais
    do {
    for(int i = 0; i < boardSize; i++){
        for(int j = 0; j < boardColSize; j++){

            for(int c = 0; c < wordSize) {

            if(strcmp(board[i][j], word[c])){
                
            } else 
            c++;
            }

        }
    }
    } while (c != "\n");

    // a função retorna verdadeiro caso o contador c chegue até o final da string ou seja no \n
    if (c == "\n"){
        return 1;
    } else {
        return 0;
    }
}