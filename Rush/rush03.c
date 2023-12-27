#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Function to display 'B' and space last
void putbs(int x)
{
    int j = 0;
    ft_putchar('B');
    while (j < x - 2)
    {
        ft_putchar(' ');
        j++;
    }
    ft_putchar('B');
}

// Function to display 'A', 'B', and 'C' in the first and last line
void ft_putabc(int x)
{
    int j = 0;
    ft_putchar('A');
    while (j < x - 2)
    {
        ft_putchar('B');
        j++;
    }
    ft_putchar('C');
}

// Rush will call other functions to write, show 'A', 'B', 'C', and space
void rush(int x, int y)
{
    int i = 0;
    if (x > 0 && y > 0)
    {
        while (i < y)
        {
            if (i == 0 || i == y - 1)
            {
                ft_putabc(x); // Call01
            }
            else
            {
                putbs(x); // Call02
            }
            ft_putchar('\n'); // Return to the next line
            i++;
        }
    }
}

int main()
{
    rush(123, 42);
    return (0);
}
