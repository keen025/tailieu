#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	FILE *f;
	f=fopen("input.txt","r");
	if(f==NULL){
		printf("file ko ton tai");
		return 0;
	}
	int n;
	fscanf(f,"%d",&n);
	double x[n],y[n];
	for(int i=0;i<n;i++){
		fscanf(f,"%lf",&x[i]);
	}
	for(int i=0;i<n;i++){
		fscanf(f,"%lf",&y[i]);
	}
	int cnt=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(y[i]>0&&y[j]<0 || y[i]<0&&y[j]>0) cnt++;
		}
	}
	printf("%d",cnt);
	fclose(f);
	return 0;
}
