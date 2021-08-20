#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch(x)
		{
			case 1:
				printf("Food Item:Idly");
				printf("\nPrice:Rs 75");
				break;
			case 2:
				printf("Food Item:Fried Rice");
				printf("\nPrice:Rs 150");
				break;
			case 3:
				printf("Food Item:Biriyani");
				printf("\nPrice:Rs 200");
				break;
			case 4:
				printf("Food Item:Veg cuttlet");
				printf("\nPrice:Rs 60");
				break;
			case 5:
				printf("Food Item:Chicken Tikka");
				printf("\nPrice:Rs 149");
				break;
			default:
				printf("Invalid Choice!!");
				
		}
		return 0;
}
