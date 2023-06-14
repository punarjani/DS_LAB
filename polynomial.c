#include<stdio.h>

int main(){
    int deg1,deg2,lim1,lim2,d3,exp=0,coef=0,num;
    int p[20]={0},q[20]={0},r[20]={0};


    printf("Enter highest degree of first polynomial : ");
    scanf("%d",&deg1);
    printf("Enter number of terms of first polynomial : ");
    scanf("%d",&lim1);
    for(int i=0;i<lim1;i++){
        printf("Enter %d value of Coefficient and exponential : ",i+1);
        scanf("%d%d",&coef,&exp);
        p[exp]=coef;
    }

    printf("\n\nEnter highest degree of second polynomial : ");
    scanf("%d",&deg2);
     printf("Enter number of terms of second polynomial : ");
    scanf("%d",&lim2);
    for(int i=0;i<lim2;i++){
        printf("Enter %d value of Coefficient and exponential : ",i+1);
        scanf("%d%d",&coef,&exp);
        q[exp]=coef;
    }
    d3=deg1>deg2?deg1:deg2;

    printf("\nSum of polynomials\n");

    
      for(int i=0;i<=d3;i++){
        if(p[i]!=0){
          printf("%dx^%d",p[i],i);
            printf(" + ");
      }
    }

      for(int i=0;i<=d3;i++){
        if(q[i]!=0){
          printf("%dx^%d",q[i],i);
          if(i!=deg2){
            printf(" + ");
          }
      }
    }
    printf(" = ");

    for(int i=0;i<=d3;i++){
        if(p[i]!=0||q[i]!=0){
            r[i]=p[i]+q[i]; 
            printf("%dx^%d",r[i],i);
            if(i!=d3){
              printf(" + ");
            }
        }
    }

    printf("\n");



    return 0;
}