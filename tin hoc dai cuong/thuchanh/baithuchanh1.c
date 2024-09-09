#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	double a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%lf",&a[i]);
	}
	double x;
	printf("nhap gia tri x: ");
	scanf("%lf",&x);
	double P1=0.0;
	for(int i=0;i<=n;i++){
		P1=P1 + a[i]*pow(x,i);
	}
	printf("P= %.3lf\n",P1);
	double min = -1;
	for(int i=0;i<n;i++){
		if(a[i] > 0 && a[i] < min ){
			min = a[i];
			
		}
	}
	printf("he so duong nho nhat la: %.3lf\n",min);
	double b[n];
	for(int i=0;i<n;i++){
		b[i] = a[i] + (i+1)*a[i+1];
	}
	b[n] = a[n];
	double Q=P1, P2=0.0;
	for(int i=0;i<n;i++){
		P2=P2 + b[i]*pow(x,i-1);
		Q = Q + P2;
	}
	printf("Q= %.3lf\n",Q);
	if(Q>P1){
		printf("Q lon hon P\n");
	}else if(Q<P1){
		printf("Q nho hon P\n");
	}else if(Q==P1) printf("Q bang P\n");
	return 0;
}
