//w.c.p to check whether a number is prime or not using while and for loop//
#include<stdio.h>
int main()
{
	int n,i=2;
	printf("Enter a number:");
	scanf("%d",&n);
if(n<=1){
	printf("not a prime number\n");
	return 0;
}
while(i<n){
	if(n%i==0){
		break;
	}
		i++;
	}
	 if (i==n){
	printf("prime number\n");
}
else{
	printf("not a prime\n ");
}

return 0;
	
}
