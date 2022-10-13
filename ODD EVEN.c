#include<stdio.h>
int main()
{
	int i,arr[100],num;
	printf("enter the size of an array\n");
	scanf("%d",&num);
	printf("enter the elements of an array\n");
	i=0;
	while(i<num){
		scanf("%d",&arr[i]);
		i++;
			}
			printf("\n even numbers of an array\n");
			i=0;
			while(i<num){
				if(arr[i]%2==0){
					printf("%d ",arr[i]);
				}
				i++;
			}
			printf("\n odd numbers of an array\n");
			i=0;
			while(i<num){
				if(arr[i]%2==1){
					printf("%d ",arr[i]);
				}
				i++;
			}
			return 0;
}
