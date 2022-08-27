#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,ans,tot;

   printf("\t Welcome to the Quiz Game \n\n");
   printf("> Press 7 to start the Game\n");
   printf("> Press 0 to quit the Game\n");
   scanf("%d",&i);

   if(i==7){
    printf("\n1) What was Meta Platforms Inc formerly known as?\n");
    printf("\t1)Google\n");
    printf("\t2)Facebook\n");
    printf("\t3)Microsoft\n");
    printf("Enter your answer :");
    scanf("%d",&ans);
    if(ans==2){
        tot=tot+1;
    }
    printf("\n");

    printf("2)How many time zones are there in Russia?\n");
    printf("\t1)9\n");
    printf("\t2)10\n");
    printf("\t3)11\n");
    printf("Enter your answer :");
    scanf("%d",&ans);
    if(ans==3){
        tot=tot+1;
    }
    printf("\n");

    printf("3)When was Netflix founded? \n");
    printf("\t1)1997\n");
    printf("\t2)1999\n");
    printf("\t3)2000\n");
    printf("Enter your answer :");
    scanf("%d",&ans);
    if(ans==1){
        tot=tot+1;
    }
    printf("\n");
    printf("Quiz is finished\n");
    printf("Congratulations you got %d marks\n\n",tot);
   }else if(i == 0){
    printf("the game has ended\n");
   }else{
    printf("invalid\n");
   }
}
