#include<stdio.h>

int main(){
	int arr[5]={1,1,2,2,5};
	int m=5;
	int i,j,cnt,x;
	for(i=0; i<m; i++){
		cnt=0;
		for(j=0; j<m; j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt==1){
			x=i;
			break;
		}
	}
	printf("Unique element is: %d",arr[x]);
//	if(x==1){
//		printf("\nYes.");
//	}
//	else{
//		printf("\nNo.");
	
	return 0;
}
