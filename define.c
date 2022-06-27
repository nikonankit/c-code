#include <stdio.h>
#define ank 123456
#define merge(a,b) a##b   //token parsing operator
#define get(a) #a
#define PRINT(i,limit){\
        while(i<limit){\
        printf("%d\n",i);\
        ++i;\
        }\
        }
        
int main()
{
    printf("%d\n",merge(10,12));
    printf("%s\n",get(ankit));
    int i=0;
    PRINT(i,3);
    printf("%d\n",ank);

    return 0;
}
