#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h> //This header file contains sleep()
int main()
{
    char m;
    printf("Enter your call for rock as 1, paper as 2, and scissors as 3: ");
    scanf("%d",&m);

    int n;
srand(time(0));
n=rand()% (3)+1;
sleep(1.5); //for delaying the program for 1.5 sec
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
 else if ((n==1 && m==3)||(n==2 && m==3)||(n==3 && m==2))
 {
    
printf("Hurry, I won!!!!!!!!!!!"); 
 }
 else
 {
    printf("Shit, You won.....");
 }


    return 0;
}