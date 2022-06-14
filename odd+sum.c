
//odd+sum

#include<stdio.h>
int main(){

int n,i=0,sum=0;

while(i<100){
    scanf("%d",&n);
      printf("Odd numbers are: \n");
    if(n%2!=0){

        printf("%d\n",n);
        sum+=n;

    }


    i++;
}
printf("Odd numbers sum %d\n",sum);


return 0;
}

