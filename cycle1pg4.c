#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void display();
int front=-1,rear=-1,item,size=5 ,a[10];
void main()
{
	int opt;
	do
	{
		printf("\n enter your option\n1.insertion\n2.deletion\n3.display\n4.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
          		case 1:insertion();
				break;
          		case 2:deletion();
                 		break;
          		case 3:display();
                	       break;
          		case 4:exit(0);
                	       break;
			default:printf("\n invaid entry");
		}
	}
	while (opt!=4);
}

void insertion()
{
	if(front==(rear+1)%size)
	  {
	    printf("queue is full");
	  }
        else{
		printf("\n enter the item \n");
                scanf("%d",&item);
		if(front==-1&&rear==-1)
		{
			front=0;
			rear=0;
			a[front]=item;
		}
		else
		{
			rear=(rear+1)%size;
			a[rear]=item;
		}
	}
}

void deletion()
{
	if(front==-1)
	{
		printf("no element");
	}
	else if (front==rear)
	{
		printf("\n the element to be deleted is%d\n",a[front]);
		front=rear=-1;
	}
	else
	{
		printf("\n the element to be deleted is %d\n",a[front]);
		front=(front+1)%size;
	}
}

void display()
{
	int temp;
	temp=front;
	if((temp==-1)&&(rear==-1))
	{
		printf("no element");
	}
	else
	{
		printf("\n queue element are \n");
		while(temp>-1)
		{
			printf("%d\n",a[temp]);
			if (temp == rear)
			{
			  break;
			}
			temp=(temp+1)%size;
		}
	}
}







