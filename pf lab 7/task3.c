#include<stdio.h>
int main(){
	char log[3][100];
	int i;
	     for(i=0;i<3;i++){
	
		printf("Enter the Message :%d\n",i+1);
		scanf(" %[A-Z]", log[i]);
}
  int  j;
    
    for(i = 0; i < 3; i++) {
        int space_count = 0;
        
        for(j = 0; log[i][j] != '\0'; j++) {
            if(log[i][j] == ' ') {
                space_count++;
            }
        }
        
     
        printf("Message %d word count: %d\n", i + 1, space_count + 1);
    }
    return 0;
	
}
