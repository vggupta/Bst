#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* node, int key)
{
     if (node == NULL) return newNode(key);

      if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);


    return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

int main()
{struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);


    inorder(root);
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	cout<<x<<y;


		for(int i=0;i<289;i++)
		{
		    cleardevice();
		    setcolor(GREEN);
		    circle(i,89,30);
		delay(10);
		}
		outtextxy(289,79,"5");

		for(int i=0;i<289;i++)
		{  		delay(10);
		    cleardevice();
		    line(i,i-172,i-76,i-109);

		circle(289,89,30);

		}
		for(int i=0;i<289;i++)
		{   delay(10);
		    cleardevice();
		    line(i,i-172,i+76,i-109);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		}
		for(int i=0;i<200;i++)
		{delay(10);
		    cleardevice();
		    setcolor(RED);
		circle(i,210,30);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		}
		outtextxy(200,200,"3");

		for(int i=365;i<200;i++)
		{delay(10);
		    cleardevice();
		    setcolor(RED);
		circle(i,210,30);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		}
        outtextxy(365,200,"6");
        for(int i=0;i<200;i++)
		{ delay(10);
		    cleardevice();
        setcolor(BLUE);
        line(i,i+38,i-99,i+130);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		}
		for(int i=0;i<200;i++)
		{    delay(10);
		    cleardevice();
        setcolor(BLUE);
		line(i,i+38,i+56,i+130);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		}
		for(int i=0;i<365;i++)
		{  delay(10);
		    cleardevice();
		setcolor(BLUE);
		line(i,i-127,i-79,i-35);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		line(200,200+38,200+56,200+130);
		}
    for(int i=0;i<365;i++)
		{  delay(10);
        cleardevice();
		setcolor(BLUE);
		line(i,i-127,i+61,i-35);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		line(200,200+38,200+56,200+130);
		line(365,365-127,365-79,365-35);
		}
		for(int i=0;i<111;i++)
		{delay(10);
		    cleardevice();
		    setcolor(YELLOW);
		circle(i,361,30);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		line(200,200+38,200+56,200+130);
		line(365,365-127,365-79,365-35);
		line(365,365-127,365+61,365-35);
		}
		outtextxy(111,351,"1");
		for(int i=0;i<259;i++)
		{  cleardevice();
		delay(10);
		setcolor(YELLOW);
		circle(i,361,30);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		line(200,200+38,200+56,200+130);
		line(365,365-127,365-79,365-35);
		line(365,365-127,365+61,365-35);
		circle(111,361,30);
		}
		outtextxy(259,351,"4");
		for(int i=0;i<315;i++)
		{   delay(10);
		    cleardevice();
		    setcolor(YELLOW);
		circle(i,345,30);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		line(200,200+38,200+56,200+130);
		line(365,365-127,365-79,365-35);
		line(365,365-127,365+61,365-35);
		circle(111,361,30);
		circle(259,361,30);
		}
		outtextxy(315,335,"5.5");
		for(int i=0;i<454;i++)
		{   delay(10);
		    cleardevice();
		    setcolor(YELLOW);
		circle(i,345,30);

		circle(289,89,30);
		line(289,289-172,289-76,289-109);
		line(289,289-172,289+76,289-109);
		circle(200,210,30);
		circle(365,210,30);
		line(200,200+38,200-99,200+130);
		line(200,200+38,200+56,200+130);
		line(365,365-127,365-79,365-35);
		line(365,365-127,365+61,365-35);
		circle(111,361,30);
		circle(259,361,30);
		circle(315,345,30);
		}
		outtextxy(454,335,"8");
getch();
}
