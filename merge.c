#include<stdio.h>
int main(void){
	int a[]={15,17,18,18,19,110}, b[]={2,3,4,6,8}, c[11], i, j, k;
	for(k=0;k<11;k++){
		if(i<6 && j<5){
			if(a[i]<b[j])
				c[k]=a[i++];
			else
				c[k]=b[j++];
		}
		else if(i<6)
			c[k]=a[i++];
		else if(j<5)
			c[k]=b[j++];
	}
	for(k=0;k<11;k++)
		printf("%d\n", c[k]);
	return 1;
}
