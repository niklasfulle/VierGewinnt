// Autor: Niklas Fulle

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.c"
#include "print.c"

struct player
{
    char symbol;
    int stones;
};

char field[7][6] = {{' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' '}};

struct player player1 = {'X', 21};
struct player player2 = {'O', 21};

int main(int argc, char** argv){
    printField(field);
    return 0;
}