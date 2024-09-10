#include<stdio.h>
#include<stdbool.h>
void Warshall(int graph[][4],int v){
    for(int a=0;a<v;a++){
        for(int b=0;b<v;b++){
            for(int c=0;c<v;c++){
                if(graph[a][c]+graph[c][b]<graph[a][b]){
                    graph[a][b]=graph[a][c]+graph[c][b];
                }
            }
        }
    }
    for(int i=0;i<v;i++){
        for (int j=0;j<v;j++)
        printf("%d->%d :%d\n",i,j,graph[i][j]);
    }
}
int main(){
    int v=4;
    int graph[][4]={{0,2,5,3},
                    {2,0,1,1},
                    {2,0,}}   
}