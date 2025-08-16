#include <stdio.h>

int main() {
	int n, i,found = 0;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int player[n];
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d",i+1);
		scanf("%d" ,&player[i]);
	}
	int x;
	printf("nhap gia tri cua x:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==player[i]){
			found=1;
			break;
		}
	}
	if(found ==1){
		printf("co");
	}else{
		printf("ko");
	}
}