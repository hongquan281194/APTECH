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
	int P;
	scanf("%d",&P);
	if(a==0){
		printf("Khong phai tam giac");
		}else{
			if(b==0){
				printf("Khong phai tam giac");
				}else{
					if(c==0){
						printf("Khong phai tam giac");
						}else{
							if(a+b<c){
								printf("Khong phai tam giac");
								}else{
									if(b+c<a){
										printf("Khong phai tam giac");
										}else{
											if(a+c<b){
												printf("Khong phai tam giac");
												}else{
													printf("La tam giac");
													P=a+b+c;
													printf("Chu vi tam giac la: %d",P);
												}
										}
								}
						}
				}
		}
	}
