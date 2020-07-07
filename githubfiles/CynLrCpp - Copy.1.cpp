
// CynLr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <bits/stdc++.h> 
#include <math.h>       
using namespace std; 

#define _CRT_SECURE_NO_WARNINGS 1

int mod = 0;

struct Node {
	int val;
	struct Node* next;
};

struct Node* head;
push(int val)
{
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	temp->next = NULL;
	temp->val = val;
	if((head) == NULL)
	{
		head = temp;
	}
	else
	{
		struct Node* t = head;
		temp->next = t;
		head = temp;
	}
	
}

int rand_arr[100000];
int writecounter = 0;
int readcounter = 0;

	std::mutex m1;
	void* foo(void*)
	{
		while(true)
		{	
		 	m1.lock();
			if(writecounter>=9)
			{
				
				if(writecounter==9)		
				{
					readcounter = writecounter - 5;
				}			
				if(writecounter >= readcounter )
				{	
			 		cout<<"readcounter : " <<readcounter<<"\n";		
				    double total = 0;
					double prec[] = {0.00025177,  0.008666992 ,  0.078025818 ,  0.24130249  ,  0.343757629 ,  0.24130249  ,  0.078025818 ,  0.008666992  ,  0.000125885 } ;   
					clock_t start, end;		
					int num1 = 0;
			
					for(int i = readcounter - 4; i< readcounter + 6; i++)
					{	
						total += rand_arr[i]*prec[i];
					}
					printf("total :  %0.20f\n", total);				
					readcounter++;					
				}	
			}
		
		}
		return NULL;
	}
	
	int counter = 0;
	int num = 0;
	std::mutex m;	
	void* foo1(void*)
	{
		memset(rand_arr,'\0',100000);
		while (true)
		{
		 	if(writecounter  == 500)
			{
				Sleep(500);
			}  
			if(writecounter == 100000)
			{
			 	memset(rand_arr,'\0',100000);		 	
				writecounter = 0;
			}
	
		     #if 1
			 clock_t start, end;
	 
		     start = clock();		
			 num = rand();
			 rand_arr[writecounter++] = num;
			 cout<<"writecounter : "<<writecounter<<"\n";
			 
		     end = clock();	 	     
		     printf("\n");	  
			 #endif
		}
	}
	


int main(int argc, char** argv )
{
		int m = atoi(argv[1]);
		int TV = 1.1;
		int ProcessTime = atoi(argv[3]);
		int Time = ProcessTime * 1000;
		
	int num = 0;
	
    int counter = 0;
    
		pthread_t t1;  // = NULL;
		pthread_attr_t* atr = NULL;
		void* (*func) (void*) = NULL;
		void* arg = NULL;
		func = foo;

	
		pthread_create(&t1, atr, func, arg);
		if (t1 != NULL)
		{
			std::cout << "thread created\n";
		}
	
		
		void** res = NULL;

		pthread_t t2;  // = NULL;
		func = foo1;

	
		pthread_create(&t2, atr, func, arg);
		if (t2 != NULL)
		{
			std::cout << "thread one created\n";
		}
	
		void** res1 = NULL;


		 pthread_join(t1,res);
		 pthread_join(t2,res1);
		 	
}

