#include <stdlib.h>
#include <stdio.h>

int main(){
	int insertion_sort(int A[], int length){
		int i, j,support, low, mid, top;
		for(i=1; i<length; i++){
			low=0;
			top=i-1;
			while(low<=top){		/*searching index*/
			mid=(low+top)/2;
				if(A[i]>=A[mid]){
					low=mid+1;
				}else{
					top=mid-1;
				}
			}

			support=A[i];
			for(j=i; j>low; j--){	/*exchange*/
				A[j]=A[j-1];
			}				
			A[low]=support;   
		}
		return A;
	}	
}
