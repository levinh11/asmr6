#include <stdio.h>

int main() {
	int n, i, dem = 0, tong = 0;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int player[n];
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d",i+1);
		scanf("%d" ,&player[i]);
	}
	for(i=0;i<n;i+=2){
		if(player[i]%2!=0){
			tong+=player[i ];
			dem++;
		}
	}
	if(dem==0){
		printf("ko co so le nao hop le");
	}else{
		float tbc=(float)tong/dem;
		printf("gia tri tbc la:%f",tbc);
	}
}