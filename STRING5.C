#include <stdio.h>
#include <string.h>

int main() {
    char pass[50],mail[50],password[50],email[50];
    int i;
    
    printf("Enter your Email: ");
    scanf("%s", mail);
	printf("Enter your password: ");
    scanf("%s", pass);  
    
    printf("\n");
    
    strcpy(email,"admin@gmail.com");
    strcpy(password,"123456");
    
	if(strcmp(mail,email)==0 && strcmp(pass,password)==0)
	{
		printf("Login Successful...");
	}
    else
    {
    	printf("Login Failed: Invalid Credentials");
	}
    return 0;
}
