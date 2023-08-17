#include<stdio.h>
#include<stdlib.h>
void printStateTable(int *** stateTable,int ** noOfStateConversions,int states,int values){
    int i,j,k;
    for(i=0;i<states;i++){
        for(j=0;j<values;j++){
            for(k=0;k<noOfStateConversions[i][j];k++){
                printf("q(%d) ",stateTable[i][j][k]);
            }
            printf("\t");
        }
        printf("\n");
    }
}










int main(){
    int states = 3;
    int values = 2;
    int *** stateTable = (int***) malloc (sizeof(int**)*states);
    int i,j;
    for (i =0;i<states;i++){
        stateTable[i] = (int**)malloc(sizeof(int*)*values);
        for(j = 0;j<values; j++){
            stateTable[i][j] = (int*) malloc(sizeof(int));
            stateTable[i][j][0] = -1;
        }
    }
    int** noOfStateConversions = (int**)malloc(sizeof(int*)*states);
    for (i = 0;i<states;i++){
        noOfStateConversions[i] = (int*) malloc(sizeof(int)*values);
        for(j =0;j<values;j++){
            noOfStateConversions[i][j] = 1;
        }
    }
    stateTable[1][1]=(int*){1,1};
    noOfStateConversions[1][1]=2;
    printStateTable(stateTable,noOfStateConversions,states,values);
}
