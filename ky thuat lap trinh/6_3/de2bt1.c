#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char text[50];
	fgets(text,sizeof(text),stdin);
	text[strlen(text)-1]='\0';
    FILE *f = fopen(text, "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }
	
	
	int n;
	fscanf(f,"%d",&n);
	double x[n],y[n];
	for(int i=0;i<n;i++){
		fscanf(f,"%lf%lf",&x[i],&y[i]);
	}
    double r=5;
    int dem1=0,dem2=0;
    for(int i=0;i<n;i++){
    	double dis = sqrt(x[i]*x[i]+y[i]*y[i]);
    	if(dis>r) dem1++;
    	else if(dis<r) dem2++;
	}
	printf("co %d diem nam ngoai dng tron\n",dem1);
	printf("co %d diem nam trong dng tron\n",dem2);
	int check=1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((x[i]*-1==x[j]||x[i]==x[j]*-1)&&(y[i]*-1==y[j]||y[i]==y[j]*-1)){
				check=0;
				printf("(%.2lf,%.2lf) (%.2lf,%.2lf)\n",x[i],y[i],x[j],y[j]);
			}
		}
	}
	if(check) printf("ko co cap diem nao");
    fclose(f);
    return 0;
}

