#include<stdio.h>
int main(){
	printf("Enter 3 CVS log enteries\n");
	
	char log[3][30];
	int i;
	
	for(i=0;i<3;i++){
		printf("log %d\n",i+1);
		scanf("%s",log[i]);
		
	}
	int upper_case=0;
	int j;
	
	for(i=0;i<3;i++){
		for(j=0; log[i][j]!='\0'; j++)
		if(log[i][j]>='A'  &&  log[i][j]<='Z'){
			
			upper_case++;
		}
		
	}
	printf("Total Upper case letter at all logs:%d\n",upper_case);
	
	return 0;
	
	
}
