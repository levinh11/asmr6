#include <stdio.h>

int main(){
	int n, i;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int player [n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &player [i]);
    }
    int minPositive =2312321 ;
    int found = 0;
    for (i = 0; i < n; i++){
    	if (player[i] > 0 && player[i] < minPositive){
    	minPositive = player[i];
    	 found = 1;
		}
	}
	 if (found==1 ) {
        printf("So duong nho nhat trong mang la: %d\n", minPositive);
    } else {
        printf("Khong co so duong nao trong mang.\n");
    }
	
}