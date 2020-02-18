#include "vec.h"


int main()
{//	9, 10, 99, 5, 67
	loop_vector_w_index();

	vector<int> nums{ 9, 10, 99, 5, 67 };

	loop_vector_w_index_val(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_cons(nums);

	return 0;
}
