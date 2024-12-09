#include <stdio.h>
#include <math.h>
	int isPerfect(int n){
	    if (n <= 1){
	        return 0; 
	    }
	    int sum = 1;  
	    int limit = (int)sqrt(n); 
	    int i;
	    for (i = 2; i <= limit; i++){
	        if (n % i == 0){  
	            sum += i;
	        if (i != n / i){  
	            sum += n / i;
	            }
	        }
	    }  
	    return sum == n;
}
	int main(){
	    int number;
		    printf("Moi nhap so: ");
		    scanf("%d", &number);  
	    if (isPerfect(number)){
	        printf("%d la so hoan hao\n", number);
	    }else{
	        printf("%d khong phai so hoan hao\n", number);
	    }
	    return 0;
}

