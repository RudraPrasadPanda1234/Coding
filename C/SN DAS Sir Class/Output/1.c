// #include <stdio.h>
// int main()
// {
//     float a = 1.1;
//     //double b=1.1;
//     if (a == 1.1)
//         printf("Hello"); //How are you
//     else
//         printf("How are you");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float a = 1.1;
//     double b=1.1;
//     if (a == b)
//         printf("Hello");
//     else                         //How are you
//         printf("How are you");
//     return 0;
// }   //Never compare when using float point number with reational operator

// #include <stdio.h>
// int main()
// {
//     float a = 1.0;
//     //double b=1.1;
//     if (a == 1.0)
//         printf("Hello"); //How are you
//     else                                       //Because it is trated as 1 as decimal not as float
//         printf("How are you");
//     return 0;
// }

#include <stdio.h>
int main()
{
    float a = 1.1;
    //double b=1.1;
    if (a == 1.1)
        printf("Hello"); //How are you
        else if(a==1.1f)
        printf("Hello 2");    //here the 1.1f is converter to float so a having float value and 1.1f is float value so retrun true
    else
        printf("How are you");
    return 0;
}