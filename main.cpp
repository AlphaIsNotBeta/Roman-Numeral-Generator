#include "mainHeader.h"

string ROMAN_I_GENERATOR(int number,int numberToSubtract){
    string NUMBER_OF_I = "";
    for (size_t i = 0; i < number - numberToSubtract; i++){
        NUMBER_OF_I.append("I");
    }
    return NUMBER_OF_I;
}

int main(int, char**){
    system("cls");
    int RAND_NUMBER = 0;
    ofstream Numeral("C:/Users/Jun/Documents/Code/C-C++/C++/ROMAN NUMERAL GENERATOR/Roman-Numeral.txt");
    for (size_t i = 0; i < 50; i++){
        srand(SEED);
        RAND_NUMBER = rand() % 20 + 1;
        if (RAND_NUMBER <= 3){
            Numeral << ROMAN_I_GENERATOR(RAND_NUMBER, NULL);
        }
        else if (RAND_NUMBER == 4){
            Numeral << "IV";
        }
        else if (RAND_NUMBER >= 5 && RAND_NUMBER <= 8){
            Numeral << "V" << ROMAN_I_GENERATOR(RAND_NUMBER, 5);
        }
        else if (RAND_NUMBER == 9){
            Numeral << "IX";
        }
        else if (RAND_NUMBER >= 11 && RAND_NUMBER <= 13){
            Numeral << "X" << ROMAN_I_GENERATOR(RAND_NUMBER, 10);
        }
        else if (RAND_NUMBER == 14){
            Numeral << "XIV";
        }
        else if (RAND_NUMBER >= 15 && RAND_NUMBER <= 18){
            Numeral << "XV" << ROMAN_I_GENERATOR(RAND_NUMBER, 15);
        }
        else if (RAND_NUMBER == 19){
            Numeral << "XIX";
        }
        else{
            Numeral << "XX";
        }
        Numeral << " ";
    }
    Numeral.close();
    
    return 0;
}
