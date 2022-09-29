#include <stdio.h>
int stu_clamp(int l, int h, int n);
int main(void){
    int res;
    res=stu_clamp(18, 54, 10);
    printf("%d\n",res);
}
