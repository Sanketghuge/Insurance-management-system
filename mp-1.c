#include <stdio.h>
#include<string.h>
#include<stdlib.h>


/*Declaration of functions*/
int customer_menu();
int old_customer();
int new_policy();
int new_customer(char a[]);
int agent_menu();
int new_agent();
int old_agent();

/* declaration of structures */

struct customer
{
	char firstName[20],lastName[20],state[20],policy_name[50],agentName[50];
	int age,pin;
	long long int salary;
	int counter,customerCode;
};

struct agent
{
	char firstName[20],lastName[20],state[20],category[50];
	int age,no_of_policy_sold,agentCode,counter,pincode;
	long long int salary; 
};

int new_customer(  char a[])
{
	struct customer ak,temp;	     //structure variable

	FILE *fp , *fp1;  

	fp1=fopen("customer.txt","r");
	if (fp1 == NULL)
    {
        ak.counter=1;
    }
    else
    {
    	while(fread(&temp, sizeof(struct customer), 1, fp1));  //fetch all data from file at last the max entry country is present and that is incremented as follows
    	ak.counter=temp.counter+1;  
    	fclose (fp1);
    }


	fp= fopen("customer.txt","a+");
	
	
	printf("\n Your selected policy is::%s\n",a);
	
	//coping array to structure array
	for(int i=0;i<50;i++)
		ak.policy_name[i]=a[i];     

	printf("Enter your data that required for policy confirmation\n");
	printf("First name:");
	scanf("%s",ak.firstName);
	printf("Last name:");
	scanf("%s",ak.lastName);
	printf("Age:");
	scanf("%d", &ak.age);
	printf("State:");
	scanf("%s",ak.state);
	printf("PIN code:");
	scanf("%d", &ak.pin);
	printf("Salary per annum:");
	scanf("%lld", &ak.salary);
	printf("Enter your Agent name:");
	scanf("%s",ak.agentName);
	printf("Successful!!\n");
	ak.customerCode=1024+ak.counter;
	

	printf("\nYour details are:\n");
	printf("Your policy is :%s\n",ak.policy_name);
	printf("First name :%s\n",ak.firstName);
	printf("Last name :%s\n",ak.lastName);
	printf("Age :%d\n",ak.age);
	printf(" State :%s\n",ak.state);
	printf("Pin code :%d\n",ak.pin);
	printf("Salary :%lld\n",ak.salary);
	printf("Agent name :%s\n",ak.agentName);
	printf("Your code for further login is ::%d\n",ak.customerCode);
	
	fwrite (&ak, sizeof(struct customer), 1, fp);
	fclose (fp);
	
	return 0;
}	

