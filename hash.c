#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct table
{
	int value;
	int key;
};


void display(struct table[],int size);
void search(struct table[],int size);
void insert(struct table[],int size);

void main()
{
	int size,i,temp;

	printf("enter the size of the table:");
	scanf("%d",&size);

	struct table hash_table[size];
	printf("enter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&temp );
		
		
		hash_table[temp % size].value=temp;
		hash_table[temp % size].key=temp%size;
	}
	printf("\n");

	display(hash_table,size);
	search(hash_table,size);
	insert(hash_table,size);

	display(hash_table,size);
	
}


void display(struct table ar[],int size)
{
	int i;
	printf("value\tkey\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t%d\n",ar[i].value,ar[i].key); 
	}
}


 void search(struct table ar[],int size)
{
	int s;
	printf("enter the element you want to serach :");
	scanf("%d",&s);
        
		

	if(ar[s%size].value=s)
		printf("element exists at %d",s%size);
	else
		printf("element does not exists");
}



void insert(struct table ar[],int size)
{
	int ins;
	printf("enter the element you want to insert");
	scanf("%d",&ins);


	ar[ins%size].value=ins;
}


