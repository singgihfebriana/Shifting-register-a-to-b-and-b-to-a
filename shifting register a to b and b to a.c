//*Name    : Singgih Febriana
//*Program : shift register a to b 
//*Date    : September 23, 2020


#include<stdio.h>

main(){
	int a,b;
	printf("Enter number to save in register a_\n");
	scanf("%d",&a);
	printf("Enter number to save in register b_\n");
	scanf("%d",&b);
	printf("Your number in register a is %d and b is %d\n",a,b);
	
	
	b=b+a;
	a=b-a;
	b=b-a;
	printf("your number in register b is %d\n\n",b);
	printf("your number in register a is %d",a);
	
}
