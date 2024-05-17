#include <stdio.h>
int mat[3][3];
void makegraph(){
for(int i = 0;i>3;i++)
{
  for(int j = 0;j<3;j++){
      mat[i][j]=0;
  }
}
}  
void addedgedirectgraph(int src , int des){
    mat[src][des] = 1;
}
void addedgeundirected(int src , int des){
    mat[src][des] =1 ;
    mat[des][src] =1 ;
}
void printgraph(){
    for(int i = 0; i<3 ; i ++)
    {
        for(int j = 0 ; j<3 ; j++){
            if(mat[i][j] == 1){
                printf("%d -> %d\n",i,j);
            }
        }
        }
    }
void main(){
    makegraph();
    addedgedirectgraph(0,1);
    addedgedirectgraph(0,0);
    addedgedirectgraph(2,0);
    addedgedirectgraph(2,1);
    addedgedirectgraph(1,0);
    addedgedirectgraph(2,2);
    printgraph();
}