int new_policy()
{
	int age;
	printf("\nWe provide policies which contains the age groups as follows:\n");
	printf("1. 0-55\n");
	printf("2. 8-55\n");
	printf("3. 8-59\n");
	printf("4. 15-55\n");
	printf("5. 18-50\n");
	printf("6. 18-55\n");
	printf("Select your age group plan:");
	scanf("%d",&age);

	switch(age)
	{
		case(1):
		{		
			int ch;		
			printf("\nwe have following policies:\n");
			printf("1. Bima Jyoti\n");
			printf("2. Back\n");
			printf("3. Exit\n");
			printf("Select your required policy\n");
			printf("Enter your choice::");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case(1):
					new_customer("Bima Jyoti");
					return 0;
				case(2):
					new_policy();   //recursion
					return 0;
				case(3):
					return 0;
			}
		}

		case(2):
		{
			int ch;		
			printf("\nwe have following policies:\n");
			printf("1. Endowment\n");
			printf("2. Jeevan Stambha\n");
			printf("3. Adhar Shila\n");
			printf("4. Back\n");
			printf("5. Exit\n");
			printf("Select your required policy\n");
			printf("Enter your choice::");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case(1):
					new_customer("Endowment");
					return 0;
				case(2):
					new_customer("Jeevan Stambha");
					return 0;
				case(3):
					new_customer("Adhar Shila");
					return 0;
				case(4):
					new_policy();   //recursion
					 return 0;
				case(5):
					return 0;
			}
		}

		case(3):
		{
			int ch;		
			printf("\nwe have following policies:\n");
			printf("1. Jeevan Labh\n");
			printf("2. Back\n");
			printf("3. Exit\n");
			printf("Select your required policy\n");
			printf("Enter your choice::");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case(1):
					new_customer("Jeevan Labh");
					return 0;
				case(2):
					new_policy();   //recursion
					return 0;
				case(3):
					return 0;
			}
		}
		case(4):
		{
			int ch;		
			printf("\nwe have following policies:\n");
			printf("1. Jeevan Umang\n");
			printf("2. Back\n");
			printf("3. Exit\n");
			printf("Select your required policy\n");
			printf("Enter your choice::");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case(1):
					new_customer("Jeevan Umang");
					return 0;
				case(2):
					new_policy();   //recursion
					return 0;
				case(3):
					return 0;
			}
	
		}
		case(5):
		{
			int ch;		
			printf("\nwe have following policies:\n");
			printf("1. Jeevan Laksha\n");
			printf("2. Jeevan Aanand\n");
			printf("3. Back\n");
			printf("4. Exit\n");
			printf("Select your required policy\n");
			printf("Enter your choice::");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case(1):
					new_customer("Jeevan Laksha");
					return 0;
				case(2):
					new_customer("Jeevan Aanand");
					return 0;
				case(3):
					new_policy();   //recursion
					return 0;
				case(4):
					return 0;
			}
		}
		case(6):
		{		
			int ch;		
			printf("\nwe have following policies:\n");
			printf("1. Micro Bachat\n");
			printf("2. Back\n");
			printf("3. Exit\n");
			printf("Select your required policy\n");
			printf("Enter your choice::");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case(1):
					new_customer("Micro Bachat");
					return 0;
				case(2):
					new_policy();   //recursion
					return 0;
				case(3):
					return 0;
			}
		}
	}
	return 0;
}

