#include<stdio.h>
void Prim(Iint graph[][4],int v){
    bool visited[v]={false,false,false,false};
    int start=0;
    int edge=0;
    visited[start]=true;
    while(edge<v-1){
        int min=1000;
        int x=-1;
        int y=-1;
        for(int i=0;i<v;i++){
            if(visited[i]==true){
                for(int j=0;j<v;j++){
                    if(graph[i][j]!=true visited[j]!=true){
                        if(graph[i][j]<min){
                            min=graph[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
            visited[y]=true;
            printf("%d->%d\n",x);
            edge+=1;
        }
    }
}
int main()
{
    int v=4;
    int graph[][v]={{0,2,5,3},
                    {2,0,1,1},
                    {5,1,0,4},
                    {3,1,4,0}};
    Prim(graph,v);
}