#include<stdio.h>
#include<stdlib.h>

int main(){
    char *s= (char*) malloc (sizeof(char)*100);
    char *match=(char*) malloc(sizeof(char)*100);
    printf("Enter the Strings\n");

    scanf("%s",s);
    scanf("%s",match);
    //printf("%s %s\n",s,match);
    int n,m;
    printf("Enter the sizes\n");
    scanf("%d",&n);
    scanf("%d",&m);
    //n = sizeof(s)/sizeof(s[0]);
    //m = sizeof(match)/sizeof(match[0]);
    //printf("sizes %d %d", sizeof(s)/sizeof(s[0]),sizeof(match)/sizeof(match[0]));
    int i,j;
    int comparisons = 0;
    //printf("%d %d",n,m);
    for ( i = 0;i<n-m;i++){
        for( j = 0; j <m;j++){
            if(s[i+j] == match[j]){
                comparisons++;
                continue;
            }
            else{
                comparisons++;
                break;
            }


        }
        if (j == m){
            printf("Matched at %d to %d with comparisons %d",i,i+m,comparisons);
            return 0;
        }
    }
    printf("Not matched");
    return 0;


}
