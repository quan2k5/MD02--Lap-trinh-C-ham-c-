#include<stdio.h> 
int core(int a,int b){
	int c=a*b;
	printf("%d*%d=%d\n",a,b,c);
}
int divide(int a,int b){
	int c=a/b; 
	if(a%b==0){
		printf("%d/%d=%d\n",a,b,c);
	}else{
		printf("%d khong chia het cho %d\n",a,b);
	} 
}
int main(){
	int a,b,c;
	printf("nhap 3 so a b c bat ky");
	scanf("%d%d%d",&a,&b,&c);
	core(a,b);
	if(a>b){
		 divide(a,b);
	}else{
		divide(b,a);	
	}
	 	core(a,c);
	if(a>c){
		 divide(a,c);
	}else{
		divide(c,a);	
	} 
		 	core(c,b);
	if(b>c){
		 divide(b,c);
	}else{
		divide(c,b);	
	} 
} 
 
