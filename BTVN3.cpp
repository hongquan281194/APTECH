#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	if(a==1){
		if(0<b<=31){
			printf("Day la ngay thu %d trong nam",b);
			printf("Day la ngay thu %d trong tuan",(b % 7)+1);
			}else{
				printf("Khong phai ngay trong nam");
			}
		}else{
			if(a==2){
				if(0<b<=28){
					printf("Day la ngay thu %d trong nam",b+31);
					printf("Day la ngay thu %d trong tuan",(b+31)%7+1);
					}else{
						printf("Khong phai ngay trong nam");
					}
				}else{
					if(a==3){
						if(0<b<=31){
							printf("Day la ngay thu %d trong nam",b+31+28);
							printf("Day la ngay thu %d trong tuan",(b+31+28)%7+1);
							}else{
								printf("Khong phai ngay trong nam");
							}
						}else{
							if(a==4){
								if(0<b<=30){
									printf("Day la ngay thu %d trong nam",b+31+28+31);
									printf("Day la ngay thu %d trong tuan",(b+31+28+31)%7+1);
								}else{
									printf("Khong phai ngay trong nam");
								}
							}else{
								if(a==5){
									if(0<b<=31){
										printf("Day la ngay thu %d trong nam",b+31+28+31+30);
										printf("Day la ngay thu %d trong tuan",(b+31+28+31+30)%7+1);
										}else{
											printf("Khong phai ngay trong nam");
										}
									}else{
										if(a==6){
											if(0<b<=30){
												printf("Day la ngay thu %d trong nam",b+31+28+31+30+31);
												printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31)%7+1);
												}else{
													printf("Khong phai ngay trong nam");
												}
											}else{
												}if(a==7){
													if(0<b<=31){
														printf("Day la ngay thu %d trong nam",b+31+28+31+30+31+30);
														printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31+30)%7+1);
														}else{
															printf("Khong phai ngay trong nam");
														}
													}else{
														}if(a==8){
															if(0<b<=31){
																printf("Day la ngay thu %d trong nam",b+31+28+31+30+31+30+31);
																printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31+30+31)%7+1);
																}else{
																	printf("Khong phai ngay trong nam");
																}
															}if(a==9){
																if(0<b<=30){
																	printf("Day la ngay thu %d trong nam",b+31+28+31+30+31+30+31+31);
																	printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31+30+31+31)%7+1);
																	}else{
																		printf("Khong phai ngay trong nam");
																	}
																}else{
																	if(a==10){
																		if(0<b<=31){
																			printf("Day la ngay thu %d trong nam",b+31+28+31+30+31+30+31+31+30);
																			printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31+30+31+31+30)%7+1);
																			}else{
																				printf("Khong phai ngay trong nam");
																			}
																		}else{
																			if(a==11){
																				if(0<b<=30){
																					printf("Day la ngay thu %d trong nam",b+31+28+31+30+31+30+31+31+30+31);
																					printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31+30+31+31+30+31)%7+1);
																					}else{
																						printf("Khong phai ngay trong nam");
																					}
																				}else{
																					if(a==12){
																						if(0<b<=31){
																							printf("Day la ngay thu %d trong nam",b+31+28+31+30+31+30+31+31+30+31+30);
																							printf("Day la ngay thu %d trong tuan",(b+31+28+31+30+31+30+31+31+30+31+30)%7+1);
																							}else{
																								printf("Khong phai ngay trong nam");
																							}
																						}else{
																							printf("Khong phai ngay trong nam");
																						}
																				}
																		}
																}
									}
							}
						}
				}
		}
	}
