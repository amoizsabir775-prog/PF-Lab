#include<stdio.h>

int main()
{
    int math,ai,programming;
    float attendance_percentage;
    
    printf("Enter the Math Marks,AI Marks,Programming Marks,attendance_percentage\n");
    scanf("%d %d %d %f",&math,&ai,&programming,&attendance_percentage);
    
    
  if(math>=50 && ai>=50 && programming>=50 && attendance_percentage>=75 ){
  
  
  int average ;
  average =(math+ai+programming)/3;
  
  
  

if(average>=80){
	printf("Excellent");
}

else if(average>=70){
	printf("Very Good");
}
else if(average>=60){
	printf("Good");
}
else if(average>=50){
	printf("Satisfactory");
}
else 
	printf("Poor");
}

else {
	printf("Not Eligible");
}




  
  
    return 0;


}

