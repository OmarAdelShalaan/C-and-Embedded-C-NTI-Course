#include <stdio.h>

int main() {
    int num;
    printf("enter num: ");
    scanf("%d",&num);
	switch(num > 0)
	{
		case 1:
			printf("that is positive\n");
			break;
		case 0:
		switch(num < 0)
	    {
		case 1:
			printf("that is negative\n");
			break;
		case 0:
			printf("that is zero\n");
			break;
	    }
	}
	

    return 0;
}
