// Write a C program to remove epsilon move in a NFA . example given in the class. Report the string accepted by the NFA through your program.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
char* stateNames[] = {
    "phi", "q0", "q1", "{q0,q1}", "q2", "{q0,q2}", "{q1,q2}", "{q0,q1,q2}",
    "q3", "{q0,q3}", "{q1,q3}", "{q0,q1,q3}", "{q2,q3}", "{q0,q2,q3}", "{q1,q2,q3}", "{q0,q1,q2,q3}",
    "q4", "{q0,q4}", "{q1,q4}", "{q0,q1,q4}", "{q2,q4}", "{q0,q2,q4}", "{q1,q2,q4}", "{q0,q1,q2,q4}",
    "{q3,q4}", "{q0,q3,q4}", "{q1,q3,q4}", "{q0,q1,q3,q4}", "{q2,q3,q4}", "{q0,q2,q3,q4}", "{q1,q2,q3,q4}", "{q0,q1,q2,q3,q4}",
    "q5", "{q0,q5}", "{q1,q5}", "{q0,q1,q5}", "{q2,q5}", "{q0,q2,q5}", "{q1,q2,q5}", "{q0,q1,q2,q5}",
    "{q3,q5}", "{q0,q3,q5}", "{q1,q3,q5}", "{q0,q1,q3,q5}", "{q2,q3,q5}", "{q0,q2,q3,q5}", "{q1,q2,q3,q5}", "{q0,q1,q2,q3,q5}"
};
char* state(int n){
    return stateNames[n];
}


int main(){
    int i,j,k;
    int n=6; // number of states
    int m=3; // number of alphabets
    int nfa[n][m]; // nfa table

    // consider 2 as epsilon
    // initialize nfa table
    // -1 is used to denote no transition
    nfa[0][0] = 0;
    nfa[0][1] = pow(2,1);
    nfa[0][2] = pow(2,2);
    nfa[1][0] = 0;
    nfa[1][1] = pow(2,0);
    nfa[1][2] = 0;
    nfa[2][0] = pow(2,3);
    nfa[2][1] = 0;
    nfa[2][2] = pow(2,4);
    nfa[3][0] = pow(2,2);
    nfa[3][1] = 0;
    nfa[3][2] = 0;
    nfa[4][0] = 0;
    nfa[4][1] = pow(2,5);
    nfa[4][2] = 0;
    nfa[5][0] = 0;
    nfa[5][1] = 0;
    nfa[5][2] = 0;

    // display nfa table
    printf("NFA table\n");
    printf("State\t0\t1\tepsilon\n");
    for(i=0;i<n;i++){
        printf("q%d\t",i);
        for(j=0;j<m;j++){
            if(nfa[i][j]==0) printf("--\t");
            else printf("%s\t",state(nfa[i][j]));
        }
        printf("\n");
    }

    // remove epsilon form behind
    for(i=n-1;i>=0;i--){
        for(j=0;j<n;j++){
            if(nfa[j][2]==pow(2,i)){
                for(k=0;k<m;k++){
                    if(nfa[i][k]!=0) nfa[j][k] |= nfa[i][k];
                }
            }
        }
    }

    // display nfa table
    printf("NFA table after removing epsilon\n");
    printf("State\t0\t1\n");
    for(i=0;i<n;i++){
        printf("q%d\t",i);
        for(j=0;j<2;j++){
            if(nfa[i][j]==0) printf("--\t");
            else printf("%s\t",state(nfa[i][j]));
        }
        printf("\n");
    }

return 0;

}

