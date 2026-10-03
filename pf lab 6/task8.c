#include<stdio.h>
int main()
{
	int arr[10];
	int size =8;
	int largest,smallest,i;
	
	
	
	printf("Enter the 8  Numbers\n");
	for(i=0;i<size;i++){
	
	scanf("%d",&arr[i]);

}
    // printing the array
  
    for(i=0;i<size;i++){


	printf("%d", arr[i]);
}
   printf("\n\n\n");
   // largest and smallest
   largest=arr[0];
   smallest=arr[0];
   
   for(i=0;i<size;i++){
   	if(arr[i]>largest){
   		largest=arr[i];
	   }
	   if(arr[i]<smallest){
	   	smallest=arr[i];
	   }
   }
   
   
   printf("largest element %d\n",largest);
   printf("Smallest element %d",smallest);
   
   
   // declearing 
   
  int search_num,found_index;
  found_index=-1;
  printf("Enter the search number");
  scanf("%d",&search_num);
  
  for(i=0;i<size;i++){
  	if(arr[i]==search_num){
  		found_index=i;
  		break;
		  }
	  }
	  if(found_index!= -1){
	  	printf("Number %d found at index %d\n ",search_num,found_index);
	  	
	  }
	  else {printf("Number %d is not found in the index",search_num);
	  }
	  // declareing variable
	  int insert_pos,insert_val;
	  printf("Enter no to insert_Value");
	  scanf("%d",&insert_val);
	  
	  printf("Enter no to insert position");
	  scanf("%d",&insert_pos);
	   
	   for(i=size-1;i>insert_pos;i--){
	   
	  arr[i+1]=arr[i];
     }
     arr[insert_pos]= insert_val;
     
     size++;
     
     
     printf("\nArray after insertion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int del_pos;
	  
	  
	  
	  
  	
  	printf("\nEnter index position to delete (0 to %d): ", size - 1);
    scanf("%d", &del_pos);

    for(i = del_pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("\nArray after deletion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
  }
   
  
   

   
    

