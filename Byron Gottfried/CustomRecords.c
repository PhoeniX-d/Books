#include<stdio.h>
#include<string.h>
#define TRUE	1

typedef struct 
{
	int month;
	int day;
	int year;
} date;

typedef struct 
{
	char  name[80];
	char  street[80];
	char  city[80];
	int   acc_no;
	char  acc_type;
	float old_bal;
	float new_bal;
	float payment;
	date  last_payment;
} record;

record readscreen(record customer);
void writefile(record customer);

FILE *fp;

int main()
{
	int flag = TRUE	;
	record customer;

	if(( fp = fopen("records.dat", "w")) == NULL)
	{
		printf("Cannot open file!\n");
		fclose(fp);
		return 1;
	}

	printf("CUSTOMER BILLING SYSTEM\n\n");
	printf("Please enter todat\'s date (mm/dd/yy): ");
	scanf("%d/%d/%d", &customer.last_payment.month, 
	      				 &customer.last_payment.day,
	      				 &customer.last_payment.year);
	customer.new_bal = 0;
	customer.payment = 0;
	customer.acc_type = 'C';
	while(flag)
	{
		printf("\nName (enter \'END\' to finish): ");
		scanf(" %[^\n]", customer.name);
		fprintf(fp, "\n%s\n", customer.name);

		if(strcmpi(customer.name, "END") == 0)
			break;

		customer = readscreen(customer);
		writefile(customer);

	}

	if(fclose(fp))
	{
		printf("Cannot close file\n");
		return 1;
	}

	return 0;
}

record readscreen(record customer)
{
	printf("Street : ");
	scanf(" %[^\n]", customer.street);
	printf("City : ");
	scanf(" %[^\n]", customer.city);
	printf("Account No: ");
	scanf("%d", &customer.acc_no);
	printf("Current balance : ");
	scanf("%f", &customer.old_bal);

	return customer;
}

void writefile(record customer)
{
	fprintf(fp, "Street: %s\n", customer.street);
	fprintf(fp, "City: %s\n", customer.city);
	fprintf(fp, "Account No: %d\n", customer.acc_no);
	fprintf(fp, "Account Type: %c\n", customer.acc_type);
	fprintf(fp, "Balance: %.2f\n", customer.old_bal);
	fprintf(fp, "Current Balance: %.2f\n", customer.new_bal);
	fprintf(fp, "Payment: %.2f\n", customer.payment);
	fprintf(fp, "Date: %2d/%2d/%4d\n", customer.last_payment.month,
	        			customer.last_payment.day,
	        			customer.last_payment.year);

}