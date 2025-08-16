#include <stdio.h>

int main() {
	int n, i, dem = 0, tong = 0;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int player [n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &player [i]);
    }
    for (i = 0; i < n; i++){
    	if (player [i]%2!=0){
    		tong+=player [i];
    	dem++;
		}
	}	
	if(dem==0){
		printf("ko co so le nao");
	}else{
		float trung_binh=(float)tong/dem;
		printf("trung binh cong la:%f",trung_binh);
	}
}