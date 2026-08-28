#include <stdio.h>
#include "math.h"
int main(void){
    printf("Add:%X\n",math_Add(0x0FFF1111,0x0FFF1111));
    printf("Sub:%d\n",math_Sub(0x0FFF1111,0x0FFF1111));
    printf("Mul:%llX\n",(unsigned long long int)math_Mul(0x0FFF1111,0x0FFF1111));
    printf("Div:%f\n",math_Div(100,8));
    return 0;
}