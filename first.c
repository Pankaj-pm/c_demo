#include<stdio.h>
int main(){

    /*const float pi=3.14;
    int noOfMonth=2147483647; 
    printf("%f\n",pi);
    printf("%0.1f\n",pi);
    printf("%d",noOfMonth);*/

    /*int a,b;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("sum of  %d and %d = %d",a,b,a+b);*/

    int en,hi,gu;

    printf("Enter English Mark = ");
    scanf("%d",&en);

    printf("Enter Hindi Mark = ");
    scanf("%d",&hi);

    printf("Enter Gujrati Mark = ");
    scanf("%d",&gu);

    float ff=(en+hi+gu)/2; 
    printf("\nTotal Mark is = %d",en+hi+gu);
    printf("\nTotal Mark is = %d",ff);

    return 0;
}
