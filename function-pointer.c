#include <stdio.h>
void fun(int i){
    printf("%d\n",i);
}
int main()
{
    
    void (*funptr)(int) = &fun;
    (*funptr)(10);

    return 0;
}
