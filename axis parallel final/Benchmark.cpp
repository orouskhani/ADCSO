/******************************************/
/***        Author: Pei-Wei Tsai        ***/
/***   E-mail: pwtsai@bit.kuas.edu.tw   ***/
/***         Version: 2.0.0.0           ***/
/***   Released on: November 1, 2009    ***/
/******************************************/

/* The "Benchmark.h" and the "Benchmark.cpp" composes a library contains i_FuncNum test functions. */
#include "Benchmark.h"			// Include its header file.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Benchmark(int i_fn,int i_dim,double d_pos[])
{
	int i, j;
	double d_tmp[4];	// variables for temporary storage.
	double d_result = 0;	// cotains the result to return to the main program.
  
	/* initialize the parameters - Start */
	for(i=0;i<4;i++)
		d_tmp[i]=0.0;
	/* initialize the parameters - End   */

	if(i_fn==1)	// De Jong Function
	{
		for(j=0;j<i_dim;j++)
		{
			d_result += pow(d_pos[j],2);
		}
	}
	else if(i_fn==2)	// Axis Parallel Function
	{
		for(j=0;j<i_dim;j++)
		{
			d_result += j * pow(d_pos[j],2);
		}
	}
	else if(i_fn==3)	// Michalewicz Function
	{
		for(j=0;j<10;j++)
		{
			d_tmp[0] += sin(d_pos[j]) * pow(sin((j*pow(d_pos[j],2))/d_PIE),20);
		}
		
		d_result= -1 * d_tmp[0];
	}
/*
	else if(i_fn==4)	// Test Function 4
	{
	}
	else if(i_fn==5)  // Test Function 5
	{
	}
	else // Test Function 6
	{
	}
*/

  return d_result;
}