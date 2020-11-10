#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Hello world!\n\n");

    int i = 10;
    int w = 12;

    if(i <= 10){
        printf("This is the first statement that is true!\n\n");

        if(w = 12){
            printf("Hey, I am a nested if statement!\n\n");

            if(i == 10 && w == 12){
                printf("Hey, this if statement contains two conditions -_@\n\n");

                if(i == 10 || w == 8){
                    printf("This statement is using the || operator to compare two conditions.\n\n");
                }
            }
        }
    }else{
        printf("Hey, I am the other end of the stick.\n\n");
    }
    return 0;
}
