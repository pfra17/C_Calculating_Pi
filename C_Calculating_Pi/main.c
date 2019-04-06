#include <stdio.h>
#include <stdlib.h>

unsigned int    i = 0;
double          c = 0;
double          dPi4 = 1.0;
double          *pointer;




void welcome(void);
void calculation(void);

int main()
{
    pointer        =  &dPi4;
    welcome();
    calculation();
    return 0;
}

void welcome (void)
{
    printf("##########################\n");
    printf("#### C_Calculating_Pi ####\n");
    printf("##########################\n");
}

void calculation(void)
{
    for (i = 0; i <= 100000; i++)
    {
        dPi4 = dPi4 - 1.0/(3+i*4) + 1.0/(5+i*4);
        //dPi4 = dPi4 * 4;
        printf("Pi = %f\n\n", *pointer*4);
    }
    for (c = 0; c <= 1e8; c++)
    {

    }
}
