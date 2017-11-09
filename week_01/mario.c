#include <cs50.h>
#include <stdio.h>

int mario(int height);

int main (void){
    int height;

    do {
        height = get_int("Get height of mario's pyramid: ");
    }

    while( height < 0 || height > 23);

    mario(height);
}

int mario(int height){
    int hash = 1;
    int space = 0;
    space = height - hash;
    for(int i = 0; i < height; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }

        for (int j = 0; j < hash; j++){
            printf("#");
        }

        printf("  ");

        for(int j = 0; j < hash; j++){
            printf("#");
        }

        printf("\n");
        hash++;
        space--;
    }
    return 0;
}