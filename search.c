#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int limit,a[20],option,low,high,mid,temp,key1,key2,flag1=0,flag=0;
  char ch='y';
  printf("Enter the limit:");
  scanf("%d",&limit);
  printf("Enter the elements\n");
  for(int i=0;i<limit;i++){
    scanf("%d",&a[i]);
  }

  system("clear");

  do{
    printf("Enter any options to continue:\n1.Linear Search\n2.Binary Search\n0 to exit\n\nOption:");
    scanf("%d",&option);

  switch (option){
    case 1:
      printf("\n\nEnter the element to be searched:");
      scanf("%d",&key1);
      printf("\nSearching.....\n");
      for(int i=0;i<limit;i++){
        if(a[i]==key1){
          printf("\nElement found at %d\n",i+1);
        }
        else{
          flag1++;
        }
      }
      if(flag1==limit){
        printf("\nElement not found");
      }
      getchar();
      break;
    case 2:
      for(int j=0;j<limit;j++){
        for(int i=0;i<limit-1;i++){
          if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
          }
        }
      }
      printf("\nSorting.....\n");
      printf("\nElements After sorting\n");
      for(int i=0;i<limit;i++){
        printf("%d ",a[i]);
        }

      
        printf("\n\nEnter the element to be searched:");
        scanf("%d",&key2);
        low=0;
            high=limit-1;
            while (low<=high){ 
                mid=(int)(low+high)/2;
                if(key2>a[mid]){
                    low=mid+1;
                }
                else if (key2<a[mid]){
                    high=mid-1;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if (flag==0){
              printf("\nElement not found");                
            }
            else{
              printf("\nElement %d found at %d th position",key2,mid+1);
            }
        getchar();
      break;
    case 0:
      printf("\nExiting.....\n");
      exit(0);
  }

  printf("\n\nDo you want to continue:");
  
  scanf("%c",&ch);
  printf("\n");
  system("clear");
  }while(ch=='y');


   return 0;
}