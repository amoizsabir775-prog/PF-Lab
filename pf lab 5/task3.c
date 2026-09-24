#include<stdio.h>
int main()
{
	int main_category ,sub_category;
	
	printf("Select the category \n");
	printf("1 Animal \n");
	printf("2 Vehicle \n");
	printf("3 food \n");
	printf("4 Human \n");
	printf("enter the choice(1-4) \n");
	scanf("%d", &main_category);
	
	switch (main_category){
	
	 case 1: 
            printf("\n--- Animal Subcategories ---\n");
            printf("1. Cat\n2. Dog\n3. Bird\n");
            printf("Select a subcategory (1-3): ");
            scanf("%d", &sub_category);
            
	switch(sub_category){
	case 1:("\nResult animal -> cat\n ");	break;
	case 2:("\nResult animal -> dog\n "); break;
	case 3:("\nResult animal -> bird\n ");	break;
	default :printf("\n Invalid Choice\n"); break;
}

    break;
	
	

		
	
	case 2:
	printf("Food sub categories ");
	printf("1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Select a subcategory (1-3): ");
            scanf("%d", &sub_category);
			
			switch(sub_category){
				
			case 1: printf("\nResult: Food -> Pizza\n"); break;
                case 2: printf("\nResult: Food -> Burger\n"); break;
                case 3: printf("\nResult: Food -> Biryani\n"); break;
                default: printf("\nInvalid choice!\n"); break;
            }
            break;	
			
			case 3:
            printf("\n[Human Submenu]\n");
            printf("1. Male\n2. Female\n3. Child\n");
            printf("Choose an option: ");
            scanf("%d", &sub_category);
            switch (sub_category) {
                case 1: printf("\nResult: Human -> Male\n"); break;
                case 2: printf("\nResult: Human -> Female\n"); break;
                case 3: printf("\nResult: Human -> Child\n"); break;
                default: printf("\nInvalid choice!\n"); break;
            }
            break;
            

        default:
            printf("\nInvalid category chosen!\n");
            break;
    }
	
	
	
	
}
