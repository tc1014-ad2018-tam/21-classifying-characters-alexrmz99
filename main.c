/*  This program will classify the characters given in a string by the user in:
 *      - Alphabeths:
            -Vowels
            -Consonants
        - Digits.
        - Special characters.
        - Spaces.
 *
 *
 *  Alejandro Ramírez Michel
 *  18 de octubre de 2018
 *
 * */

#include <stdio.h>
#include <string.h>

int main() {
    //primero defino varibles
    char string[100];
    int i = 0;
    int alphabet = 0;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    int specialc = 0;

    //aqui le pido al usuario el string
    printf("Write anything you want: ");
    fgets(string, sizeof(string), stdin);
    printf("\n");

    //establezco condiciones para empezar a contar
    for(i=0; string[i]!='\0'; i++) {
        //condición para que se considere alphabet
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            alphabet++;
            //condición dentro de alphabet para contar vocales
            if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' ||
                string[i] == 'a'
                || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
                vowels++;
                //las que no son vocales son consonantes
            } else consonants++;
            //condición para que se considere digit
        } else if (string[i] >= '0' && string[i] <= '9') {
            digits++;
            //condición para que sea espacio
        } else if (string[i] == ' ') {
            spaces++;
            //lo demás se considera como un special character
        } else specialc++;

    }

    //ahora imprimo resultados
    printf("You wrote: %s\n", string);
    printf("There are %i letters, from which them: \n", alphabet);
    printf("\t%i of them are vowels.\n", vowels);
    printf("\t%i of them are consonants.\n", consonants);
    printf("There are %i digits. \n", digits);
    printf("There are %i spaces. \n", spaces);
    printf("There are %i special characters (Tab is counted as one).\n", specialc);


    return 0;

}