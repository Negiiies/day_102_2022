/*
 * E89 Pedagogical & Technical Lab
 * project:     2
 * created on:  2022-09-27 - 15:39 +0200
 * 1st author:  dylan.le - dylan.le
 * description: Exo 2
 */


#include <unistd.h>

void stu_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    stu_putchar('b');
    stu_putchar('\n');
    return(0); 
}
