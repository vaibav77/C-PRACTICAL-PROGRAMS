#include<stdio.h>

int main(){
	int marks;
	char grade;
	
	printf("enter marks(0 to 100):");
	scanf("%d",&marks);
	
	if(marks<0||marks>100){
		printf("invalid input.marks should be between 0 and 100\n");
		return 1;
	}
	
	switch(marks/10){
		case 10:
		case 9:
		case 8:
			grade='A';
			break;
		case 7:
		case 6:
		    grade='B';
			break;
		case 5:
			grade='C';
			break;
		case 4:
			grade='D';
			break;
		default:
			grade='F';	
			
	}
	printf("grade:%c\n",grade);
	return 0;
}
