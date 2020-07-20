#include<stdio.h>

void PatternDisplay(int iNum)
{
	int iRow,iCol, k = 0;
	int range= (iNum*2)-1;

	for(iRow=1;iRow<=iNum;iRow++)
	{
		k = iRow;
		for(iCol=1;iCol<=range;iCol++)
		{
			if((iCol >= (iNum - iRow) + 1) && (iCol <= (iNum + iRow) - 1))
			{
				printf("%d\t",k);
				(iCol < iNum) ? k++ : k--;
				if(k == 10)
					k = 0;
				if(k == -1)
					k = 9;
			}
			else 
			{
				printf("\t");
			}
		}
		printf("\n");
	}


}
int main()
{
	int iNum=0;

	printf("\n Enter number of elements do you want to print => ");
	scanf("%d",&iNum);

	PatternDisplay(iNum);

	return 0;

}