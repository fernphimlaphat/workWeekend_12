#pragma once
#include<stdio.h>

const char* choie(int s)
{
	const char* i[] = { "Deposit","Withdraw","Cancle","Input number","Balance","Not money!"};

	return i[s];
}

void mainchoie()
{
	printf("\t%s     press 1\n\t%s    press 2\n\t%s      press 3\n\nselect : ", choie(0), choie(1), choie(2));
	
}

void mainchoie_1(int save)
{
	
}

void mainchoie_2(int withdraw,int save)
{
	save -= withdraw;

	if (save >= 0)
	{
		printf("\t%s : %d\n", choie(4), save);
	}

	if (save < 0)
	{
		save = save + withdraw;
		printf("\tNot enought\n");
		printf("\t%s : %d\n", choie(4), save);
	}
}

void main1()
{
	struct BankMy
	{
		int select;
		int saveMoney;
		int withdrawMoney;

	}infomation;

	int money = 0;
	int c = 0;
	do
	{
		printf("\n");
		mainchoie();
		scanf_s("%d", &infomation.select);

		if (infomation.select == 1)
		{
			printf("\n\t%s : ", choie(3));
			scanf_s("%d", &infomation.saveMoney);

				money += infomation.saveMoney;

				printf("\t%s : %d\n", choie(4), money);
			
		}

		if (infomation.select == 2)
		{
			if (money > 0)
			{
				printf("\n\t%s : ", choie(3));
				scanf_s("%d", &infomation.withdrawMoney);
				mainchoie_2(infomation.withdrawMoney, money);
			}
		}
		c++;

	} while (infomation.select != 3);

	if(c >= 2 )
	{
		printf("%s : %d", choie(4), money);
	}

}