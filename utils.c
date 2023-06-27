void setTurn(char field[7][6], int input, char symbol){
    if(field[input-1][0] == ' '){
        field[input-1][0] = symbol;
        return;
    }else {
        int i = 0;
        while (field[input-1][i] != ' '){
            i++;
        }
        field[input-1][i] = symbol;
    }
}

int checkInput(char field[7][6], int input){
    // check if input is valid
    if(input < 1 || input > 7){
        printf("\033[0;31mInvalid input\033[0m\n");
        return 1;
    }

    // check if column is full
    if(field[input-1][5] != ' '){
        printf("\033[0;31mColumn is full\033[0m\n");
        return 1;
    }

    return 0;
}

int checkFourInputs(char one, char two, char three, char four){
    if(one == two && one == three && one == four && one != ' '){
        return 1;
    }
    return 0;
}

void announcePlayer(char symbol){
    if(symbol == 'X'){
        printf("\033[0;32mPlayer 1 Won\033[0m\n");
    }else if(symbol == 'O'){
        printf("\033[0;32mPlayer 2 Won\033[0m\n");
    }
}

int checkHorizontal(char field[7][6]){
    for (size_t i = 0; i < 4; i++)
    {   
        for (size_t j = 0; j < 6; j++)
        {
            if(checkFourInputs(field[i][j], field[i+1][j], field[i+2][j], field[i+3][j]) == 1){
                announcePlayer(field[i][j]);
                return 1;
            }
        }
        
    }
    return 0;
}

int checkVertical(char field[7][6]){
    for (size_t i = 0; i < 7; i++)
    {   
        for (size_t j = 0; j < 3; j++)
        {
            if(checkFourInputs(field[i][j], field[i][j+1], field[i][j+2], field[i][j+3]) == 1){
                announcePlayer(field[i][j]);
                return 1;
            }
        }
    }
    return 0;
}

int checkDiagonal(char field[7][6]){
    for (size_t i = 0; i < 4; i++)
    {   
        for (size_t j = 0; j < 3; j++)
        {
            if(checkFourInputs(field[i][j], field[i+1][j+1], field[i+2][j+2], field[i+3][j+3]) == 1){
                
                announcePlayer(field[i][j]);
                return 1;
            }
            if(checkFourInputs(field[i][j+3], field[i+1][j+2], field[i+2][j+1], field[i+3][j]) == 1){
                
                announcePlayer(field[i][j+3]);
                return 1;
            }
        }
    }
    return 0;
}

int checkForWinning(char field[7][6]){
    if(checkHorizontal(field) == 1 || checkVertical(field) == 1 || checkDiagonal(field) == 1){
        return 1;
    }
    return 0;
}