#include<stdio.h>
int main()
{
	int score;
	printf("Enter the score\n");
	scanf("%d",& score);
	if(score<0 || score>100){
		printf("Invalid sccore");
	}
	else if(score>=0 && score<=49){
		printf("Low Confidence");
		}
		else if(score>=50 && score<=79){
		printf("Moderate Confidence");
		}
		else if(score>=80 && score<=100){
		printf("High Confidence");
		}
		return 0;
}
