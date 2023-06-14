#include<stdio.h>
int main()
{
    static int i=1;
    printf("%d \t",i++);
    if(i==6)
    {
        return 0;
    }
    main();
}