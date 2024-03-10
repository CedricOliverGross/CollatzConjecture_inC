#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    unsigned long long numberBegin = 1;
    int one = 1;
    unsigned long long numberCurrent = numberBegin;
    unsigned long long numberEnd = pow(2, 64) - 1;



    while (numberBegin != numberEnd)    // Runs until the number where the counting starts hits the defined limit 
    {
        printf("%20llu", numberCurrent); //Output of Current Number
        printf("%50llu\n", numberBegin);

        if (numberCurrent % 2 != 0) // if number is odd: multiple *3 and add 1, if not divide by 2
        {
            numberCurrent = 3 * numberCurrent + 1;
        }else{
            numberCurrent = numberCurrent / 2;
        }

        if (one == numberCurrent)
        {
            printf("%2llu\n", numberCurrent); //Output of Current Number
            numberBegin = numberBegin + 1;
            numberCurrent = numberBegin;

        }
        
    }  
    return 0;
}