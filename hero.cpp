#include<iostream>

using namespace std;

int min_partion_num(char *str)
{
	int count=0;
	int num0=0,num1=0;
	int c0=0,c1=0;
	int len=strlen(str);
	char *p=str;
    for(int i=0;i<len;i++)
	{
		if(p[i]-'0'==0) num0++;
		else if(p[i]-'1'==0) num1++;
	}
	for(i=0;i<len;i++)
	{
		if(p[i]-'0'==0) c0++;
		else if(p[i]-'1'==0) c1++;
		
		if(c0 > num0/2 || c1 > num1/2)
		{
			count++;
			c0=(p[i]-'0')?0:1;
            c1=(p[i]-'0')?1:0;
		}
		
	}
	return count;
}
int main()
{
	char *s="000011";
    
	cout<<min_partion_num(s)<<endl;
	getchar();

	return 0;
}