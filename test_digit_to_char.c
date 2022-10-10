#include <stdio.h>
char stu_digit_to_char(int nb);
int main(void)
{
    char tmp;
    tmp = stu_digit_to_char(5);
    if (tmp == '6') {
        printf("%d\n", tmp);
        puts("OK");
    } else {
        printf("%d\n", tmp);
        puts("not OK");
    }
}
