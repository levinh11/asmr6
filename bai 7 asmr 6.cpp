#include <stdio.h>

int main() {
	int n, i;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int player[n];
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d",i+1);
		scanf("%d" ,&player[i]);
	}
	int sum=0;
	int maxsum=0;
	for (int i = 0; i < n; ++i) {
        if (player[i] >0) {
            sum+=player[i];
            if ( sum> maxsum)
                maxsum = sum;
        } else {
            sum = 0;
        }
    }printf("tong luong so duong lien tiep lon nhat la:%d",maxsum);
}