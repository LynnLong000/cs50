#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("work out Minutes daily: \n");
    int minutes = get_int();
    int consumption = minutes * 12 ;
    printf("water consumption should be %i ounces \n",consumption);
}