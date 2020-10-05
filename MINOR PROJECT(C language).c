/* C program- Code for Rock,Paper,Scissor Game
   Author: Ameya Chudji.
   Date: 5/10/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=0;
    int PlayerScore =0;
    int ComputerScore =0;
    int choice;
    int computer;
    srand(time(NULL));
    printf("WELCOME TO THE GAME OF ROCK,PAPER,SCISSORS!!!\n\n");
    printf("GAME INSTRUCTIONS\n------------------------------------------------------\n Select any one of the three. To do so:\n Press 1 for Rock\n Press 2 for Paper\n Press 3 for Scissors \n Press 4 to QUIT\n");


    for(i=0;i<5;i++)
    {
        printf("\n******************************************************\n");
        printf("\nEnter your selection: ");
        scanf("%d",&choice);

        if(choice>=1 && choice<4)
        {
        computer=rand()%3+1;
        printf("\nYou have selected: %d, The computer has selected: %d\n",choice,computer);

            if(choice==1 && computer==1)
            {
                printf("DRAW\n\n");
            }
            if(choice==1 && computer==2)
            {
                printf("COMPUTER WON\n\n");
                ComputerScore=ComputerScore +1;
            }
            if(choice==1 && computer==3)
            {
                printf("PLAYER WON\n\n");
                PlayerScore=PlayerScore +1;
            }


            if(choice==2 && computer==2)
            {
                printf("DRAW\n\n");
            }
            if(choice==2 && computer==3)
            {
                printf("COMPUTER WON\n\n");
                ComputerScore=ComputerScore +1;
            }
            if(choice==2 && computer==1)
            {
                printf("PLAYER WON\n\n");
                PlayerScore=PlayerScore +1;
            }

            if(choice==3 && computer==3)
            {
                printf("DRAW\n\n");
            }
            if(choice==3 && computer==1)
            {
                printf("COMPUTER WON\n\n");
                ComputerScore=ComputerScore +1;
            }
            if(choice==3 && computer==2)
            {
                printf("PLAYER WON\n\n");
                PlayerScore=PlayerScore +1;
            }

        }
        else if(choice==4)
        {
            printf(" =======================================\n");
            printf("|| SO YOU HAVE QUIT.OK.SEE YA LATER!!!!||\n");
            printf(" =======================================");
            break;
        }
        else
        {
            printf("INVALID ENTRY");
        }


}
    printf("\n================================================================\n\n");
if(ComputerScore > PlayerScore )
                {
                printf("-------------------------------");
                printf("\n-----Computer WINS: %d to %d-----\n",ComputerScore,PlayerScore);
                printf("-------------------------------");
                }
            else if(ComputerScore < PlayerScore )
                {
                printf("-----------------------------");
                printf("\n-----Player WINS: %d to %d-----\n",PlayerScore,ComputerScore);
                printf("-----------------------------");
                }
           else if(ComputerScore = PlayerScore )
            {
                printf("------------------------");
                printf("\n------IT IS A DRAW------\n\n");
                printf("------------------------");
            }
    return 0;

}

