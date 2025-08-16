#include <stdio.h>

int main() {
	int n, i,L = 0;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int player[n];
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d",i+1);
		scanf("%d" ,&player[i]);
	}
	for(i=0;i<n;i++){
		if(player[i]%2!=0){
			L=player[i];
		}
		}
		if(L==0){
			printf("ko co so nao");
		}else{
			printf("So le cuoi cung trong mang la: %d",L);
		}
}
