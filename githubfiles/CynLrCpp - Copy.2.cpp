
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
#define MAX 10000

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

int rand_arr[MAX];
static int writecounter = 0;
static int readcounter = 0;

	//std::mutex m1;
	pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
	pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;
	//pthread_mutex_lock(&mutex1); 
	void* foo(void*)
	{
		//pthread_exit(NULL); 	
		//pthread_detach(pthread_self());
		while(true)
		{	
			//if(readcounter == 10000)
			//m1.lock();
			pthread_mutex_lock(&mutex1); 
			if(readcounter >= MAX)
			{
			 	//memset(rand_arr,'\0',10000);		 	
				//writecounter = 0;
				//readcounter = 0;
				//return NULL;
				//m1.unlock();
				pthread_mutex_unlock(&mutex1); 
				pthread_exit(NULL); 
				//return NULL;				
			}
			if(writecounter>=9)
			{
				
				if(writecounter==9)		
				{
					//readcounter = writecounter - 5;
					readcounter = 4;
				}			
				if(writecounter >= readcounter )
				{	
					//m1.lock();
			 		cout<<"readcounter : " <<readcounter<<"\n";	
					cout<<"writecounter : "<<writecounter<<"\n";
					
				    double total = 0;
					double prec[] = {0.00025177,  0.008666992 ,  0.078025818 ,  0.24130249  ,  0.343757629 ,  0.24130249  ,  0.078025818 ,  0.008666992  ,  0.000125885 } ;   
					//clock_t start, end;		
					int num1 = 0;
			
					int j = 0;
					for(int i = readcounter - 4 ; (i< readcounter + 6) & (j < 10); i++, j++)
					{	
						total += rand_arr[i]*prec[j];
					}
					//printf("total :  %0.20f\n", total);				
					readcounter++;					
					//m1.unlock();					 							
				}	
			}
			pthread_mutex_unlock(&mutex1); 
			//m1.unlock();					 							
			//cout<<"Read Thread\n";
		}
		//return NULL;
		//pthread_exit(NULL); 
	}
	
	int counter = 0;
	int num = 0;
	//std::mutex m;	
	void* foo1(void*)
	{
		//pthread_exit(NULL); 	
		//pthread_detach(pthread_self());
		//memset(rand_arr,'\0',100);
		while (true)
		{
			//m.lock();
			pthread_mutex_lock(&mutex2); 
			/*
		 	if(writecounter  == 500)
			{
				Sleep(500);
			} 
			*/ 
			//Sleep(0.00005);			
			if(writecounter >= MAX)
			{
			 	//memset(rand_arr,'\0',10000);		 	
				//writecounter = 0;
				//readcounter = 0;
				//return NULL;
				//m.unlock();
				pthread_mutex_unlock(&mutex2); 
				pthread_exit(NULL); 
				//return NULL;				
			}
			 //m.lock();
		     #if 1
			 //clock_t start, end;
	 
		     //start = clock();		
			 num = rand();
			 if(writecounter >= 9999)
			 {
			 	cout<<"heheheh";
			 }
			 writecounter = writecounter + 1;
			 rand_arr[writecounter] = num;
			 //m.lock();
			 //cout<<"writecounter : "<<writecounter<<"\n";
			 
			 
		     //end = clock();	 	     
		     printf("\n");	  
			 #endif
			 //m.unlock();			 
			pthread_mutex_unlock(&mutex2); 
		}
		//return NULL;
		//pthread_exit(NULL); 
	}
	


int main(int argc, char** argv )
{
		/*
		int m = atoi(argv[1]);
		int TV = 1.1;
		int ProcessTime = atoi(argv[3]);
		int Time = ProcessTime * 1000;
		*/
		int num = 0;
		int i = 42;
		
	    int counter = 0;
	    memset(rand_arr,'\0',100);
    
		pthread_t t1;  // = NULL;
		pthread_attr_t* atr = NULL;
		void* (*func) (void*) = NULL;
		void* arg = NULL;
		func = foo;

	
		clock_t start, end;
 	    double cpu_time_used;
 	    start = clock();


		pthread_t t2;  // = NULL;
		func = foo1;
		pthread_create(&t2, atr, func, arg);
		if (t2 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res1 = NULL;

		pthread_attr_t* atr1 = NULL;
		void* arg1 = NULL;
		func = foo;
		pthread_create(&t1, atr1, func, arg1);
		if (t1 != NULL)
		{
			std::cout << "thread created\n";
		}
		void** res = NULL;

		pthread_t t3;  // = NULL;
		pthread_attr_t* atr2 = NULL;
		void* arg2 = NULL;
		func = foo;
		pthread_create(&t3, atr2, func, arg2);
		if (t3 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res2 = NULL;
		
		#if 1
		pthread_t t4;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t4, atr, func, arg);
		if (t4 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res3 = NULL;
		
		pthread_t t5;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t5, atr, func, arg);
		if (t5 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res4 = NULL;		
		
		
		pthread_t t6;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t6, atr, func, arg);
		if (t6 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res5 = NULL;	
		
		
		pthread_t t7;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t7, atr, func, arg);
		if (t7 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res6 = NULL;					

		pthread_t t8;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t8, atr, func, arg);
		if (t8 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res7 = NULL;				
		
		pthread_t t9;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t9, atr, func, arg);
		if (t9 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res8 = NULL;								
		
		pthread_t t10;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t10, atr, func, arg);
		if (t10 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res9 = NULL;								


		pthread_t t11;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo;
		pthread_create(&t11, atr, func, arg);
		if (t11 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res10 = NULL;								


		pthread_t t12;  // = NULL;
		atr = NULL;
		arg = NULL;
		func = foo1;
		pthread_create(&t12, atr, func, arg);
		if (t12 != NULL)
		{
			std::cout << "thread one created\n";
		}
		void** res11 = NULL;


               pthread_t t13;  // = NULL;
                atr = NULL;
                arg = NULL;
                func = foo1;
                pthread_create(&t13, atr, func, arg);
                if (t13 != NULL)
                {
                        std::cout << "thread one created\n";
                }
                void** res12 = NULL;

                pthread_t t14;  // = NULL;
                atr1 = NULL;
                arg1 = NULL;
                func = foo1;
                pthread_create(&t14, atr1, func, arg1);
                if (t14 != NULL)
                {
                        std::cout << "thread one created\n";
                }
                void** res13 = NULL;



                #endif
					
				#if 1
                 pthread_join(t2,res1);
                 pthread_join(t1,res);
                 //pthread_join(t2,res1);
                 
                 pthread_join(t3,res2);
                 pthread_join(t4,res3);
                 
                 pthread_join(t5,res4);
                 pthread_join(t6,res5);
                 
                 pthread_join(t7,res6);
                 pthread_join(t8,res7);
                 
                 pthread_join(t9,res8);
                 
                 pthread_join(t10,res9);
                 pthread_join(t11,res10);
                 /**/
                 pthread_join(t12,res11);
                 pthread_join(t13,res12);
                 pthread_join(t14,res13);
			 	#endif
		 
		cout<<"Final\n"; 
		cout<<"readcounter : " <<readcounter<<"\n";	
		cout<<"writecounter : "<<writecounter<<"\n";		 
		 end = clock();	 	 
 		 cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; 	
		 printf("fun() took %0.20f seconds to execute \n", cpu_time_used);	 		  	 
		 //pthread_join(t4,res3);	
		//pthread_exit(NULL);		
		//pthread_exit(NULL); 	 		 
		return 1; 	
}

