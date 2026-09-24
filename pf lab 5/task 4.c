#include<stdio.h>
int main()

{
	int conversation_type,sub_choice;
	printf("Please Enter the Conversation_type(1=Greeting,2=Study,3=Weather,4=Help) ");
	scanf("%d",&conversation_type);
	if(conversation_type=1){
	printf("Which Type of Greeting(Hello=1,How are You=2,Goob Bye=3)\n");
	scanf("%d",&sub_choice);
	 if (sub_choice == 1) {
	
            printf(" Hello there! How can I help you today?\n");
        } else if (sub_choice == 2) {
            printf(" I'm doing great, thank you for asking!\n");
        } else if (sub_choice == 3) {
            printf(" Goodbye! Have a wonderful day!\n");
        } else {
            printf("Invalid option.\n");
    
        
        }
    
        
        	if (conversation_type == 2) {
	
            printf("Which Subject You to Study todaytoday(programming=1,mathematics=2,AI=3)?\n");
        } else if (sub_choice == 1) {
            printf("Programming\n");
        } else if (sub_choice == 2) {
            printf("Matematics!\n");
        } else if( sub_choice==3) {
            printf("AI\n");
        }
        else { printf("Invalid option");
		}
		
		
		if (conversation_type == 3) {
	
            printf("Which weather info(Today=1,Tommorrow=2,Forecast=3)?\n");
        } else if (sub_choice == 1) {
            printf("Today=\n");
        } else if (sub_choice == 2) {
            printf("Tommorrow!\n");
        } else if( sub_choice == 3) {
            printf("Forecast\n");
        }
        else { printf("Invalid option");
		}
	
	
	if (conversation_type == 4) {
	
            printf("Which type of help  info(About=1,chatbox=2,command=3,exist=4)?\n");
        } else if (sub_choice == 1) {
            printf("About\n");
        } else if (sub_choice == 2) {
            printf("chatbox\n");
        } else if( sub_choice ==3 ) {
            printf("command\n");
    }
        else if("sub_choice == 4"){
        	printf("Exist");
		}
        else { printf("Invalid option");
		}
	}
	
}
