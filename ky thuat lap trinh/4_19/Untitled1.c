#include<stdio.h>

int gcd(int a,int b){
	if(b==0) return a;
	else gcd(b,a%b);
}
int search(int a[],int x,int l,int r){
	int mid=(l+r)/2;
	if(a[mid]==a[x]) return a[mid];
	else if(a[mid]<a[x]) search(a,x,l+1,r);
	else search(a,x,l,r-1); 
}
int partition(int a[],int l,int r){
    int i=l-1;
    int pivot = a[r];
    for(int j=l;j<r;j++){
        //neu a[j]>pivot thi bo qua
        if(a[j]<=a[r]){
            //dua a[j] len dau
            i++;
            swap(a[j],a[i]);
        }
    }
    i++;
    swap(a[i],a[r]);
    return i;
}
void quicksort(int a[],int l,int r){
    if(l<r){
        int pos = partition(a,l,r);
        //de quy 2 phia
        quicksort(a,l,pos-1);
        quicksort(a,pos+1,r);
    }
}
int val(int n){
	if(n==0) return 1;
	int s=0;
	for(int i=1;i<=n;i++){
		s+=i*val(i-1);
	}
	return s;
}

int main(){

	int n; scanf("%d",&n);
	



	return 0;
}
