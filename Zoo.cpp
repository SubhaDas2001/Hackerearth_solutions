#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int nz=0, no=0,i,size;
	scanf ("%s",s);
	size=strlen(s);
	for (i=0;i<size;i++)
	{
		if (s[i]=='z')
		nz++;
		else
		no++;
	}
	if (2*nz==no)
	printf ("Yes\n");
	else
	printf ("No\n");

}
