#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
/*
==========================================
PROJECT: Terminal Assistant
Author: Rakshit
Started: July 2026

Version 1.0
- Shape Calculator
- Rage computer
- Attempt System
- Menu Loop

Version 1.1 (Planned)
- Guess the Number
- Rock Paper Scissors

Version 1.2 (Planned)
- Interactive Story

==========================================
*/

int main(int argc, char const *argv[])
{

  int a, b;
  char choice[100];
  char shape[100];
  float base;
  float height;
  float r;
  float r2;
  float side;
  char c[200];
  char s[100];
  char t[100];
  int question;
  int answer2;
  char YN[100];
  char choice3;
  int shapeAttempts = 0;
  int circleAttempts = 0;
  int squareAttempts = 0;
  int assistanceAttempts = 0;
  int triangleAttempts = 0;

  printf("hello there i suppose u are here to find area of rectangle...well then lets get started\n");

  Sleep(2000);

  printf("what is the length of rectangle:\n");

  scanf("%d", &a);

  Sleep(2000);

  printf("what is the breadth of rectangle: \n");

  scanf("%d", &b);

  printf("area of the required rectangle is:  %d\n", a * b);

  Sleep(3000);

  do

  {

    printf("do u need assistance with something else?? (yes or no)\n");

    scanf("%19s", choice);

    if (strcmp(choice, "yes") == 0 ||
        strcmp(choice, "YES") == 0 ||
        strcmp(choice, "Yes") == 0)

    {
      printf("which shape u need help with??\n");

      Sleep(2000);

      printf(" Circle / Rectangle / Square / Triangle \n");

      scanf("%99s", shape);

      if (strcmp(shape, "circle") == 0 ||
          strcmp(shape, "Circle") == 0 ||
          strcmp(shape, "CIRCLE") == 0)
      {
        printf(" what do u need to find in circle??\n");

        Sleep(2000);

        do
        {
          printf(" You need help with 'area' or 'circumference'?]\n");

          scanf("%99s", c);

          if (strcmp(c, "Circumference") == 0 ||
              strcmp(c, "circumference") == 0 ||
              strcmp(c, "CIRCUMFERENCE") == 0)

          {
            Sleep(2000);

            printf("oh you need circumference of circle??.. tell me the radius of this cricle:\n");

            scanf("%f", &r);

            Sleep(2000);

            printf("circumference of the circle is:  %f\n", 2 * 3.1415 * r);

            Sleep(3000);

            do
            {
              printf("if u want i can tell u the area of the circle as well..do u want help with this?? (Y/N) '[TYPE IN SINGLE LETTER ONLY!!!!]'\n");

              scanf(" %c", &choice3);

              if (choice3 == 'y' ||
                  choice3 == 'Y')

              {
                Sleep(2000);

                system("color 09");

                printf(" well.. the area of the above circle is:  %f\n", 3.1415 * r * r);
              }

              else if (choice3 == 'n' ||
                       choice3 == 'N')

              {
                Sleep(4000);

                printf(" ok then.. ig..ummm..bie \n");

                Sleep(5000);

                printf("Bruhh why u still here??\n");

                Sleep(6000);

                printf(" now u making me mad fr man.. LEAVEEEE\n\n");

                Sleep(3000);

                system("color 0c");

                printf("LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n\n");

                Sleep(2000);

                printf("LEAVEEEEEEE LEAVEEEEEEE LEAVEEEEEEEEE FUCKERRRRRRRRRRRRRRRRRRRRRR\n\n");

                Sleep(1000);

                printf(" I WILL RUIN YOUR LIFEEEE... U LISTEN TO ME..\n\n");

                Sleep(1000);

                printf(" I WILL EAT YOUR SOUL AND FEED IT TO MY DOGS\n\n");

                Sleep(1000);

                printf(" LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE OR I KILL YOU.. \n\n");

                Sleep(1000);

                printf(" SINCERELY LEAVEEEEEEE... please before i lose my temper again// \n\n");

                Sleep(7000);

                system("color 0A");

                printf("still here// well u gave me no choice\n\n");

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

                break;

              }

              else
              {
                Sleep(6000);

                system("color 0C");

                printf(" your typing with your feet or what???\n");

                Sleep(5000);

                printf

                    ("i can type with my feet as well\n\n");

                Sleep(4000);

                printf(" Cn U REED TIS...?????\n\n");

                Sleep(3000);

                printf(" HAO BOUT TIS???\n\n");

                Sleep(3000);

                printf("NOO TELL ME NOW NAHH..COULD U READ THAT..\n" 
                  "U PUNK..\n"
                  " WHAT HAPPENED NOW.. U EXPECT ME TO READ YOUR STUPID SHIT\n\n");

                Sleep(5000);

                printf(" I TELL U MAN.. I WILL GET MAD WORKING FOR THESE ILLETERATE FUCKS.. \n"
                  " EITHER I WILL KILL MYSELF OR KILL YOU..\n\n");

                Sleep(5000);

                printf("MORON\n\n");

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

          scanf("%99s", s);

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

              scanf("%99s", YN);

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

                printf(" now u making me mad fr man.. LEAVEEEE\n\n");

                Sleep(3000);

                system("color 0C");

                printf("LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n\n");

                Sleep(2000);

                printf("LEAVEEEEEEE LEAVEEEEEEE LEAVEEEEEEEEE FUCKERRRRRRRRRRRRRRRRRRRRRR\n\n");

                Sleep(1000);

                printf(" I WILL RUIN YOUR LIFEEEE... U LISTEN TO ME..\n\n");

                Sleep(1000);

                printf(" I WILL EAT YOUR SOUL AND FEED IT TO MY DOGS\n\n");

                Sleep(1000);

                printf(" LEAVEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE OR I KILL YOU.. \n\n");

                Sleep(1000);

                printf(" SINCERELY LEAVEEEEEEE... please before i lose my temper again// \n\n");

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

                break; 

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
          { Sleep(2000); 

            printf(" invalid input. \n\n");

            squareAttempts++ ;

            if (squareAttempts == 2)

           { Sleep(3000);

            printf(" TYPE properly dude.. like comeon man..ik u can do better than this..\n\n"); }

           else if (squareAttempts == 3) 

           { Sleep (4000); 

            printf ("BROOO...like.. ik u can do it.. just keep trying\n\n"); }

            else if (squareAttempts == 4)

            { Sleep(6000); 
            
            printf("no words for you man.. try spelling it out.. just try...\n\n");}

            else if (squareAttempts == 5)


            { Sleep (2000);

              system("color 0C");

              printf("YOUUUU...\n\n");
              
              
              Sleep(7000);

              printf(" YOU KNOW PPL LIKE YOU.. PROMOTES ME TO START SMOKING.. \n\n");

              Sleep(2000);

                printf(" EVERYTHING GOES SIMPLE..\n");

                Sleep(2000);

                printf (" AND THEN..YOUUUUUUUUUUUUUUUUUUUUUUUUUUUUU ARE TRYNA MAKE MY LIFE HARDERRR.....\n\n");


              Sleep(10000); 

              printf(" ARGHHHHHHHHHH..OK LAST CHANCE.. U HEAR ME U WORHTLESS SHIT... LAST CHANCE.. THEN I AM OUT// \n\n");

            }

            else if (squareAttempts == 6)

            { Sleep(6000); 
            
               printf ("ERROR 404:\n");

               Sleep (1500);


                printf ("user's reading skills not found.\n");

                Sleep(5000);

                  printf ("I've shown the options.\n");

                  Sleep (1500);

                   printf ( "I have repeated the options.\n");

                   Sleep (1500);

                    printf ("I've practically begged you to type one of the options.\n\n\n"); 

                    Sleep(4000);

                        printf ("Yet here we are... \n\n");

                        Sleep(5000);

                       printf ("I've reached a very scientific conclusion.\n");

                        Sleep(4000);


                        printf(" problem isn't my code.\n\n");

                        Sleep(6000);

                        printf ("The problem is sitting between the chair and the keyboard.\n\n");

                        Sleep(5000);

                        printf ( "Goodbye. \n"); 

                        break;
                      
                      }

            }

        } while (strcmp(s, "Area") != 0 &&
                 strcmp(s, "AREA") != 0 &&
                 strcmp(s, "area") != 0 &&
                 strcmp(s, "PERIMETER") != 0 &&
                 strcmp(s, "Perimeter") != 0 &&
                 strcmp(s, "perimeter") != 0);
      }
    
    else if (strcmp ( shape , "Triangle") == 0  ||
             strcmp ( shape , "TRIANGLE") == 0  ||
             strcmp ( shape , "triangle") == 0 )
             {
              
              Sleep(4000);
              
              printf (" Ohhhh yeahhh,, you getting naughty aernt u.. u wanna learn about that 3 pointy things...\n");
            
              Sleep(3000); 

              printf("Well here it is..\n\n\n");

              Sleep(2000);
            
              printf( "A triangle is a polygon with:\n"
                           "- 3 sides\n"
                           "- 3 vertices (corners)\n"
                           "- 3 interior angles \n\n\n\n");


                           Sleep(6000);

                           

             printf (" Interesting Facts: \n"
                 "- The sum of all interior angles is 180°. \n"
                 "- A triangle is the smallest polygon. \n"
                 "- Every triangle has exactly 3 sides. \n\n\n\n"); 

                 Sleep (7000);

                   printf (" Types of Triangles (By Sides): \n "
                      "1. Equilateral - All 3 sides are equal. \n"
                      "2. Isosceles - Any 2 sides are equal. \n"
                      "3. Scalene - All sides are different. \n\n\n\n ");

                      Sleep(5000);

                      printf ("Types of Triangles (By Angles): \n"
                       "1. Acute - All angles are less than 90 degree. \n"
                       "2. Right - One angle is exactly 90 degree. \n"
                       "3. Obtuse - One angle is greater than 90 degree.\n\n\n\n");

                       Sleep (7000);

                                 printf (" \n Area = (Base * Height) / 2 \n\n\n"
                                          " \n Perimeter = Side1 + Side2 + Side3 \n\n\n");

                      Sleep(4000); 


                      printf("Now tell me how can i help in traingle? \n"); 

                      Sleep (3000); 

                    do {  printf (" 1. Area \n"
                             " 2. calculating the 3rd angle if.. 2 angles are given [just type 'angle'] \n"); 

                             scanf("%19s" , t);

                      if (strcmp ( t , "Area") == 0 || 
                          strcmp ( t , "AREA") == 0 ||
                          strcmp ( t , "area") == 0 ) 

                          { Sleep (3000); 
                          
                          printf(" Perfect. I will help u with area. \n"); 

                          Sleep (1700); 

                          printf ("Tell me the base of the traingle.\n");

                          scanf ("%f" , &base );

                           Sleep (1700); 

                           printf ("Tell me the height of the traingle.\n");

                           scanf("%f" , &height );

                               Sleep (1700); 

                               printf (" Alr the area of the traingle is : '%f'\n" , 0.5*height*base  );


                                  Sleep (1700); 

                                  printf("next time use the formula I provided you. \n");
                                

                              }


                      else if  (strcmp( t , "Angle") == 0 ||
                                strcmp( t , "ANGLE") == 0 ||
                                strcmp( t , "angle") == 0 ) 

                      { Sleep(5000); 

                        printf("Did u really type 'angle' willingly.. like bro u in your right mind?? \n\n");

                        Sleep(3000); 

                        printf (" like bro u cannot do fucking addition and subtraction.. u fucking gay or what\n\n"); 

                        Sleep(3000);  

                        printf (" you know u managed to piss off EVERY fucking part of my motherboard, just by that single word u typed.\n\n");


                        Sleep(3000); 

                        system("color 0C");

                        printf (" yk what u aint leaving until u do, some BASIC ELEMENTARY LVL PROBLEMS \n\n"); 

                        Sleep(4000); 

                        printf (" CANT BELIEVE I HAVE TO DO THIS....ARGHHH OK.. first problem coming right up\n\n");

                        Sleep(2000); 

                        printf( " Who is the president of india...??\n\n"); 

                        Sleep(3000); 

                        system("color 0A");

                        printf(" OH wait fuck.. that's a history question..\n\n");

                        Sleep (4000); 

                        printf( "you see how anger is tweaking me..\n\n");

                        Sleep(3000);

                        printf ( " Anyways \n\n");

                        Sleep (5000); 

                        system ("color 0C");

                        printf( " whats 13 + 17 \n"); 

                        scanf("%d" , &question); 

                        if ( question == 30 ) 

                        { printf ("very good.. well done..oh my god ,u are a real champ..other Question coming right up\n\n");

                          Sleep(3000); 

                          printf(" whats 235 + 567 \n\n" 
                                 " Take your time on this one..no worries..just get it right\n\n");

                                 scanf ("%d" , &answer2 );
                                 
                                 if ( answer2 == 802 ) 

                              { Sleep (3000); 
                              
                              printf ( " DEMMM U COOOL.. \n" );

                              Sleep(1500);

                               printf ( "UMM OK..\n" );

                               Sleep(1500);

                               printf ( "HMMM..I SEE...\n") ;

                               Sleep(1500);

                               printf ( "You getting good at caculation I SEE..\n" );
                              
                          
                            Sleep(4000);

                            printf (" Ok then.. heres the last question \n\n"); 

                            Sleep (2000); 

                            printf ("whats 39485749 + 129384754 ? \n"
                                     "Answer quickly.." );  

                            Sleep (3000); 

                            printf ("3\n");

                            Sleep(2000);

                            printf("2\n") ; 

                            Sleep(2000);

                            printf("1\n");

                            Sleep(2000);

                          printf("Too sloww...\n\n");

                          Sleep(2000); 

                          printf("I waited..\n\n"); 

                          Sleep(2000);

                          printf("I grew old..\n\n"); 

                          Sleep(2000);

                          printf(" My grandchildren graduated college. \n\n");

                          Sleep(3000); 

                          printf( "Answer faster next time \n\n"); 

                          Sleep(2000);

                          printf( "OFC ONLY IF I LET U TYPE...\n\n") ; 

                          Sleep(2000); 

                          printf("MUHAHAHAHAHAHHAH\n\n");

                          Sleep(2000); 

                          printf("MUHAHAHAHAHAHHAHAHAHAHAHH\n\n");

                          Sleep(2000); 

                          printf("MUHAHAHAHAHAHHAHAHAHAHAHHAHAHAHAAHHAHAHA\n\n");

                          Sleep(2000); 

                          printf("GOODBYE SUCKKER...\n\n");


                          break; } 

                          else { Sleep (5000); 
                          
                          printf ("Yeah u retarded for real.. its alr..\n\n"); 

                          Sleep (3000); 


                          printf("if everyone was winning.. then who will be losing..?? \n\n");

                          Sleep(2000); 

                          printf("YOU...You will be losing ofc..\n\n");

                          Sleep(2000); 

                          printf("WELLL.. bruhhhhh GOODBYE\n\n");

                          break; 
                  
                          }

                      }

                       else { Sleep (4000); 
                    
                    
                    printf("BRUHH U DUMB AF...MY MAN..U GOT THIS WRONG???\n\n"); 

                    Sleep(2000); 

                          printf("Seriously...HOWWWW??\n\n");

                          Sleep(2000); 

                          printf("YK WHAT I DONT EVEN WANNA KNOW.. LIKE U COULD HAVE USED YOUR FINGERS FOR SUCH A HARD CALCULATION MAN\n\n");

                           Sleep(4000); 

                          printf("WHEN U WERE BORN.. DOC MUST HAVE SAID..\n\n");

                          Sleep(2000); 

                          printf("THIS IS THE UGLIEST AND DUMBEST MOTHERFUCKER ALIVE.. LIKE DEM \n\n");

                          Sleep (2000); 

                          printf("YOU KNOW WHAT MAN.. GOODBYE\n\n");

                          break; 
                        
                        
                        }

            }

            else { Sleep(5000); 
            
                    printf("invalid..\n\n"); 

                    triangleAttempts++ ;

                    if ( triangleAttempts == 2 )

                    { Sleep (4000); 
                    
                     printf(" its alr man.. dont stress it out..\n\n");}

                     else if (triangleAttempts == 3) 

                     { Sleep (4000); 
                    
                     printf(" Slowwly.. try typing Slowwly..\n\n");} 

                     else if (triangleAttempts == 4) 

                     { Sleep (4000); 

                      system ("color 0C");
                    
                     printf(" OK BROOOO.... TF U TYPING.. IF U SEE U TYPING RUBBISH AGAIN.. I AINT HELPING\n\n");} 

                     else if (triangleAttempts == 5)

                     { Sleep (4000); 
                    
                     printf(" DONE I AM DONE...\n\n"); 

                     Sleep (6000); 

                     printf( "FUCKKKER\n\n" ); 

                     break; 



             } 
            
            }
          
          }  while ( strcmp( t , "Area") != 0 && 
                     strcmp( t , "AREA") != 0 &&
                     strcmp( t , "area") != 0 && 
                     strcmp( t , "Angle") != 0 &&
                     strcmp( t , "ANGLE") != 0 &&
                     strcmp( t , "angle") != 0 ) ;   

                    
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

          printf("inhaless........EXHALESSSSSSSSSSSS\n\n");

          Sleep(4000);

          printf("inhaless........EXHALESSSSSSSSSSSS\n\n");

          Sleep(4000);

          printf("INHALESSSSSSSSSSSS........EXHALESSSSSSSSSSSS\n\n");

          Sleep(4000);

          printf("alright.. lets try that again shall we??..."); }

          else if (assistanceAttempts == 5)

          { Sleep(7000); 

            printf ("U tryna be funny asshole??\n\n");

            Sleep(6000);
              
             printf ("I am not gonna entertain u more.\n\n");

             Sleep(4000); 

             printf("This was your last chance , u insufferable fuck\n\n");

             break; }
    

  

  }

} while (strcmp(choice, "Yes") != 0 &&
           strcmp(choice, "yes") != 0 &&
           strcmp(choice, "YES") != 0 &&
           strcmp(choice, "no") != 0 &&
           strcmp(choice, "No") != 0 &&
           strcmp(choice, "NO") != 0);

  return 0;
}
