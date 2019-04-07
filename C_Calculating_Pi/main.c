#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int        i = 0;
double     dPi4 = 1.0;
double     *pointer;
char       string [80];
int        start = 0;




void welcome(void);
void calculation(void);

int main()
{
    pointer        =  &dPi4;
    welcome();
    calculation();
    system("PAUSE");
    return 0;
}

void welcome (void)
{
    printf("#############################\n");
    printf("#   C_Calculating_Pi v1.1   #\n");
    printf("#############################\n\n");
    printf("This algorithm approximates the circle number Pi and calculates it 1 Million times!\n\n");
    printf("After 1 Million iterations, Pi is calculated for 5 digits exactly.\n\n");
    printf("Press 1 to see the magic happen :D \n");
    scanf("%d", &start);
}

void calculation(void)
{
    for (i = 0; i <= 1e6; i++)
    {
        dPi4 = dPi4 - 1.0/(3+i*4) + 1.0/(5+i*4);
        sprintf(string, "Pi = %0.20f", dPi4 * 4);
        puts(string);
        //printf("Pi = %f\n\n", *pointer*4);
    }
}
