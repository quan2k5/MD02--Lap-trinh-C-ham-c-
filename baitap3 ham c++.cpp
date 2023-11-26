#include<stdio.h>
int check(int a){
	if(a<2){
		return 0;
    }else if(a==2){
    	return 1; 
	}else{
		for(int i=2;i<a;i++){
		if(a%i==0){
			return 0; 
		}else{
			return 1; 
		}
		}
	} 	
} 
int main(){
	printf("nhap so phan tu cua mang 1 la ");
	int m;
	scanf("%d",&m); 
	int numbers1[m];
	for(int i=0;i<m;i++){
		printf("mang[%d]=",i);
		scanf("%d",&numbers1[i]);
	}
	printf("nhap so phan tu cua mang 2 la ");
	int n;
	scanf("%d",&n);
	int numbers2[n];
	for(int i=0;i<n;i++){
		printf("mang[%d]",i);
		scanf("%d",&numbers2[i]); 
	}
	int count1=0; 
	int count2=0; 
	for(int i=0;i<m;i++){
		int kt=check(numbers1[i]);
		if(kt==1){
			printf("%d ",numbers1[i]);
			count1++; 
		}
	}
	printf("\n");
	for(int i=0;i<n;i++){
		int kt=check(numbers2[i]);
		if(kt==1){
			printf("%d ",numbers2[i]);
			count2++; 
		}
	}
	printf("\n");
	if(count1>count2){
		for(int i=0;i<m;i++){
			printf("%d ",numbers1[i]);
		}
	}else{
		for(int i=0;i<n;i++){
			printf("%d ",numbers2[i]);
		}
	} 	
} 
