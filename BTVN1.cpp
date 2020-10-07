#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	if(a==8){
		printf("Day la chu nhat");
		}else{
			if(2<=a<=7){
				printf("Day la thu %d",a);
				}else{
					printf("Day khong phai ngay trong tuan");
				}
		}
	}
	
