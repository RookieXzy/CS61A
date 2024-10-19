/*
2023年8月24日14:14:56 
*/

#include <stdio.h>
#include <string.h> //调用strlen()函数 

int main(void)
{
	char F_name[20];
	char L_name[20];
	int Fname,
		Lname;
	
	printf("Enter your name:");
	scanf("%s", F_name);
	printf("Enter your last name:");
	scanf("%s", L_name);
	
	Fname = strlen (F_name);
	Lname = strlen (L_name);
		
	printf("%s %s\n", F_name, L_name); 
	printf("%*d %*d\n", Fname, Fname, Lname, Lname);
	
	printf("%s %s\n", F_name, L_name); 
	printf("%-*d %-*d\n", Fname, Fname, Lname, Lname);
	
	return 0;	
}
