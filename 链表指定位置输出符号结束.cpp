#include<stdio.h>
#define maxsize 100
typedef int elemtype;
typedef struct
{
	elemtype elem[maxsize];
	int length;
}Sqlist;
void Initlist(Sqlist &L) // 初始化表 L
{
	L.length=0; 
}
void Creatlist(Sqlist &L)
{
	int i;
	scanf("%d\n",&L.length);
	for(i=0;i<L.length;i++)
	scanf("%d",&L.elem[i]);
	for(i=0;i<L.length;i++)
	printf("%5",L.elem[i]);
}
void Insertlist(Sqlist &L,int j,int e) // 插入操作
{
	int i;
	for(i=L.length;i>=j-1;i--)
	L.elem[i+1]=L.elem[i];
	L.elem[j-1]=e;
	L.length=L.length+1;
}
void Deletelist(Sqlist &L,int j) // 删除元素
{
	int i;
	for(i=j-1;i<L.length-1;i++)
	L.elem[i]=L.elem[i+1];
	L.length=L.length-1;
	printf(" 新的线性表序列为： ");
	for(i=0;i<L.length;i++)
	printf("%3d",L.elem[i]);
	printf("\n");
}
int main() 
{
	Sqlist L;
	int j,e;
	printf(" 请定义表长和元素： ");
	Initlist(L);
	Creatlist(L);
	printf(" 请输入插入的位置： ");
	scanf("%d",&j); 
	printf(" 请输入插入的元素： ");
	scanf("%d",&e);
	Insertlist(L,j,e);
	printf(" 请输入删除的元素： ");
	scanf("%d",&j);
	Deletelist(L,j);
}
