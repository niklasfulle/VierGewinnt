void printChar(char c){
    if (c == 'X'){   
        printf("| ");
        printf("\033[0;31m%c\033[0m", c); // red
        printf(" ");
    }else if (c == 'O')
    {   
        printf("| ");
        printf("\033[0;34m%c\033[0m", c); // blue
        printf(" ");
    }else {
        printf("| %c ", c);
    }
}

void printField(char field[7][6]){
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[i][5]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[i][4]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[i][3]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[i][2]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[i][1]);
    }
    printf("|\n");
    for (size_t i = 0; i < 7; i++)
    {
        printChar(field[i][0]);
    }
    printf("|\n");
    printf("-----------------------------\n");
    printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
}

void printWinningField(char field[7][6]){
    printField(field);
}