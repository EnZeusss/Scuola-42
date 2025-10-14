#include <unistd.h>

int main(void)
{
    ft_putchar('H');
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
