//Creating a number guessing game from 9 to 100 using c programming
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guessed;
int no_of_guess=0;
srand(time(0));
int randomnumber=rand()%100 +1;
do {
printf("Please guess your number\t");
scanf("%d",&guessed);
if (guessed>randomnumber)
{
printf("You guessed higher, lower it\n");
}
else if(guessed<randomnumber){
    printf("You guessed lower, increase it\n");
}
else
{
    goto yep;
}
no_of_guess++;

}while (guessed!=randomnumber);
yep:
printf("Congrats!!! You guessed the number in %d times.",no_of_guess +1);
return 0;
}

