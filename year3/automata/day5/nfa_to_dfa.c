#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


char* state(int n){
    if(n==0) return "phi";
    else if(n==1) return "q0";
    else if(n==2) return "q1";
    else if(n==3) return "{q0,q1}";
    else if(n==4) return "q2";
    else if(n==5) return "{q0,q2}";
    else if(n==6) return "{q1,q2}";
    else if(n==7) return "{q0,q1,q2}";
    else return "shi";
}



void display(int *arr, int n, int m){
    int i,j;
    for( i = 0;i<n;i++){
        printf("%s\t",state(pow(2,i)));
        for(j =0;j<m;j++){
            printf("%s\t",state(*((arr+i*n) + j)));
         }
         printf("\n");
    }
}

int isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

int main(){
    

    // Making an NFA
    // Table has 3 states and 2 variable
    // calculating states as a power of 2. 
    // q0 = 2^0 = 1
    // q1 = 2^1 = 2
    // q2 = 2^2 = 4
    // q0q1 = 2^0 + 2^1 = 3
    // q0q2 = 2^0 + 2^2 = 5
    // q0q1q2 = 2^0 + 2^1 + 2^2 = 7
    // phi = 0
    
    int n = 3;   // number of state in NFA
    int m = 2;   // number of alphabates
    int NFA[n][m];


    // define the connection of NFA
    NFA[0][0] = 1;
    NFA[0][1] = 3;
    NFA[1][0] = 4;
    NFA[1][1] = 4;
    NFA[2][0] = 0;
    NFA[2][1] = 0;

    int i,j,k,p;
    // display the NFA 
    printf("\n\n===== NFA =====\n");
    printf("STATE\t0\t1\n");
    for( i= 0;i<n;i++){
        printf("%s\t",state(pow(2,i)));
        for( j =0;j<m;j++){
            printf("%s\t",state(NFA[i][j]));
        }
        printf("\n");
    }

    int l = pow(2,n); // number of states in DFA
    int visited[l]; // to keep track of visited states
    for( i =0;i<l;i++) visited[i] = 0;
    int DFA[l][m];    // DFA table
    // initialize DFA table with 0
    for( i =0;i<l;i++) 
        for( j =0;j<m;j++) 
            DFA[i][j] = 0;
    // copy the first row of NFA to DFA
    for( i =0;i<m;i++) DFA[1][i] = NFA[0][i];
    visited[1] = 1;   // mark the first state as visited


    // for each state in DFA
    for( i =0;i<l;i++){
        // for each alphabate
        for( j =0;j<m;j++){
            // if the state is not visited
            if(visited[DFA[i][j]]==0 && DFA[i][j]){
                
                visited[DFA[i][j]] = 1; // mark the state as visited
                // for each state in NFA
                for( k =0;k<n;k++){
                    // if the state is present in the current state of DFA
                    if(DFA[i][j] & (int)pow(2,k)){
                        int currSatate = DFA[i][j];
                        for(  p =0;p<m;p++){
                            // add the next state of NFA to the current state of DFA
                            DFA[currSatate][p] = DFA[currSatate][p] | NFA[k][p];
                        }
                    }
                }
            }
        }
    }
    
    // DFA table
    printf("\n\n===== DFA =====\n");
    printf("STATE\t\t0\t\t1\n");
    for( i= 0;i<l;i++){
        if(visited[i]==0) continue; 
        printf("%s\t\t",state(i));
        for( j =0;j<m;j++){
            printf("%s\t\t",state(DFA[i][j]));
        }
        printf("\n");
    }


    return 0;
}
