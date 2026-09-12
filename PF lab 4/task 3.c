#include<stdio.h>
int main()
{
	int  total_records,missing_records, duplicate_records;
	float missing_percentage,duplicate_percentage;
	// Before training ML or AI model this record is very important
	printf("Enter total num of records , Enter num of missing records , Enter number of duplicate records :\n");
	scanf("%d %d %d",&total_records, &missing_records, &duplicate_records );
	if(total_records<=0){
		printf("Invalid Data set");
	}
	else if(missing_records/total_records*100.0 >30){
	
	printf("Poor quality data set");
}
    else if(missing_records/total_records*100.0 <30  ||  duplicate_records/total_records*100>=20 ){
	
	printf("Data Base Required Cleaning");
}
    else {
    	printf("Data Base Ready For Training");
	}
	
	return 0;
}
