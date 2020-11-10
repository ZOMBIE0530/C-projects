#include <stdio.h>
#include <stdlib.h>

/*
int main(){
  //Simple calculator program

  char cOptions;
  int number;

  printf("Hello, would you like to add, subtract, multiply, or divide?");
  printf("\nJust type the first letter from one of the four options\n");
  scanf("%c", &cOptions);

  if(cOptions == 'A')
  {

    printf("Okay please enter a number\n");
    scanf("%d", &number);
    printf("Awesome, your almost there, enter a number so I can add it\n");
    scanf("%d", &number);
    printf("Okay, based on the number you gave me your final product is %d\n", number + number);

  }

  else if(cOptions == 'S')
  {

    printf("Okay give me a number so I can do cool things with it\n");
    scanf("%d", &number);
    printf("Alright you gave me %d, now enter a second number please\n", number);
    scanf("%d", &number);
    printf("Okay with the cool numbers you gave me your final product is %d\n", number - number);

  }
  else if (cOptions == 'M')
  {

    printf("Ready to practice your times tables kid? Enter a number and let's get started\n");
    scanf("%d", &number);
    printf("Okay now, I know you got more than that. Now give me another number please, you sound more like a lazy high schooler now who doesn't want to do his math homework\n");
    scanf("%d", &number);
    printf("Okay at the end of the day I am a computer so I will do whatever any other machine would do and tell you that your final product is %d\n", number * number);

  }
  else if(cOptions == 'D')
  {

    printf("Okay so you think you got what it takes to do multiplication in reverse huh? Put that number in please\n");
    scanf("%d", &number);
    printf("Okay big boy, show me the real stuff! Slap another number for the CPU to process kid!\n");
    scanf("%d", &number);
    printf("Okay you have proven yourself geek. Your final product is %d\n", number / number);

  }
}
*/

int main(){
  //Simple calculator program

  char cOptions;
  int number;
  int secondNumber;

  printf("Hello, would you like to add, subtract, multiply, or divide?");
  printf("\nJust type the first letter from one of the four options\n");
  scanf("%c", &cOptions);

  switch(cOptions)
  {
    case 'A':
      printf("Okay give me a number so I can add it\n");
      scanf("%d", &number);
      printf("Alright give me a second number so I can do magic with it\n");
      scanf("%d", &secondNumber);
      printf("With the numbers you gave me your final product is %d\n", number + secondNumber);
      break;
    case 'S':
      printf("Okay so you like subtraction, type in a number and we will get started\n");
      scanf("%d", &number);
      printf("Alright, now let's start doing some math but I need another number\n");
      scanf("%d", &secondNumber);
      printf("Okay your final product is %d\n", number - secondNumber);
      break;
    case 'M':
      printf("Alright you probably couldn't find your multiplication chart so now it's me again, give me a number then\n");
      scanf("%d", &number);
      printf("Okay I need another number to proceed\n");
      scanf("%d", &secondNumber);
      printf("Your final product is %d\n", number * secondNumber);
      break;
    case 'D':
      printf("Okay so you think you can do multiplication in reverse? give me a number please\n");
      scanf("%d", &number);
      printf("Alright geek, give me another one\n");
      scanf("%d", &secondNumber);
      printf("Well your final product is %d\n", number / secondNumber);
      break;
    defualt:
      printf("Please enter the first letter of one of the four options in capital\n");
      break;
  }
  return 0;
}
