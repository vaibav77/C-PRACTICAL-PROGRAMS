#include<stdio.h>
int main(){
	int lines,i,j;
	char ch;
	printf("enter a character to print:");
	scanf("%c",&ch);
	printf("enter a number of lines:");
	scanf("%d",&lines);
	for(i=1;i<=lines;i++){
		for(j=1;j<=i;j++){
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
