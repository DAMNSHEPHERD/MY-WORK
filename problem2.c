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
