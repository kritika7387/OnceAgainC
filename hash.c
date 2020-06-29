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
		//store the value at perticular index which
		//                //is %(module)of size of the table:
		//                                //ex:size 10,temp 587 then(587%10) 7 will be the index
		hash_table[temp % size].value=temp;
		hash_table[temp % size].key=temp%size;
	}
	printf("\n");

	display(hash_table,size);
	search(hash_table,size);
	insert(hash_table,size);

	display(hash_table,size);
	// int a=0;
}


//****Display funtion:display key value pair****//

void display(struct table ar[],int size)
{
	int i;
	printf("value\tkey\n");
	for(i=0;i<size;i++)
	{                                                                                                                               printf("%d\t%d\n",ar[i].value,ar[i].key); 
	}	
}

//****search function: search perticular element present or not****//
 void search(struct table ar[],int size)
{
	int s;
	printf("enter the element you want to serach :");
	scanf("%d",&s);
        
	//here,index in which perticular element is stored,
	//is defined by dividing tota size of table
	

	if(ar[s%size].value=s)
		printf("element exists at %d",s%size);
	else
		printf("element does not exists");
}

//**** insert function:consider collision in index present****//
 void insert(struct table ar[],int size)
{
	int ins;
	printf("enter the element you want to insert");
	scanf("%d",&ins);

	//where the value stored calculate index
	ar[ins%size].value=ins;
}


