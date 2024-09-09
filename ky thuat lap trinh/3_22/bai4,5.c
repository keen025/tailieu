#include<stdio.h>
#include<math.h>
//
int main(){
//	//bai 4
//	int a,b;
//	for(int i=0;i<=36;i++){
//		a=i;
//		b=36-a;
//		if(a*2 + b*4 ==100){
//			printf("%d %d\n",a,b);
//		}
//	}
	
	//bai 5
	int a,b,c;
	for(int a=0;a<=100;a++){
		for(int b=0;b<=100;b++){
			for(int c=0;c<=100;c++){
				if(a*5+b*3+c/3==100 && a+b+c==100&&c%3==0){
					printf("%d %d %d\n",a,b,c);
				}
			}
		}
	}
//#include <stdio.h>
//
//int main(){
//    for(int i=0; i<=20; i++){
//        for(int j=0; j<=(100-i*5)/3; j++){
//            int k=(100-i*5-j*3)*3;
//            if(i+j+k==100) printf("%d %d %d\n", i,j,k);
//        }
//    }
//    return 0;
//}

	return 0;
}
