#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    if( argc == 2){
        int key = atoi (argv[1]);
        string plainText = get_string("Plain Text: ");
        int stringLength = strlen(plainText);
        printf("Cipher Text: ");

        for ( int i = 0; i< stringLength; i++){
            if (plainText[i] >='a' && plainText[i] <= 'z'){
                printf("%c", ((((plainText[i] + key) - 97) % 26) + 97));
            } else if (plainText[i] >='A' && plainText[i] <= 'Z'){
                printf("%c", ((((plainText[i] + key) - 65) % 26) + 65));
            } else {
                printf("%c",plainText[i]);
            }
        }
        printf("\n");
    }

    else {
        printf ( "Trying Again !\n");
    }
}