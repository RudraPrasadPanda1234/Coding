#include<stdio.h>
// Function definition
void solution(int f[4][4],int nc,int oc,int i,int j){
    // Boundary check
    if(i<0||i>=4||j<0||j>=4)
        return;

    // If the current cell does not have the old color, return
    if(f[i][j]!=oc)
        return;

    // If the current cell already has the new color, return
    if(f[i][j]==nc)
        return;

    // Change the color
    f[i][j]=nc;

    // Recursive calls to adjacent cells
    solution(f,nc,oc,i+1,j);
    solution(f,nc,oc,i-1,j);
    solution(f,nc,oc,i,j+1);
    solution(f,nc,oc,i,j-1);

}
int main()
{
    // Initialize the flood array
    int flood [4][4]={
        {1,1,2,2},
        {1,2,2,3},
        {1,2,3,3},
        {1,2,3,2}
        };
    int newcolor=5;
    int i=0,j=0;
    int oldcolor=flood[i][j];

    // Call the solution function
    solution(flood,newcolor,oldcolor,i,j);

    // Print the updated flood array
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",flood[i][j]);
        }
    printf("\n");
    }
    return 0;
}