#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>


int Game; 

int main(int argc, char const *argv[])
{
  void Welcome();

  { printf("\n\n"); 

    printf("Hello there.. Welcome to game hub. \n\n");

    Sleep(2000);

    printf("Its the finest Gamehub you will ever find.\n\n"); 

    Sleep(2000); }


    printf("Now , What game would u like to play today?? \n\n"); 

    Sleep(2000); 

     void menu();

    printf(  
        
             "========================================\n"
                         "             GAME HUB v1.0\n"
             "========================================\n\n\n"

              "1. Snake\n"
              "2. Tic Tac Toe\n"
              "3. Blackjack\n"
              "4. Russian Roulette\n"
              "5. Hangman\n"
              "6. Nerd Mode\n\n"

              "0. Exit \n\n"

             "=========================================\n\n" );


           printf("Choose the number corresponding to the game u wanna play\n\n"); 

           scanf("%d" , &Game); 


           if ( Game == 6)

           { Sleep(3000); 
        
            printf("\n\nDont worry nerd.. i have just the right thing for you.\n\n" );

            Sleep(1500); 

            printf("he will bully you just enough for u to come back running to me....hehehe \n\n"); 

            Sleep(2000); 


           }



    Sleep(3000); 



    
    return 0;
}
