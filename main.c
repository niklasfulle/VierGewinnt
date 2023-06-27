// Autor: Niklas Fulle

#include <stdio.h>
#include "utils.c"
#include "print.c"

struct player
{
    char symbol;
    int stones;
};

int turn = 0;
struct player player1 = {'X', 21};
struct player player2 = {'O', 21};
char field[7][6] = {{' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' '}};

int main(int argc, char** argv){
    while (checkForWinning(field) != 1){
        if (turn == 0){
            printField(field);
            printf("Player 1: ");
            char input[2];
            scanf("%s", input);
            // check if input is valid
            int number = (input[0] - '0');
            if(checkInput(field, number) == 1){
                continue;
            }
            setTurn(field, number, player1.symbol);
            player1.stones--;
            turn = 1;
            if(checkForWinning(field) == 1){
                break;
            }
            
        }else if (turn == 1){
            printField(field);
            printf("Player 2: ");
            char input[2];
            scanf("%s", input);
            // check if input is valid
            int number = input[0] - '0';
            if(checkInput(field, number) == 1){
                continue;
            }
            setTurn(field, number, player2.symbol);
            player2.stones--;
            turn = 0;
            if(checkForWinning(field) == 1){
                break;
            }
            
        }
    }
    
    printWinningField(field);
    return 0;
}