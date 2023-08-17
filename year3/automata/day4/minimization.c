#include<stdio.h>
#include<stdlib.h>
int** initTable(int states,int values){
    int ** stateTable = (int**) malloc(sizeof(int*)*states);
    int i,j;
    for (i = 0 ; i<states;i++){
        stateTable[i] = (int*) malloc(sizeof(int)*values);
        for(j = 0; j<values;j++){
            stateTable[i][j] = -1;
        }
    }
    return stateTable;

}
void printTable(int** stateTable,int states, int values){
    int i,j;
    for (i = 0;i<states;i++){
        for(j=0;j<values;j++){
            printf("%d ",stateTable[i][j]);
        }
        printf("\n");
    }
}
int** minimizeTable(int ** stateTable,int states,int values,int* finalStates,int noFinalStates, int* miniStates, int** miniFinalStates, int* noMiniFinalStates){
    (*miniStates)++;
    return (int**)malloc(sizeof(int));
}
int main(){
    int states = 6;
    int values = 2;
    int noFinalStates = 3;
    int ** stateTable = initTable(states,values);
    printTable(stateTable,states,values);
    stateTable[0][0] =1;
    stateTable[0][1] =2;
    stateTable[1][0] =3;
    stateTable[1][1] =4;
    stateTable[2][0] =3;
    stateTable[2][1] =5;
    stateTable[3][0] =3;
    stateTable[3][1] =1;
    stateTable[4][0] =4;
    stateTable[4][1] =5;
    stateTable[5][0] =4;
    stateTable[5][1] =6;
    int* finalStates = (int*) malloc(sizeof(int)*noFinalStates);
    finalStates[0]=3;
    finalStates[1]=4;
    finalStates[2]=5;
    int miniStates = 0;
    int* miniFinalStates;
    int noMiniFinalStates;
    int** miniTable = minimizeTable(stateTable,states,values,finalStates,noFinalStates,&miniStates,&miniFinalStates,&noMiniFinalStates);
    printf("%d",miniStates);
    printf("done");
    printTable(stateTable,states,values);
}
