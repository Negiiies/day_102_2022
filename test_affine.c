#include <stdio.h>
int stu_affine_i(int a, int b, int x);
float stu_affine_f(float a, float b, float x);
int main (void)
{
    int result_i;
    float result_f;
    result_i = stu_affine_i(8, 5, 4);
    printf("%d\n", result_i);
    result_f = stu_affine_f(8.4, 5.2, 4.4);
    printf("%f\n", result_f);
}
