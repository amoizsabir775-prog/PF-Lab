#include<stdio.h>
int main()
{
	int n,i;
    long long fact_2n=1;
    long long fact_n1=1;
    long long fact_n=1;
	
	
	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	if(n<0){
		printf("The catalan series is define for non-negataive integer (n>0)");
		
	}
	for(  i =1;i<=2*n;i++){
		
		fact_2n=fact_2n*i;
		
	}
    for( i=1;i<=n+1;i++){
    	fact_n1=fact_n1*i;
	}
	 for( i=1;i<=n;i++){
    	fact_n=fact_n*i;
}

    int catalan_no;
    catalan_no= fact_2n/(fact_n1*fact_n);
    
    printf("The catalan no is %d\n",catalan_no);
    return 0;
    

}

 
