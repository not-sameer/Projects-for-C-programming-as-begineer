#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h> //This header file contains sleep()
int main()
{
    int m;
    printf("Enter your call for rock as 1, paper as 2, and scissors as 3: ");
    scanf("%d",&m);
if (m < 1 || m > 3) {
        printf("Invalid input! Please choose 1, 2, or 3.\n");
        return 0;
    }
    int n;
srand(time(0));
n=rand()% (3)+1;
sleep(2); //for delaying the program for 2 sec
if (n==1)
{
    printf("I will go with \"ROCK\"\n");
}
else if (n==2)

    {
    printf("I will go with \"PAPER\"\n");
}
else
{
    printf("I will go with \"SCISSORS\"\n");

}
sleep(1);
 if (n==m)
 {
    printf("It's a tie\n");
 }
 else if ((n==1 && m==3)||(n==3 && m==2) || (n==2&& m==1))
 {
    
printf("Hurry, I won!!!!!!!!!!!"); 
 }
 else
 {
    printf("Shit, You won.....");
 }
printf("It was fun playing with you. See you again!!");

    return 0;

}



