#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	double a[n+1];
	for(int i=0;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%lf",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i] > a[j]){
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	int dem;
	for(int i=0;i<n;i++){
		if(a[i] == a[i+1]){
			dem++;
		}
	}
	
	printf("so phan tu trung nhau nhieu nhat la: %d",max);
}
