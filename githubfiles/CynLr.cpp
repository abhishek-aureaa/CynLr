// CynLr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
//#include <C:\\Interviews\CynLr\CynLr\pthread\include\pthread.h>
#include <pthread.h>

#define _CRT_SECURE_NO_WARNINGS 1


int main()
{
#if 0
	int count = 0;

	//FULL STRING
	const char* string = "ABCD";

	const char* temp = string;
	int len = strlen(string);
	//const char* allchars = "AC";
	//const char* allchars = "AD";
	//const char* allchars = "K";

	//STRING of which characters have to be searched
	const char* allchars = "BD";

	int found = 0;
	int min_len = 0;


	/*STRING IS ABCD and search for the smallest substring which contains all characters of "AC" */
	/*CODE TO FIND ALL SUBSTRINGS*/
	while (*temp)
	{
		for (int i = len; i > 0;i--)
		{
			char* substring = (char*)malloc(1 + sizeof(char) * i);
			memset(substring, '\0', 1 + sizeof(char) * i);

			//Here form the substring of appropriate length
			for (int j = i; j > 0;j--)
			{
				substring[count] = temp[count];
				count++;
			}
			const char* temp1 = allchars;
			while (*temp1)
			{
				for (int k = 0; k < count; k++)
				{
					if (*temp1 == substring[k])
					{
						found++;
					}
				}
				temp1++;
			}
			if (found >= strlen(allchars))
			{
				if (!min_len)
					min_len = i;
				else if (min_len > i)
					min_len = i;
			}
			found = 0;
			count = 0;
		}
		temp++;
		len--;
	}

	/*Length of shortest string which contains all the characters of the substring to be searched.
	a.SO "BD" has to be searched into "ABCD" , hence below will print 3.
	b. If we search "K" in "ABCD", this will return 0*/
	std::cout << "Minimum Length : " << min_len;
#endif 
	int num = 0;
	
	bool a = false;
	//while (true)
	while (a)
	{
		num = rand();
		std::cout << num << "\n";
	}
	

	//thread
	pthread_t* t1 = NULL;
	pthread_attr_t* atr = NULL;
	void* (*func) (void*) = NULL;
	void* arg = NULL;

	/*
	void* foo()
	{
		cout << "Hello\n";
		return NULL;
	}
	*/


	pthread_create(t1, atr, func, arg);
	if (t1 != NULL)
	{
		std::cout << "thread created\n";
	}



}



