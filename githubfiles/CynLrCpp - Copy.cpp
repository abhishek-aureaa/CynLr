

// CynLr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
//#include <C:\\Interviews\CynLr\CynLr\pthread\include\pthread.h>
#include <pthread.h>
//#include <gsl_rng.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <bits/stdc++.h> 
#include <math.h>       
using namespace std; 

#define _CRT_SECURE_NO_WARNINGS 1


int RAND_WITHDELAY()
{
	Sleep(0.0005);
	return rand()/1000;
}

int static counter = 0;
//int calcnum(int a)
clock_t calcnum(clock_t a)
{
	//for(int i = 0; i < 66 ; i++)
	//for(int i = 0; i < 40 ; i++)
	++counter;
	double d = a;
	//printf("d : %.337f\n" , d);
	for(int i = 0; i < 337 ; i++)
	{
		//a *= a*100000;
		a *= 10;
		cout<<"counter : "<<counter<<"\n";
		//cout<<"a : " << a <<"\n";
		//printf("a : %.337f\n" , a);
		printf("a : %.337f\n" , a);
		
	}
	return a;
}


int randMine(int mod)
{
    time_t seed;
    return std::abs(seed * mod);
}

int randNew()
{
	std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distribution(1,6);
	std::cout << distribution(generator) << ' ';    
}

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



//int main()
int main(int argc, char** argv )
{
	
	    double total = 0;
		double prec[] = {0.00025177,  0.008666992 ,  0.078025818 ,  0.24130249  ,  0.343757629 ,  0.24130249  ,  0.078025818 ,  0.008666992  ,  0.000125885 } ;   
		clock_t start, end;		
		int num1 = 0;

		start = clock();			
		for(int j = 0; j< 10; j++)
		{
			for(int i = 0; i< 10; i++)
			{	
				num1 = rand();
				//printf("num1 :  %0.300f\n", num1);
				//cout<<num1<<"\n";
				total += num1*prec[i];
				//printf("total :  %0.20f\n", total);
			
			}
		}
		end = clock();
	    //cpu_time_used = ((double)(end - start));
		printf("start = %.450f\nend   = %.1000f\n", start, end);	    
		double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;     
		 //printf("fun() took %f seconds to execute \n", cpu_time_used);	 
		//printf("fun() took %0.20f seconds to execute \n", cpu_time_used);
		printf("cput time :  %0.1000f\n", cpu_time_used);
		return 1;
	
		int m = atoi(argv[1]);
		int TV = 1.1;
		int ProcessTime = atoi(argv[3]);
		int Time = ProcessTime * 1000;
		
		
		//std::cout << "Hello\n";


	int num = 0;
	
	//int count = 1000;
	//while (count)
	std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distribution(1,6);	
    
	while (true)
	{
#if 0
		 clock_t start, end;
 
	     double cpu_time_used;
	     start = clock();		
		 //num = rand();
    	 std::cout << distribution(generator) << ' ';    // Rand num generator
		 num = rand();
		 std::cout << num << "\n";
	     end = clock();	 
		 //printf("start = %.20f\nend   = %.20f\n", start, end);	     
		 //printf("start = %.5000f\nend   = %.5000f\n", start, end);	     
		 //printf("start = %.350f\nend   = %.350f\n", start, end);	     
		 //printf("start = %.337f\nend   = %.337f\n", pow(10,337)*start, pow(10,337)*end);	     
		 //printf("start = %.337f\nend   = %.337f\n", pow(10,20)*start, pow(10,20)*end);	     
		 //printf("start = %.337f\nend   = %.337f\n", 1000000*start, 1000000*end);	     
		 //printf("start = %.337f\nend   = %.337f\n", calcnum(start) , calcnum(end);	     
		 //printf("start = %.100f\nend   = %.100f\n", calcnum(start) , calcnum(end));	     
		 //printf("start = %.337f\nend   = %.337f\n", calcnum(start) , calcnum(end));
		 double d = start;	     
		 printf("d = %.337f\n", d);
		 //printf("start = %.30f\nend   = %.30f\n", calcnum(start) , calcnum(end));	     
		 cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;     
		 //printf("fun() took %f seconds to execute \n", cpu_time_used);	 
		 printf("fun() took %0.20f seconds to execute \n", cpu_time_used);	 
		//count--;
#endif //0
#if 0
		 clock_t start, end;
 
	     double cpu_time_used;
	     start = clock();		
		 num = rand();
		 std::cout << num << "\n";
	     end = clock();	 
	     //cpu_time_used = ((double)(end - start)) / ((double)CLOCKS_PER_SEC);
	     cpu_time_used = ((double)(end - start));
	     
		 char temp[350];
		 memset(temp,'\0',350);
		 sprintf(temp,"%.350f",cpu_time_used );
		 
		 printf("temp :");
	     printf(temp);
	     printf("\n");
#endif//0	
	     //printf("cpu_time_used  = %.350f\n", cpu_time_used);
	    
		//if(cpu_time_used>0)
		/*
		double kk = 0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
		if(cpu_time_used>kk)
		{	    
		    printf("cpu_time_used  = %.350f\n", cpu_time_used);
		    printf("CLOCKS_PER_SEC = %i\n\n", CLOCKS_PER_SEC);
		 	
        } 
		*/			     
	     
	     #if 1
		 clock_t start, end;
 
	     start = clock();		
		 time_t started=time(NULL);
		 num = rand();
		 //num =  distribution(generator);
		 std::cout << num << "\n";
		 //push(num);
	     end = clock();	 	     

		struct Node* p = head;	     
		//std::cout << distribution(generator) << ' ';    // Rand num generator		
		
		
		//total += num*0.00025177;
		
		#if 0
		cout<<"Loopppp"<<"\n";
		while(p->next!=NULL)
		{
			cout<<p->val<<"\n";
			p = p->next;
		}
	    #endif//0 
	     
	     
	     double seconds=difftime(time(NULL),started);
		 printf("seconds = %.600f\n", seconds);
		 //printf("start = %.20f\nend   = %.20f\n", start, end);	     
		 //printf("start = %.5000f\nend   = %.5000f\n", start, end);	     
		 printf("start = %.6000f\nend   = %.600f\n", start, end);	    
		 char temp[350];
		 memset(temp,'\0',350);
		 sprintf(temp,"%.6000f",((double)(end - start)) / (double)CLOCKS_PER_SEC);
		 printf("CLOCKS_PER_SEC = %i\n\n", CLOCKS_PER_SEC);	
		 printf("temp :");
	     printf(temp);
	     printf("\n");	  
		 //printf("start = %.337f\nend   = %.337f\n", pow(10,337)*start, pow(10,337)*end);	     
		 //printf("start = %.337f\nend   = %.337f\n", pow(10,20)*start, pow(10,20)*end);	     
		 //printf("start = %.337f\nend   = %.337f\n", 1000000*start, 1000000*end);	     
		 //printf("start = %.337f\nend   = %.337f\n", calcnum(start) , calcnum(end);	     
		 //printf("start = %.100f\nend   = %.100f\n", calcnum(start) , calcnum(end));	     
		 //printf("start = %.337f\nend   = %.337f\n", calcnum(start) , calcnum(end));
		 /*
		 double d = start;	     
		 printf("d = %.337f\n", d);
		 //printf("start = %.30f\nend   = %.30f\n", calcnum(start) , calcnum(end));	     
		 cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;     
			*/
		 //printf("fun() took %f seconds to execute \n", cpu_time_used);	 
		 //printf("fun() took %0.20f seconds to execute \n", cpu_time_used);	 
		 #endif
		//count--;



	}
}

