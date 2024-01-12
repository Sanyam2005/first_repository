#include <stdio.h>

int main(){

    //swapping program
    int x = 20,y=10;
    int z;
    
   // method 1:
    z=x;
    x= y;
    y=z;

    //method 2:
    x=x+y-(y=x);

    printf("nos are x %d y %d\n",x,y);
     
    
   //while loop
    int i =10;
    while(i--){    // (use then change)for checking initial value of i is used,then it is decremented
    printf("%d ",i);
    }
    //output:9 - 0
    i = 10;
    while(--i){ // (change then use) first i  is decremented, then checking of condition is done
    printf("%d ",i);
    }
    //output: 9-1
   
   //for loop
   //print first 10 even nos using for loop
    for(int i = 1;i<=10;i+=1)
    printf("%d ",i*2);

    
    return 0;
}