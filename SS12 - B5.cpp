#include<stdio.h>
#include<math.h> 
	int isPrime(int n){
		if(n <= 0){
			return 0; 
		}
		int cbh = (int)sqrt(n);
		int i;
		for(i = 0; i <= cbh; i++){
			if(n % 2 == 0){
				return 0;
			}
			
		}
		return 1;	
	}	
	int main(){
		int a, b;
			printf("moi ban nhap so a: ");
			scanf("%d", &a);
			printf("moi ban nhap so b: ");
			scanf("%d", &b);
		if(isPrime(a)){
			printf("day la so nguyen to %d\n", a);
		}else{
			printf("day khong phai so nguyen to %d\n", a);
		}
		if(isPrime(b)){
			printf("day la so nguyen to %d\n", b);
		}else{
			printf("day khong phai so nguyen to %d\n", b);
	}
		return 0;
}
