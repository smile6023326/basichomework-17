#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5]={0};
	int i=0,min;
	printf("-----�M��̤p��-----\n");
	printf("�s���J5�Ӽƭ�\n");
	for (i=0;i<5;i++)
	{
		printf("��J��%d�Ӹ��:",i+1);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("�̤p��:%d\n\n",min);
	system("pause");
	return 0;
}
