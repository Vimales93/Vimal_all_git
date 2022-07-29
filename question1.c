#include <stdio.h>
#include <stdlib.h>

void sum();
void avg();
void maxm();
void minm();
int main(){
    printf("Enter the elements \n");
    float array[20];
    int j;
    for(j=0;j<20;j++){
        scanf("%f",&array[j]);
    }
    sum(array);
    avg(array);
    maxm(array);
    minm(array);
    return 0;
}

void sum(float array[20]){
    float sum=0;
    int j;
    for(j=0;j<20;j++){
        sum+=array[j];
    }
    printf("Sum of the elements is %f\n",sum);
}

void avg(float array[20])
{
    float sum=0;
    int i;
    for(i=0;i<20;i++){
        sum+=array[i];
    }
    printf("Average of the elements is %f\n",sum/20);
}

void maxm(float array[20]){
    float maxm=0;
    int j;
    for(j=0;j<20;j++){
        if(maxm<array[j])
            maxm=array[j];
    }
    printf("Maximum of the numbers is %f\n",maxm);
}

void minm(float array[20])
{
    float minm=20000000000;
    int j;
    for(j=0;j<20;j++)
{
        if(minm>array[j])
            minm=array[j];
    }
    printf("minimum of 20 numbers is %f\n",minm);
}
