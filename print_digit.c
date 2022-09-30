#include <unistd.h>

void stu_putchar(char c){
    write(1, &c, 1);
}

void stu_print_digit(int nb)
{
    nb = nb + '0';
    stu_putchar(nb);
    stu_putchar('\n');
}



