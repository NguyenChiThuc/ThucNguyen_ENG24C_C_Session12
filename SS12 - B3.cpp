#include <stdio.h>
	
	long long factorial(int n) {
	    long long result = 1; 
	    if (n < 0) {
	        return -1;
	    }
	    for (int i = 1; i <= n; i++) {
	        result *= i;
	    }
	    return result;
	}
	
	int main(){
	    int n;
		    printf("Nhap 1 so nguyen: ");
	    	scanf("%d", &n);
	    long long result = factorial(n);
	    if (result == -1){
	        printf("Gia tri khong hop le.\n");
	    }else {
	        printf("Giai thua cua gia tri %d là: %lld\n", n, result);
	    }
	
	return 0;
}

