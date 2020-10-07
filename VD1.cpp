#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	int c;
	printf("nhap c=");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("Max: %d",a);
			}else{
				if(b>c){
					printf("Max: %d",b);
					}else{
						printf("Max: %d",c);
					}
				}
		}else{
			if(b>c){
				printf("Max: %d",b);
				}else{
					printf("Max: %d",c);
				}
		}
	}
