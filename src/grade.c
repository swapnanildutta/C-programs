#include <stdio.h>
int main()
{
    int g;
    printf("Enter the grade: ");
    scanf("%d",&g);
    g/=10;
    switch(g){
    	case 10:
    	break;
    	case 4:
    	break;
    	default:
    		switch(g<4 && g>0){
    			case 1:
    				printf("F(FAIL)");
    				break;
    			case 0:
    				printf("INVALID");
    				break;
    		}
    		
    }
    return 0;
}
