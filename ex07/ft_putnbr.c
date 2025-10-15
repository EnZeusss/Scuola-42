#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-2);

    return 0;
}

void ft_putnbr(int nb)
{

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10){

        ft_putnbr(nb / 10);// Se la cifra è piu di una cifra si divife per 10 per spezzarli
    }
    
    char digit = (nb % 10) + '0'; // Prende il resto della divisione per 10 e lo converte in codice ascii aggiungndolo con 0 (ascii: 48)
    write(1, &digit, 1);
}
