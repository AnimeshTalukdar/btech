#include<stdio.h>
#include<stdlib.h>
void fun(int idx,int n,int state,int* state_changes,int* arr,int values){
    if(idx == n && ( state == 3)){
        printf("Reached Accepted");
        return;
    }
    if (idx == n){
        printf("Reached Not accepted");
        return ;
    }
    // printf("%d",state);
    int cur = arr[idx];
    if (cur == -1){
        printf("Not accepted");
        return;
    }
    fun(idx+1,n,state_changes[state*values+cur],state_changes,arr,values);

}
int main(){
    int n; 
    printf("Enter the length\n");
    scanf("%d",&n);
    printf("Enter the String\n");

    int i =0;
    char* s = (char*)malloc(sizeof(char)*n);
    scanf("%s",s);
    int* arr = (int*) malloc(sizeof(int)*n);

    for (i =0;i<n;i++){
        //scanf("%d",&arr[i]);
        arr[i]=s[i]-'0';
        //printf("%d",arr[i]);
    }
    printf("\n");
    int states = 5;
    int values = 2;
    int* state_changes =(int*)malloc(sizeof(int)*states*values);
    for(i=0;i<states*values;i++){
        state_changes[i]=-1;
    }
    state_changes[0+values*0]=1;
    state_changes[1+values*0]=1;
    state_changes[0+values*1]=2;
    state_changes[1+values*1]=2;
    
    
    state_changes[0+values*2]=3;
    state_changes[1+values*2]=3;

    state_changes[0+values*3]=4;
    state_changes[1+values*3]=4;


    
    state_changes[0+values*4]=4;
    state_changes[1+values*4]=4;
    fun(0,n,0,state_changes,arr,values);

    
}

