#include<stdio.h>
int main(){
	char word_grid [3][100];
	
	int i;
	for(i=0;i<3;i++){
		printf("Enter the Word :%d\n",i+1);
		scanf(" %[^\n]", word_grid [i]);
		
	}
	
	int max_length = 0;
    int max_row = 0;
    int max_col = 0;
    
    for(i = 0; i < 3; i++) {
        int word_start = 0;
        int current_col = 0; 
        int j;
        for(j=0; ;j++){
        	if(word_grid[i][j] == ' ' || word_grid[i][j] == '\0') {
			
                int current_length = j - word_start;
                if(current_length > max_length) {
                    max_length = current_length;
                    max_row = i;
                    max_col = current_col;
                }
                
                
                current_col++;
                word_start = j + 1;
            }
            
            
            if(word_grid[i][j] == '\0') {
                break;
        	
		}
	}
}

    printf("\n--- Result ---\n");
    printf("Longest Word Length: %d\n", max_length);
    printf("Row Index (i): %d\n", max_row);
    printf("Column Index (j): %d\n", max_col);
    
	
}
