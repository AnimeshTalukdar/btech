#include<stdio.h>
#include<stdlib.h>
void fun(int idx,int n,int state,int* state_changes,int* arr){
    if(idx == n && state == 1){
        printf("Reached Accepted");
        return;
    }
    if (idx == n){
        printf("Reached Not accepted");
        return ;
    }
    printf("%d",state);
    int cur = arr[idx];
    fun(idx+1,n,state_changes[state*2+cur],state_changes,arr);

}
int main(){
    int n; 
    printf("Enter the length");
    int* arr = (int*) malloc(sizeof(int)*n);
    scanf("%d",&n);
    int i =0;
    for (i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int* state_changes =(int*)malloc(sizeof(int)*3*2);
    for(i=0;i<6;i++){
        state_changes[i]=0;
    }
    state_changes[0]=0;
    state_changes[1]=1;
    state_changes[2]=2;
    state_changes[3]=1;
    state_changes[4]=1;
    state_changes[5]=1;

    fun(0,n,0,state_changes,arr);

    
}

