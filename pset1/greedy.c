#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Declaratio of variables
    float change;
    int coins = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    // Prompting condition
    do
    {
        printf("O hai! How much is owed? \n");
        change = GetFloat();
            
    }
    while(change < 0);
    // Conversion from dollar to cent
    change = change * 100;
    // Counter, rounding and loop
    for (int money = round(change); money > 0; coins++)
    {
        // Checking quarter
        if (money - quarter >= 0)
        {
            money = money - quarter;
        }
        // Checking dime
    else if (money - dime >= 0)
        {
            money = money - dime;
            
        }
        // Checking nickel
        else if (money - nickel >= 0)
        {
            money = money - nickel;
            
        }
        // Checking penny
        else if (money - penny >= 0)
        {
            money = money - penny;
            
        }
        
    }
    printf("%i\n", coins);
}