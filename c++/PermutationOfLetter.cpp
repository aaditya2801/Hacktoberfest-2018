#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 200
float fact(int num)
{
	int i;
	float result=1;
	for(i=1;i<=num;i++)
	{
		result=result*i;
	}	
	return result;
	
}
main()
{
	float perm=1;
	int freq[max],i=0,j=0,k,top=0,flag,count=0,l=0,m=0;
	char str[max],alpha[max];
	printf("\nEnter a string\n");
	gets(str);
	while(str[m]!='\0')
	{
		str[m]=toupper(str[m]);
		m++;
	}
	while(str[i]!='\0')
	{
		count=0;
		flag=0;
		if(isalpha(str[i]))
		{
			for(k=0;k<=top;k++)
			{
				if(str[i]==alpha[k])
				{
					flag=1;
					break;
				}
			
			}
			if(flag!=1)
			{
				alpha[top]=str[i];
				top++;
			}
		}
		i++;
	}
	alpha[top]='\0';
	j=0;
	while(alpha[j]!='\0')
	{
		i=0;
		count=0;
		while(str[i]!='\0')
		{
			if(alpha[j]==str[i])
			{
				count++;
			}
			i++;
		}
		freq[j]=count;
		j++;
	}
	for(i=0;i<top;i++)
	{
		perm = perm*fact(freq[i]);
	}
	perm = fact(strlen(str))/perm;
	printf("Total Permutations = %f\n",perm);
}
