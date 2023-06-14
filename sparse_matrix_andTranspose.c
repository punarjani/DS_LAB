#include<stdio.h>

void main(){
	int o[20][20],a[20][20],b[20][20],row,column,k=1,m=1;
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&row,&column);
	printf("Enter the elements : \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&o[i][j]);
		}
	}
	//sparse
	a[0][0]=row;
	a[0][1]=column;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(o[i][j]!=0){
				a[k][0]=i;
				a[k][1]=j;
				a[k][2]=o[i][j];
				k++;
			}
		}
	}
	a[0][2]=k-1;
	//print sparse
	printf("\nSparse Matrix\n");
	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//Transpose
	b[0][1]=a[0][0];
	b[0][0]=a[0][1];
	
	b[0][2]=a[0][2];
	for(int i=0;i<column;i++){
		for(int j=1;j<=b[0][2];j++){
			if(a[j][1]==i){
				b[m][0]=a[j][1];
				b[m][1]=a[j][0];
				b[m][2]=a[j][2];
				m++;
			}
		}
	}




	printf("\nTranspose of Sparse Matrix\n");
	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}


	int c[20][20]={0};

	for(int i=1;i<=b[0][2];i++){
			c[b[i][0]][b[i][1]]=b[i][2];
	}


	
	printf("\nTranspose of Matrix\n");
	for(int i=0;i<column;i++){
		for(int j=0;j<row;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}