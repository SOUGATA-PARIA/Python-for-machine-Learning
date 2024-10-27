// Morse code generator using basic c programming language

/*
The used morse codes are noted bellow

A == .-
B == -...
C == -.-.
D == -..
E == .
F == ..-.
G == --.
H == ....
I == ..
J == .---
K == -.-
L == .-..
M == --
N == -.
O == ---
P == .--.
Q == --.-
R == .-.
S == ...
T == -
U == ..-
V == ...-
W == .--
X == -..-
Y == -.--
Z == --..

For the sake of simplicity we are not considering  space as ***

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main ()
{

    char morse[100];
    printf("Please enter the statement : ");
    gets(morse);
    int i = 0;

    //now let us try to count the number of characters which will be used to convert 
    // the characters into their morse codes....

    int size = 0;

    while (morse[i] != '\0'){
        size++;
        i++;
    }

    //now convering the characters into the uppercase letters
    
    for(int j = 0; morse[j] != '\0'; j++){
        //checking the character is in lower case 
        if(islower(morse[j])){
            morse[j] = toupper(morse[j]);
        }
    }

    printf("The provided input is :: ");
    puts(morse);
    printf("The morse code the given statement is : ");

    //now writing code to convert the statement into the morse code

    for(int j = 0; morse[j] != '\0'; j++){
        if(morse[j] == 'A'){
            printf(".- ");
        }
        else if(morse[j] == 'B'){
            printf("-... ");
        }
        else if(morse[j] == 'C'){
            printf("-.-. ");
        }
        else if(morse[j] == 'D'){
            printf("-.. ");
        }
        else if(morse[j] == 'E'){
            printf(". ");
        }
        else if(morse[j] == 'F'){
            printf("..-. ");
        }
        else if(morse[j] == 'G'){
            printf("--. ");
        }
        else if(morse[j] == 'H'){
            printf(".... ");
        }
        else if(morse[j] == 'I'){
            printf(".. ");
        }
        else if(morse[j] == 'J'){
            printf(".--- ");
        }
        else if(morse[j] == 'K'){
            printf("-.- ");
        }
        else if(morse[j] == 'L'){
            printf(".-.. ");
        }
        else if(morse[j] == 'M'){
            printf("-- ");
        }
        else if(morse[j] == 'N'){
            printf("-. ");
        }
        else if(morse[j] == 'O'){
            printf("--- ");
        }
        else if(morse[j] == 'P'){
            printf(".--. ");
        }
        else if(morse[j] == 'Q'){
            printf("--.- ");
        }
        else if(morse[j] == 'R'){
            printf(".-. ");
        }
        else if(morse[j] == 'S'){
            printf("... ");
        }
        else if(morse[j] == 'T'){
            printf("- ");
        }
        else if(morse[j] == 'U'){
            printf("..- ");
        }
        else if(morse[j] == 'V'){
            printf("...- ");
        }
        else if(morse[j] == 'W'){
            printf(".-- ");
        }
        else if(morse[j] == 'X'){
            printf("-..- ");}
        else if(morse[j] == 'Y')
            printf("-.-- ");
        else if(morse[j] == 'Z')
            printf("--.. ");
        else if(morse[j] == ' '){
            printf(" / ");
        }
    }
    return 0;
}