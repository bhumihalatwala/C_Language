#include <stdio.h>
#include <string.h>

int main() {
    char pass[50];
    int i;
    int hasSpecial = 0, hasNumber = 0, hasUpper = 0, hasLower = 0;
    
    printf("Create your password: ");
    scanf("%s", pass);  
    
    printf("\n");
    
    if(strlen(pass) >= 6) {
        // Check each character in the password
        for(i = 0; i < strlen(pass); i++) 
		{
            if(pass[i] == '@' || pass[i] == '#' || pass[i] == '$') 
			{
                hasSpecial = 1;
            }
            if(pass[i] >= '0' && pass[i] <= '9') 
			{
                hasNumber = 1;
            }
            if(pass[i] >= 'A' && pass[i] <= 'Z') 
			{
                hasUpper = 1;
            }
            if(pass[i] >= 'a' && pass[i] <= 'z') 
			{
                hasLower = 1;
            }
        }
        
        if(!hasSpecial||!hasNumber||!hasUpper||!hasLower)
        {
	        // Check if all requirements are met
	        if(!hasSpecial) 
			{
	            printf("Add 1 Special character\n");
	        }
	        if(!hasNumber) 
			{
	            printf("Add 1 number\n");
	        }
	        if(!hasUpper) 
			{
	            printf("Add 1 uppercase\n");
	        }
	        if(!hasLower) 
			{
	            printf("Add 1 lowercase\n");
	        }
		}
	    else 
		{
	        printf("Your password is strong\n");
	    }
    }
    else 
	{
        printf("Make Pass more than 6 characters\n");
    }
    
    return 0;
}
