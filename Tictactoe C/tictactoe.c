#include <stdio.h>

int main(){
    int winner = 0, count = 0;
    int pos[9], index, sign ,player ,flag , i, k, j;

    for(i=0; i<9; i++){
        pos[i] = ' ';
    }
    while(count < 9 && winner !=1){
        flag=0;
        printf("\n");
        printf("%c|%c|%c,\n", pos[0], pos[1], pos[2]);
    }

}