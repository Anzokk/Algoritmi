#include <stdlib.h>
#include <stdio.h>
		

int main(){
	int A[]={5,2,4,6,1,7,8,11,14,32,31,20,3};
	int length = 13;
	int i, j,support, low, mid, top;
	for(i=1; i<length; i++){
		low=0;
		top=i-1;
		printf("\n\nLavoro su elem indice: %d \n",i);
		while(low<=top){		/*searching index*/
		printf("valore low nel ciclo: %d \n",low);
		printf("valore top nel ciclo: %d \n",top );
		mid=(low+top)/2;
			if(A[i]>=A[mid]){
				low=mid+1;
			}else{
				top=mid-1;
			}
		}
		printf("indice ricerca: %d \n",low); 
		support=A[i];
		for(j=i; j>low; j--){	/*exchange*/
			A[j]=A[j-1];
		}				
		A[low]=support;   
		printf("Array: ");
		for(int h=0; h<length; h++){
			printf("%d ", A[h]);
		}
	}
	printf("\n");
}	

