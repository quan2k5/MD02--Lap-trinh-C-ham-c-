#include<stdio.h>
int check(int n,int mang[]){
	int start=0;
	int end=n; 
	int mid=(start+end)/2; 
	for(int i=0;i<mid;i++){
			if(mang[i]==mang[mid+i+1]){
				return 1; 
			}else{
				return 0;
				break; 
		}
	} 
}
int main(){
	printf("nhap so phan tu cua mang");
	int m;
	scanf("%d",&m);
	int numbers[m]; 
	for(int i=0;i<m;i++){
		printf("mang[%d]=",i);
		scanf("%d",&numbers[i]); 
	}
	int check1=check(m,numbers);
	if(check1==0){
		for(int i=0;i<m;i++){
			printf("%d",numbers[i]);
		} 
		printf("khong phai la day doi xung");
	}else{
			for(int i=0;i<m;i++){
			printf("%d",numbers[i]);
		} 
		printf(" la day doi xung ");
	} 
	 
} 
