
//Even+sum

#include<stdio.h>
int main(){

int n,i=0,sum=0;

while(i<10){
    scanf("%d",&n);

    if(n%2==0){

        printf("%d\n",n);
        sum+=n;

    }


    i++;
}
printf("Even numbers sum %d\n",sum);


return 0;
}


