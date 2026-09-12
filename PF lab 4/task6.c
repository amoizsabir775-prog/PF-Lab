#include<stdio.h>
int main()
{
	int obstacle,person;
	float battery_percent;
	
	printf("Is an obstacle is detected(1=yes,0=no)\n");
	scanf("%d" ,&obstacle);
	
	printf("Is an person is detected(1=yes,0=no)\n");
	scanf("%d" ,&person);
	
	printf("Enter the battery percentage\n");
	scanf("%f" ,&battery_percent);
	
	// The robot decision 
	if(obstacle==1){
		printf("Emergency Stop\n");
	}
	else{
		printf("Change the direction\n");
	}
	if( battery_percent<20){
		printf("Return to the Charging Station\n");
	}
	else{
		("Continue Moving");
	}
	
	
	
}
