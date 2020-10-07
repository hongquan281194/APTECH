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
	if(a==0){
		if(b==0){
			if(c==0){
				printf("PT co vo so nghiem");
				}else{
					printf("PT vo nghiem");
				}
			
			}else{
				printf("PT co nghiem duy nhat x == -c/a");
			}
		
		}else{
			float n = b*b - 4*a*c;
			float x1;
			float x2;
			if(n=0){
				printf("PT co nghiem duy nhat x= -b/(2*a)");
				}else{
					if(n<0){
						printf("PT vo nghiem");
						}else{
							printf("PT co hai nghiem phan biet ");
						}
				}
		}
	}
