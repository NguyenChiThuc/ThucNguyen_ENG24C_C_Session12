#include <stdio.h>

		void printArray(int arr[], int size) 
	{
    	for (int i = 0; i < size; i++) {
        	printf("%d ", arr[i]);  
    }
    		printf("\n"); 
}

	int main() {
	    int n;
	    printf("Nhap so luong phan tu trong mang: ");
	    scanf("%d", &n);
	
		int arr[n];
	    printf("Nhap cac phan tu cua mang:\n");
	    for (int i = 0; i < n; i++) {
	        scanf("%d", &arr[i]);
	    }
	    printf("Cac phan tu trong mang la: ");
	    printArray(arr, n);
	
	    return 0;
}
