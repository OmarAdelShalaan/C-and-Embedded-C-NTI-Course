#include <stdio.h>

int main() {
    int id, flag = 1;
    
    while(flag)
	{
	    printf("enter ID: ");
        scanf("%d",&id);
		switch(id)
		{
			case 1234:
				printf("hello, Amr\n");
				flag = 0;
				break;	
			case 5678:
				printf("hello, Maha\n");
				flag = 0;
				break;
			case 9101:
				printf("hello, Ahmed\n");
				flag = 0;
				break;
			default:
			printf("Not Found ID\n");
		}
	}

    return 0;
}
