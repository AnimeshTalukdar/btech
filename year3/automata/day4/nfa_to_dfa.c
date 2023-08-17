#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
void printTable(char stateTable[2][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<(sizeof(stateTable[0])/sizeof(stateTable[0][0]));j++){
            printf("%s",stateTable[i][j]);

        }
        printf("\n");
    }
}
int main(){
    int alphabetlen, states;
    alphabetlen = 2;
    states = 3;

    int transitionlen[states][alphabetlen];
    int i,j;
    for (i =0;i<states;i++){
        for (j=0;j<alphabetlen;j++){
            transitionlen[i][j]=1;   
        }
    }
    for (i =0;i<states;i++){
        for (j=0;j<alphabetlen;j++){
           printf("%d",transitionlen[i][j]); 
        }
    }
    char* stateTable[states][alphabetlen];
    for(i=0;i<states;i++){
        for (j=0;j<alphabetlen;j++){
            stateTable[i][j]="q0";
        }
    }
    printTable(stateTable);
}
