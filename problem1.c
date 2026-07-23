    #include<stdio.h>
    #include<windows.h>
    #include<stdlib.h>



    int main ()
    
    {  for ( int i=1 ; i<=50 ; i += 2)
    

   { printf(" %d" , i); } 

        return 0;
    }



int main(int argc, char const *argv[])
{ for ( int i= 100 ; i>=2 ; i-=2)

 {
    
    printf("%d\n" , i); 

}
   
    return 0;
} 

int number;

int main(int argc, char const *argv[])
{ 
    Sleep(3000);

    printf("Tell me a number u want a table of\n\n");

    scanf("%d" , &number);

    for (int i = 1 ; i <= 10; i++)
    {
        printf(" %d\n" , i*number);
    }

    return 0;
}

#include<stdio.h>
#include<windows.h>


int number1;
int number2;

int main(int argc, char const *argv[])
{
    printf(" Enter starting number\n\n"); 

    scanf("%d" , &number1); 

    Sleep(3000); 

    printf(" Enter ending number\n\n"); 

    scanf("%d", &number2);

    Sleep(3000); 

    for  ( int i = number1; i <=number2 ; i++)
    {
        printf("%d\n",  i); 
    }
    



    return 0;
}

#include <stdio.h>
#include <windows.h>

int number1;
int number2;

int main(int argc, char const *argv[])
{
    printf("Enter your number\n\n");

    scanf("%d", &number1);

    Sleep(3000);

    printf("Enter your second number\n\n");

    scanf("%d", &number2);

    if (number1 > number2)
    {

        for (int i = number1; i >= number2; i--)

        {
            printf("%d\n", i);
        } 
    }
        else if (number1 < number2)

        {
            for (int i = number1; i <= number2; i++)

            {
                printf("%d\n", i);
            }
        }
    

    return 0;
}

#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{

    for (int i = 1; i <= 10; i++)

    {
        printf("%d\n", i * i * i);
    }

    return 0;
}

#include <stdio.h>
#include <windows.h>

int number;

int main(int argc, char const *argv[])
{

    printf("Enter your number\n");

    scanf("%d", &number);

    for (int i = 1; i <= number; i++)

    {

        Sleep(3000);

        printf("%d\n", i); 
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    int input;
    int number;

    printf(" Enter your number \n");

    scanf("%d", &input);

    while (input > 0)
    {
        count++;

        input = input / 10;
    }

    printf("%d", count);

    return 0;
}



