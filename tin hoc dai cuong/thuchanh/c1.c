#include<stdio.h>

int main(){
	//su dung kien thuc dstt
	double a,b,c,d,t1,t2,x,y;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&t1,&c,&d,&t2);
	
	double dx = t1*d - t2*b;
	double dy = a*t2 - c*t1;
	double det = a*d - b*c;
	
	if(det==0){
		if(dx == 0 && dy == 0){
			printf("pt vo so nghiem");
		}else printf("pt vo nghiem");
	}else {
		x = dx / det;
		y = dy / det;
		printf("pt co nghiem la x = %lf, y = %lf",x,y);
		
	}
}
