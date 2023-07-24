#include <stdio.h>
#include <cs50.h>

//
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

// Main Program
int main(void)
{
    int cents = get_cents();
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    int nickles = calculate_nickels(cents);
    cents = cents - nickles * 5;
    int pennies = calculate_pennies(cents);
    
    printf("%i\n", quarters + dimes + nickles + pennies);
}

int get_cents(void)
{
     int cents;
    do
    {
         cents= get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}