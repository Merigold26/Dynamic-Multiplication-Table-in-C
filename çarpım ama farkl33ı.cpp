// satir sütün sayýsý klavyeden girilen çarpim tablosu yapan c kodu

#include <stdio.h>

int main()
{
	int i,j,satir,sutun;
	printf("satir sayisini giriniz : ");
	scanf("%d",&satir );
	printf("sutun sayisini giriniz : ");
	scanf("%d",&sutun);
	for (i=1;i<=satir;i++)
	{
		for(j=1;j<=sutun;j++)
		{
		printf("%d x %d = %d         ", i , j , i * j);
}
	}
	
	printf("\n");
}
