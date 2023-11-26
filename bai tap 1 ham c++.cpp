#include<stdio.h>
int sum(int a,int b){
	int c=a+b;
	printf("%d+%d=%d\n",a,b,c);
}
int difference(int a,int b){
	int c=a-b;
	printf("%d-%d=%d\n",a,b,c);
}
int main(){
	int m,n,q; 
	printf("nhap 3so bat ky");
	scanf("%d %d %d",&m,&n,&q);
	sum(m,n);
	if(m>n){
		difference(m,n); 
	}else{
		difference(n,m);
	} 
	sum(m,q);
	if(m>q){
		difference(m,q); 
	}else{
		difference(q,m);
	} 
	sum(n,q);
	if(n>q){
		difference(n,q); 
	}else{
		difference(q,n);
	}  
} 
 

