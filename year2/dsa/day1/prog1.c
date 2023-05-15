#include <stdio.h>
struct state{
char state[100];
int engcol,medcol,mancol,univ,totalcol;
};
int main() { 
printf("Enter the number of states :"); 
int n; scanf("%d",&n); 
struct state arr[n]; 
int i; 
for(i=0;i<n;i++) { 
printf("Enter the name of state %d:",i+1);
 scanf("%s",&arr[i].state); 
// scanf("%c",&arr[i].state);
printf("Enter the number of engineering colleges in state %s: ",arr[i].state);
scanf("%d",&arr[i].engcol);
printf("Enter the number of medical colleges in state %s: ",arr[i].state);
scanf("%d",&arr[i].medcol);
printf("Enter the number of management colleges in state %s: ",arr[i].state);
scanf("%d",&arr[i].mancol);
printf("Enter the number of universities in state %s: ",arr[i].state);
scanf("%d",&arr[i].univ);
arr[i].totalcol=arr[i].engcol+arr[i].medcol+arr[i].mancol+arr[i].univ;
}
int kmax = 0;
for(i=0;i<n;i++)
{
if(arr[kmax].totalcol<arr[i].totalcol)
kmax=i;
}
printf("%s has the highest number of colleges\n ",arr[kmax].state);
return 0;
}
