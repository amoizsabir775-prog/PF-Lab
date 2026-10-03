#include<stdio.h>

	#include<stdio.h>
int main()
{
	int library_code,reminder,reversed=0;
	
	printf("Enter the Ticket number");
	scanf("%d",& library_code);
	library_code=reversed;
	
	while(library_code > 0){
		reminder=library_code%10;
		reversed=(reversed*10)+reminder;
		library_code=library_code/10;
}
  if(reversed==library_code)
  printf("The number is palindrome");
  else printf("The number is not palindrome!\n" );
  return 0;
   

return 0;

}
 

 
