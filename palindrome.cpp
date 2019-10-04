#inc#include<stdio.h>
lude<conio.h>
int main()
{
	int n,ori,rev,i,rem;
	printf("Enter a number :");
	scanf("%d",&n);
	ori=n;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
	}
	if(ori==rev)
		printf("%d is a palindrome number",ori);
	else
		printf("%d is not a palindrome number",ori);		
}
