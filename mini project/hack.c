#include<stdio.h>
#include<string.h>
char * substring(char s[],char p[],int no,int length)
{
	int c=0;
	while(c<length)
	{
		p[c]=s[c+no];
		c++;
	}
	p[c]='\0';
	//printf("%s\n",p);
	return p;
}
int findsum(int leng,int itr,char string[])
{
int su=0;
while(itr<leng)
			{if((string[itr]=='a')||(string[itr]=='e')||(string[itr]=='i')||(string[itr]=='o')||(string[itr]=='u')||(string[itr]=='A')||(string[itr]=='E')||(string[itr]=='I')||(string[itr]=='O')||(string[itr]=='U') )
			{su+=1;
			itr++;}}
			return su;
}
int main()
{
	int i,j,k=0,c,len,l,sum=0;
	int T;
	char str[50];
	char sub[40];
	char substr[50];
	scanf("%d",&T);
	while(T--)
	{
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			strcpy(substr,substring(str,sub,i,j));
			//printf("%s\n",substring(str,sub,i,j));
			//printf("%s\n",substr);
			l=strlen(substr);
			sum+=findsum(l,k,substr);
			
		}
	}
	//for(i=0;i<k;i++)
	//{
	//	printf("%s\n",substr[k]);
	//}
		
	}
	printf("%d",sum);
	return 0;
}