int old_customer()
{
	struct customer ak;
	int code;

	printf("\nEnter your customer code:");
	scanf("%d",&code);

	FILE *fp;
	fp=fopen("customer.txt","r");

	if (fp == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
      
    // read file contents till end of file
    while(fread(&ak, sizeof(struct customer), 1, fp))
    {
    	if(ak.customerCode==code)
    	{
    		printf("\nYour details are:\n");
			printf("Your policy is :%s\n",ak.policy_name);
			printf("First name :%s\n",ak.firstName);
			printf("Last name :%s\n",ak.lastName);
			printf("Age :%d\n",ak.age);
			printf(" State :%s\n",ak.state);
			printf("Pin code :%d\n",ak.pin);
			printf("Salary :%lld\n",ak.salary);
			printf("Agent name :%s\n",ak.agentName);
    	}
    }
  
    // close file
    fclose (fp);
    return 0;
	
}


int customer_menu()
{
	
	while(1)
	{
		int choice;	
		
		printf("\nSelect your category\n");
		printf("1.Old customer\n");
		printf("2.New customer\n");
		printf("3.Exit\n");
		printf("Enter your choice::");
		scanf("%d",&choice);
		

		if(choice)
		{	
			switch(choice)
			{
				case(1):
					old_customer();
					return 0;
				case(2):
					new_policy();
					return 0;
				case(3):
					return 0;
				default:
					printf("Invalid input!!\n");
					break;
			}
		}
		else
		{
			printf("Plese enter correct input!!!\n");
			
		}
	}
	
}

int new_agent()
{
	struct agent ak,temp;
	int age;

	FILE *fp,*fp1;
	fp1=fopen("agent.txt","r");

	if (fp1 == NULL)
    {
        ak.counter=1;
    }
    else
    {
    	while(fread(&temp, sizeof(struct agent), 1, fp1));  //fetch all data from file at last the max entry  is present and that is incremented as follows
    	ak.counter=temp.counter+1;  
    	fclose (fp1);
    }


	fp= fopen("agent.txt","a+");


	printf("\nNote: Your age should be greater than 18.\n");
	printf("Enter your details\n");
	printf("First name :");
	scanf("%s",ak.firstName);
	printf("Last name :");
	scanf("%s",ak.lastName);
	printf("Age :");
	
	do{
		scanf("%d",&age);
		if(age>18)
		{
			break;
		}
		else
			printf("age should greater than 18\nAge :");

	}while(age<=18);
	ak.age=age;
	printf("State :");
	scanf("%s",ak.state);

	printf("Pincode :");
	scanf("%d",&ak.pincode);
	printf("Policies sold in previous organization :");
	scanf("%d",&ak.no_of_policy_sold);

	if(ak.no_of_policy_sold >0 && ak.no_of_policy_sold <999)
		strcpy(ak.category,"BRANCH MANAGER CLUB MEMBER");
	else if(ak.no_of_policy_sold >=1000 && ak.no_of_policy_sold <1999)
		strcpy(ak.category,"DIVISIONAL MANAGER CLUB MEMBER");
	else if(ak.no_of_policy_sold >=2000 && ak.no_of_policy_sold <2999)
		strcpy(ak.category,"ZONAL MANAGER CLUB MEMBER");
	else if(ak.no_of_policy_sold >=3000)
		strcpy(ak.category,"CHAIRMAN CLUB MEMBER");

	printf("Salary :");
	scanf("%lld",&ak.salary);



	printf("\nYour details are\n");
	printf("First name :%s\n",ak.firstName);
	printf("Last name :%s\n",ak.lastName);
	printf("Age :%d\n",ak.age);
	printf("State :%s\n",ak.state);
	printf("Pincode :%d\n",ak.pincode);
	printf("Policies sold :%d\n",ak.no_of_policy_sold);
	printf("Salary :%lld\n",ak.salary);
	printf("categoary :%s\n",ak.category);
	ak.agentCode=7024+ak.counter;
	printf("Your code for further login is ::%d\n\n",ak.agentCode);

	fwrite (&ak, sizeof(struct agent), 1, fp);
	fclose (fp);
	
	return 0;

}

int old_agent()
{
	struct agent ak;
	int code;

	printf("\nEnter your Agent code:");
	scanf("%d",&code);

	FILE *fp;
	fp=fopen("agent.txt","r");

	if (fp == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
      
    // read file contents till end of file
    while(fread(&ak, sizeof(struct agent), 1, fp))
    {
    	if(ak.agentCode==code)
    	{
    		printf("\nYour details are\n");
			printf("First name :%s\n",ak.firstName);
			printf("Last name :%s\n",ak.lastName);
			printf("Age :%d\n",ak.age);
			printf("State :%s\n",ak.state);
			printf("Pincode :%d\n",ak.pincode);
			printf("Policies sold :%d\n",ak.no_of_policy_sold);
			printf("Salary :%lld\n",ak.salary);
			printf("categoary :%s\n",ak.category);
    	}
    }
  
    // close file
    fclose (fp);
    return 0;
}

int agent_menu()
{
	
	while(1)
	{
		int choice;	
		
		printf("\nSelect your category\n");
		printf("1.Old Agent\n");
		printf("2.New Agent\n");
		printf("3.Exit\n");
		printf("Enter your choice::");
		scanf("%d",&choice);
		

		if(choice)
		{	
			switch(choice)
			{
				case(1):
					old_agent();
					return 0;
				case(2):
					new_agent();
					return 0;
				case(3):
					return 0;
				default:
					printf("Invalid input!!\n");
					break;
			}
		}
		else
		{
			printf("Plese enter correct input!!!\n");
			
		}
	}
	
}

int main()
{	
	while(1)
	{
		int choice;
		printf("Welcome to\n");

		printf(" ___   __  __   ____\n|_ _| |  \\/  | / ___|\n | |  | |\\/| | \\___ \\\n | |  | |  | |  ___) |\n|___| |_|  |_| |____/\n " );  //IMS logo

		printf("                       Insurance management system\n\n");
		printf("Who are you ? Select among following: \n");
		printf("1.Customer\n");
		printf("2.Agent\n");
		printf("3.Exit\n");
		printf("Enter your choice::");
		scanf("%d",&choice);

		switch(choice)
		{
			case(1):
				customer_menu();
				break;
			case(2):
				agent_menu();
				break;
			case(3):
				return 0;
			default:
				printf("Invalid input!!\n");
				break;
		}
	}
	

}
