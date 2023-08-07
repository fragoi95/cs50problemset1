#include <stdio.h>
#include <cs50.h>

//

int get_start_size(void);
int get_end_size(int start_size);
int get_num_years(int start_size , int end_size);

int main(void)
{
    int start_size = get_start_size();
    int end_size = get_end_size(start_size);
    int num_years = get_num_years(start_size, end_size);

     printf("Years %i\n", num_years);
}

int get_start_size(void)
{
     int start_size;
    do
    {
         start_size= get_int("Start Size: ");
    }
    while (start_size < 9);
    return start_size;
}

int get_end_size(int start_size)
{
     int end_size;
    do
    {
         end_size= get_int("End Size: ");
    }
    while (end_size < start_size);
    return end_size;
}

int get_num_years(int start_size , int end_size)
{
    int num_years;
    int population;

    population = start_size;
    num_years = 0;
    
    while (population<end_size)
    {
        population = population - (population/4) +(population/3);
        
        num_years ++;
    }

    return num_years;

}