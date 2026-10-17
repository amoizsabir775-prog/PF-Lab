#include<stdio.h>
int main(){
	char sentence[3][100];
	int i;
	
	printf("Enter the 3 sentence separted  y ;");
	for(i = 0; i < 3; i++) {
        scanf(" %[^;]%*c", sentence[i]); //
    }
    
    int  j;
    
    
    for(i = 0; i < 3; i++) {
        int vowel_count = 0;
        
        
        for(j = 0; sentence[i][j] != '\0'; j++) {
            char ch = sentence[i][j];
            
            
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel_count++;
            }
        }
        
        
        printf("Sentence %d vowel count: %d\n", i + 1, vowel_count);
    }

    return 0;
	
	
	
}
