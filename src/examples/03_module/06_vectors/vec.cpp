#include "vec.h"


/*
Write code for function loop_vector_w_index with no parameters.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
//void loop_vector_w_index()
//{
//
//	vector<int> nums{ 9, 10, 99, 5, 67 };
//
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		nums[i] = 0;
//		cout << nums[i];
//	}
//}


/*
Write code for function loop_vector_w_index with a vector of int pass by value parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
void loop_vector_w_index(vector<int> nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		nums[i] = 0;
	}
}


/*
Write code for function loop_vector_w_index with a vector of int pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/
void loop_vector_w_index_ref(vector<int> &nums)
{
	for (auto &n : nums)
	{
		n = 0;
	}
}


/*
Write code for function loop_vector_w_index with a vector of int const pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/
void loop_vector_w_index_cons(const vector<int> &nums)
{
	for (auto n : nums)
	{
	//	n = 0;	Cannont change constants
		cout << n << "\n";
	}
}

