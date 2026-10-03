#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter the word");// taking input by user
	scanf("%s",str );
	printf(" The word is %s",str);
	int length =0;
	while (str[length]!= '\0') {
	length++;
	} // end while 
	 
	 printf("lenght=%d\n",length);
	 
	// Declaring for reserved word
	int start =0;
	int end = length-1;
	char temp;
	
	
	while(start<end){
		temp=str[start];
		str[start]=str[end];
	    str[end]=temp;
		
		
		end--;
		start++;
			
		
	}
	
	printf("Reserved word is %s\n",str);
	
	if(temp==start){
		
		printf("The word is Palindrome\n");
	}
	else{
	printf("The word is Not palindrome\n");
	}// if
	
	
	// declaring values for consonant and vowels 
	int consonant=0;
	int vowels=0;
	int i;
	
	for(i=0;str[i]!='\0';i++){
		char ch=str[i];
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u'
		|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
		
		
		vowels++;
}
	// end if start else
	else if
	((ch>='a' && ch<='z' )|| (ch>='A' && ch<='Z')){
	
	
	
	
	consonant++;
	
}

printf("The vowels are %d\n",vowels);
  printf("The consonants are %d\n",consonant); 
  
}
	
 // end else

  //printf("The vowels are %d\n",vowels);
  //rintf("The consonants are %d\n",consonant);
  
  
  return 0;
  
	
	 
}
