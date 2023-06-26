void printChar(char c){
    if (c == 'X'){   
        printf("| ");
        printf("\033[0;31m"); // Red
        printf("%c", c);
        printf("\033[0m");
        printf(" ");
    }else if (c == 'O')
    {   
        printf("| ");
        printf("\033[0;34m"); // Blue
        printf("%c", c);
        printf("\033[0m");
        printf(" ");
    }else {
        printf("| %c ", c);
    }
}

void printField(char field[7][6]){
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[5][i]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[4][i]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[3][i]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[2][i]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[1][i]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[0][i]);
    }
    printf("|\n");
    printf("-----------------------------\n");
    printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
}