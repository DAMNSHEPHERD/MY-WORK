#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

  int a, b;
  char choice[10];
  char shape[100];
  float r;
  float r2;
  float side;
  char c[20];
  char s[100];
  char question[100];
  char answer2[100];
  char YN[10];
  char choice3;
  int shapeAttempts = 0;
  int circleAttempts = 0;
  int squareAttempts = 0;
  int assistanceAttempts = 0;

  printf("hello there i suppose u are here to find area of rectangle...well then lets get started\n");

  Sleep(2000);

  printf("what is the length of rectangle:\n");

  scanf("%d", &a);

  Sleep(2000);

  printf("what is the breadth of rectangle: \n");

  scanf("%d", &b);

  printf("area of the required rectangle is:%d\n", a * b);

  Sleep(3000);

  do
  {

    printf("do u need assistance with something else?? (yes or no)\n");

    scanf("%s", choice);

    if (strcmp(choice, "yes") == 0 ||
        strcmp(choice, "YES") == 0 ||
        strcmp(choice, "Yes") == 0)

    {
      printf("which shape u need help with??\n");

      Sleep(2000);

      printf(" Circle / Rectangle / Square / Triangle \n");

      scanf("%s", shape);

      if (strcmp(shape, "circle") == 0 ||
          strcmp(shape, "Circle") == 0 ||
          strcmp(shape, "CIRCLE") == 0)
      {
        printf(" what do u need to find in circle??\n");

        Sleep(2000);

        do
        {
          printf(" You need help with 'area' or 'circumference'?]\n");

          scanf("%s", c);

          if (strcmp(c, "Circumference") == 0 ||
              strcmp(c, "circumference") == 0 ||
              strcmp(c, "CIRCUMFERENCE") == 0)

          {
            Sleep(2000);

            printf("oh you need circumference of circle??.. tell me the radius of this cricle:\n");

            scanf("%f", &r);

            Sleep(2000);

            printf("circumference of the circle is:%f\n", 2 * 3.1415 * r);

            do
            {
              printf("if u want i can tell u the area of the circle as well..do u want help with this?? (Y/N) '[TYPE IN SINGLE LETTER ONLY!!!!]'\n");

              scanf(" %c", &choice3);

              if (choice3 == 'y' ||
                  choice3 == 'Y')

              {
                Sleep(2000);

                system("color 09");

                printf(" well.. the area of the above circle is:%f\n", 3.1415 * r * r);
              }

              else if (choice3 == 'n' ||
                       choice3 == 'N')

              {
                Sleep(4000);

                printf(" ok then.. ig..ummm..bie \n");

                Sleep(5000);

                printf("Bruhh why u still here??\n");

                Sleep(6000);

                printf(" now u making me mad fr man.. LEAVEEEE\n");

                Sleep(3000);

                system("color 0c");

                printf("LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");

                Sleep(2000);

                printf("LEAVEEEEEEE LEAVEEEEEEE LEAVEEEEEEEEE FUCKERRRRRRRRRRRRRRRRRRRRRR\n");

                Sleep(1000);

                printf(" I WILL RUIN YOUR LIFEEEE... U LISTEN TO ME..\n");

                Sleep(1000);

                printf(" I WILL EAT YOUR SOUL AND FEED IT TO MY DOGS\n");

                Sleep(1000);

                printf(" LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE OR I KILL YOU.. \n");

                Sleep(1000);

                printf(" SINCERELY LEAVEEEEEEE... please before i lose my temper again// \n");

                Sleep(7000);

                system("color 0A");

                printf("still here// well u gave me no choice\n");

                Sleep(4000);

                system("color 0C");

                printf("self destruct in T minus 5 seconds.\n");

                Sleep(2000);

                printf("5\n");

                Sleep(2000);

                printf("4\n");

                Sleep(2000);

                printf("3\n");

                Sleep(2000);

                printf("2\n");

                Sleep(2000);

                printf("1\n");

                Sleep(2000);

                system("color 0C");

                printf("BOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOMMMMMMMMMMMMMMMMMMMMMMM...KHRKRKRKRKRKRKKRKRKRKRKR............SUUUUUUUUUUUUUUUUUUUUUUUUUUUKEKRKKRKRKRKRRK\n");

                Sleep(6000);

                printf("just write 'end' bro... like end it all.. i will not work for u anymore\n");
              }

              else
              {
                Sleep(6000);

                system("color 0C");

                printf(" your typing with your feet or what???\n");

                Sleep(5000);

                printf

                    ("i can type with my feet as well\n");

                Sleep(4000);

                printf(" Cn U REED TIS...?????\n");

                Sleep(3000);

                printf(" HAO BOUT TIS???\n");

                Sleep(3000);

                printf("NOO TELL ME NOW NAHH..COULD U READ THAT.. U PUNK.. WHAT HAPPENED NOW.. U EXPECT ME TO READ YOUR STUPID SHIT\n");

                Sleep(5000);

                printf(" I TELL U MAN.. I WILL GET MAD WORKING FOR THESE ILLETERATE FUCKS.. EITHER I WILL KILL MYSELF OR KILL YOU..\n");

                Sleep(5000);

                printf("MORON\n");

                Sleep(4000);

                printf(" U DESERVE THE WORST MY GUY.. A SINGLE LETTER U CANNOT WRITE.. LIKE THE U STUPID FUCK..\n");
              }

            } while (choice3 != 'y' &&
                     choice3 != 'Y' &&
                     choice3 != 'N' &&
                     choice3 != 'n');
          }

          else if (strcmp(c, "area") == 0 ||
                   strcmp(c, "AREA") == 0 ||
                   strcmp(c, "Area") == 0)

          {
            printf(" OH you wanna area of the circle.. can u tell me radius of this circle: \n");

            scanf("%f", &r2);

            Sleep(3000);

            printf(" The area of the circle is:%f \n ", 3.1415 * r2 * r2);
          }

          else
          {
            Sleep(3000);

            printf(" invalid input..just ans dude..u always make me angry dk why..just ans properly..\n");
          }
        } while (strcmp(c, "area") != 0 &&
                 strcmp(c, "AREA") != 0 &&
                 strcmp(c, "Area") != 0 &&
                 strcmp(c, "Circumference") != 0 &&
                 strcmp(c, "circumference") != 0 &&
                 strcmp(c, "CIRCUMFERENCE") != 0);
      }

      else if (strcmp(shape, "Square") == 0 ||
               strcmp(shape, "square") == 0 ||
               strcmp(shape, "SQUARE") == 0)

      {
        printf(" what do u need to find in square??\n");

        Sleep(2000);

        do
        {
          printf(" You need help with 'area' or 'perimeter'?]\n");

          scanf("%s", s);

          if (strcmp(s, "Perimeter") == 0 ||
              strcmp(s, "perimeter") == 0 ||
              strcmp(s, "PERIMETER") == 0)

          {
            printf(" OH perimeter.. interesting.. tell me the side of square..i will get the perimeter for u.\n");

            scanf(" %f", &side);

            Sleep(2000);

            printf(" well it was pretty easy.. your ans is %f... formula i used was 4a 'where a is side of square'\n", 4 * side);

            Sleep(3000);

            do
            {
              printf(" need help with area tooo?? .... just say 'yes or no'\n");

              scanf("%s", YN);

              if (strcmp(YN, "YES") == 0 ||
                  strcmp(YN, "yes") == 0 ||
                  strcmp(YN, "Yes") == 0)

              {
                Sleep(2000);

                printf(" Perfect. heres the area of the above square:%f \n", side * side);
              }

              else if (strcmp(YN, "NO") == 0 ||
                       strcmp(YN, "no") == 0 ||
                       strcmp(YN, "No") == 0)

              {
                Sleep(4000);

                printf(" ok then.. ig.. \n");

                Sleep(5000);

                printf("Bruhh why u still here??\n");

                Sleep(6000);

                printf(" now u making me mad fr man.. LEAVEEEE\n");

                Sleep(3000);

                system("color 0c");

                printf("LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");

                Sleep(2000);

                printf("LEAVEEEEEEE LEAVEEEEEEE LEAVEEEEEEEEE FUCKERRRRRRRRRRRRRRRRRRRRRR\n");

                Sleep(1000);

                printf(" I WILL RUIN YOUR LIFEEEE... U LISTEN TO ME..\n");

                Sleep(1000);

                printf(" I WILL EAT YOUR SOUL AND FEED IT TO MY DOGS\n");

                Sleep(1000);

                printf(" LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE OR I KILL YOU.. \n");

                Sleep(1000);

                printf(" SINCERELY LEAVEEEEEEE... please before i lose my temper again// \n");

                Sleep(7000);

                system("color 0A");

                printf("still here// well u gave me no choice\n");

                Sleep(4000);

                system("color 0C");

                printf("self destruct in T minus 5 seconds.\n");

                Sleep(2000);

                printf("5\n");

                Sleep(2000);

                printf("4\n");

                Sleep(2000);

                printf("3\n");

                Sleep(2000);

                printf("2\n");

                Sleep(2000);

                printf("1\n");

                Sleep(2000);

                system("color 0C");

                printf("BOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOMMMMMMMMMMMMMMMMMMMMMMM...KHRKRKRKRKRKRKKRKRKRKRKR............SUUUUUUUUUUUUUUUUUUUUUUUUUUUKEKRKKRKRKRKRRK\n");
              }

              else

              {
                Sleep(3000);

                printf(" invalid input..just ans dude..u always make me angry dk why..just ans properly..\n");
              }

            } while (strcmp(YN, "yes") != 0 &&
                     strcmp(YN, "YES") != 0 &&
                     strcmp(YN, "Yes") != 0 &&
                     strcmp(YN, "no") != 0 &&
                     strcmp(YN, "NO") != 0 &&
                     strcmp(YN, "No") != 0);
          }

          else if (strcmp(s, "area") == 0 ||
                   strcmp(s, "Area") == 0 ||
                   strcmp(s, "AREA") == 0)

          {
            printf(" area of square... hmm its just basic calculation..tell me the side of square i will tell u the area..\n");

            scanf(" %f", &side);

            Sleep(2000);

            printf("Area of square:%f , i used a basic formula side x side thats it..\n", side * side);
          }

          else
          {
            printf(" invalid input. \n");

            Sleep(3000);

            printf(" TYPE properly dude.. like comeon man..ik u can do better than this..\n");
          }

        } while (strcmp(s, "Area") != 0 &&
                 strcmp(s, "AREA") != 0 &&
                 strcmp(s, "area") != 0 &&
                 strcmp(s, "PERIMETER") != 0 &&
                 strcmp(s, "Perimeter") != 0 &&
                 strcmp(s, "perimeter") != 0);
      }
    }

    else if (strcmp(choice, "NO") == 0 ||
             strcmp(choice, "no") == 0 ||
             strcmp(choice, "No") == 0)

    {
      Sleep(3000);

      printf(" well then alr i will take my leave.. but think again u really dont need some help??\n");
    }

    else
    {

      Sleep(3000); 

      printf("invalid input.\n");

      assistanceAttempts++ ;

      if (assistanceAttempts == 2)

      { Sleep (3000); 


        printf("just ans dude..like..\n");
      
      }

     else if (assistanceAttempts == 3)

      {

        Sleep(3000);

        system("color 0C");
        
        printf( " BRUHH WHAT ARE U DOING MAN.. JUST TYPE FOR GOD SAKE..\n"); }

        else if (assistanceAttempts == 4)

        { Sleep(3000);

          printf( " THISSS GUYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY... OH MY FUCKING GOD... LIKE...ARGHHHHHHHHHHH\n");


          Sleep(5000);

          printf("I NEED TO CALM DOWN.. OK LONG BREATHS.....\n");

          Sleep(4000);

          printf("inhaless........EXHALESSSSSSSSSSSS\n");

          Sleep(4000);

          printf("inhaless........EXHALESSSSSSSSSSSS\n");

          Sleep(4000);

          printf("INHALESSSSSSSSSSSS........EXHALESSSSSSSSSSSS\n");

          Sleep(4000);

          printf("alright.. lets try that again shall we??..."); }

          else if (assistanceAttempts == 5)

          { Sleep(7000); 

            printf ("U tryna be funny asshole??\n");

            Sleep(6000);
              
             printf ("I am not gonna entertain u more.\n");

             Sleep(4000); 

             printf("This was your last chance , u insufferable fuck\n");

             break;
    }


  }

  } while (strcmp(choice, "Yes") != 0 &&
           strcmp(choice, "yes") != 0 &&
           strcmp(choice, "YES") != 0 &&
           strcmp(choice, "no") != 0 &&
           strcmp(choice, "No") != 0 &&
           strcmp(choice, "NO") != 0);

  return 0;
}
