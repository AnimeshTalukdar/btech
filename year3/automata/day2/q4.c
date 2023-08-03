#include<stdio.h>
#include<stdlib.h>
int isequal(char* a,char* b){
    //printf("||||%c %c",a[0],b[0]);
    int i ;
    for (i = 0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i] != b[i]){
            return 0;
        }
        else if (a[i] == '\0'){
            return 1;
        }
    }
    return 0;
}

char** dot(char** A, char** B,int n,int m ){
    char ** Ans = (char**) malloc(n*m* sizeof(char*));
    int i,j;
    for (i = 0;i < n;i++){
        for (j = 0; j <m;j++){
            char* curA = A[i];
            char* curB = B[j];
            int k = 0;
            int x=0,y =0;
            Ans[i*m+j] = (char*)malloc(sizeof(char)* 100);
            
            while(curA[x] != '\0'){
                Ans[i*m+j][k] = curA[x];
                x++;
                k++;
            }
            while(curB[y] != '\0'){
                Ans[i*m+j][k] = curB[y];
                y++;
                k++;
            }
            Ans[i*m+j][k] = '\0';
        }
    }
    return Ans;
}
void star(char ** a,int n, int level){
    //printf("SS");
    if(level == 0 ){
        printf("{ ,");
        star(a,n,1);
    }
    else if (level == 1){
        int i;
        for (i = 0 ;i<n;i++){
            printf("%s,",a[i]);
        }
        star(a,n,2);
    }
    else{
        char ** ss = dot(a,a,n,n);
        char ** sss = dot(ss,a,n*n,n);
        int i;
        for(i = 0;i<n*n*n;i++){
            printf("%s,",sss[i]);
        }
        
    }
}
int main(){
    //    char * x = (char*) malloc (sizeof(char));
    //  char* y = (char*) malloc(sizeof(char));
    // scanf("%s",x);
    //scanf("%s",y);
    //printf("%d",isequal(x,y));
    printf("Enter the number of elements in Set A\n");
    int n;
    scanf("%d",&n);
    printf("\n");

    char** A =(char**) malloc(n*sizeof(char*));
    printf("Enter the elements in the set");
    printf("\n");

    int i =0;
    for(i =0 ;i<n;i++){
        A[i] =(char*) malloc(50*sizeof(char));
        scanf("%s",A[i]);
    }
    printf("Enter the number of elements in Set B\n");
    int m;
    scanf("%d",&m);
    printf("\n");

    char** B =(char**) malloc(m*sizeof(char*));
    printf("Enter the elements in the set");
    printf("\n");
    i =0;
    for(i =0 ;i<m;i++){
        B[i] =(char*) malloc(50*sizeof(char));
        scanf("%s",B[i]);
    }
    printf("\n");
    printf("\n");


    // union 
    printf("A U B");
    printf("\n");
    printf("{");
    for(i = 0;i<n;i++){
        printf("%s,",A[i]);
    }

    for (i = 0 ;i<m;i++){
        int flag = 1;
        int j;
        for (j = 0;j <m;j++){
            if(isequal(A[j],B[i]) == 1){
                flag = 0;
                //printf("false");
            }
        }
        if (flag == 1)
        {
            printf("%s,",B[i]);
        }
    }

    printf("}");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    // dot
    printf("A o B ");
    char ** DOT = dot(A,B,n,m);
    printf("\n{");
    for(i = 0;i<n*m;i++){
        printf("%s,",DOT[i]);
    }
    printf("}\n");
    //printf("gg");
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("(BA)*");
    
    printf("\n");
    printf("\n");
    // star
    //
    //
    char ** Dot = dot(B,A,m,n);
    star(Dot,n*m,0);
    //printf("nn");
    //



    printf("}\n");
}

