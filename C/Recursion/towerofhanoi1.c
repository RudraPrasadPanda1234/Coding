#include<stdio.h>
void towerOfHanoi(int n, char source, char helper, char destination)
{
    if (n==1)
    {
        printf("\n Move disk %d from rod %c to rod %c",n, source, destination);
        return;
    }
    towerOfHanoi(n-1, source, destination, helper);
    printf("\n Move disk %d from rod %c to rod %c", n, source, destination);
    towerOfHanoi(n-1, helper, source , destination);
}
 
int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
