#include <stdio.h>

void function_add_numbers(int,int,int);

int main(){
    function_add_numbers(31,06,26);
    function_add_numbers(1,2,3);
    int valueA = 10, valueB = 20, valueC =30;
    function_add_numbers(valueA,valueB,valueC);
    return 0;
}
//This is function definition
void function_add_numbers(int a, int b, int c){
    int sum;
    sum = a+b+c;
    printf("Summary is :%d And Variable address is:%p\n",sum,(void *)&sum);
}