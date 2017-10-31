#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void){

    float change = get_float("How much change is owed: ");

    int newChange = round (change * 100);
    int coin = 0;

    while (newChange >= 25){
        newChange = newChange - 25;
        coin++;
    }

    while (newChange >= 10){
        newChange = newChange - 10;
        coin++;
    }

    while (newChange >= 5){
        newChange = newChange - 5;
        coin++;
    }

    while (newChange >= 1){
        newChange = newChange - 1;
        coin++;
    }

    printf("Coins: %i \n",coin);
}