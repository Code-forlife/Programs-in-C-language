#include<stdio.h>
#include <string.h>
struct vehicle{
	char reg_no[10],owner[30],address[40];
};
void print_owner(char filename[])
{
	FILE*fp1;
	struct vehicle v;
	int i,n,flag;
	char reg_no[10];
	printf("Enter the number you want to repeat:");
	scanf("%d",&n);
	fp1=fopen(filename,"r");
	for(i=0;i<n;i++)
	{
		flag=0;
		printf("Enter owner's registration no.:");
		scanf("%s",reg_no);
		while(fscanf(fp1,"%[^,],%[^,],%[^\n]\n",v.reg_no,v.owner,v.address)!=EOF)
		{
			if(strcmp(v.reg_no,reg_no)==0)//Trys to find the entered register number
			{
			    printf("FOUND!\n----------------------------------");
				printf("\nName of owner: %s\nAddress of owner: %s",v.owner,v.address);
				printf("\n----------------------------------");
				flag=1;
				break;
			}
		}//end while
		if(flag==0)
		{
			printf("\nSorry, Not found!");
		}
		rewind(fp1);
	}//end-for
	fclose(fp1);
}//end-print_owner
int main()
{
	print_owner("vehicles.txt");
	return 0;
}
