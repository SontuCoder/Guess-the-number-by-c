#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
  	int ran_num;
  	srand(time(NULL));
 	ran_num=(rand()%100);
    printf("Enter any number between 0 and 100: \n");
 	while(1==1)
	{
	    int num;
	    printf(":");
 	    scanf("%d",&num);
		if( num>ran_num )
        {
   	    printf("The number is less then %d\n",num);
        }
        else if(num<ran_num)
        {
   	    printf("The number is greater then %d\n",num);  	   
        }
        else 
        {
   	    printf("Congratulation!!! you have guessed the number...");
   	    goto end;
        }
	}
	end:
	 	printf("\n");
}
