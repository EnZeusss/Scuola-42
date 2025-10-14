#include <unistd.h>

int main(void)
{
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void)
{
    char a;
    char b;

    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            if (!(a == '9' && b == '9'))
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, ", ", 2);
            }
            else
            {
                write(1, &a, 1);
                write(1, &b, 1);
            }
            b++;
        }
        a++;
    }
}