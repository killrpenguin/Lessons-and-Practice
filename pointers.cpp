#include <iostream>

class Practicing_pointers {
public:Practicing_pointers(){}
  int a_val;
  int static st_val;

  Practicing_pointers(int val) {
   const int a_val = val;
  }
  Practicing_pointers(Practicing_pointers &an_obj) {
	a_val = an_obj.a_val;
	st_val = an_obj.st_val;
  }
};

void ptr_basics() {
  int a_val = 420;
  int *a_ptr = &a_val;
  int **another_ptr = nullptr;
  std::cout << "Integer Pointer memory location: " << a_ptr << std::endl;
  std::cout << "Integer Pointer value: " << *a_ptr << std::endl;

  std::cout << "Second Pointer memory location: " << another_ptr << std::endl;
  std::cout << "Second Pointer value: " << **another_ptr << std::endl;
}
void null_ptrs() {
  int a_num = 10;
  int *make_ptr = &a_num;
  int *second_ptr = nullptr;

  std::nullptr_t *null_ptr_type;

  std::cout << "Pointer contains a value: Expect 0\n" << second_ptr << std::endl;

  if (null_ptr_type) {
	std::cout << "Is this the same as make_ptr" << std::endl; // no
	std::cout << "null_ptr_type: \n" << null_ptr_type << std::endl;
  }
  if (make_ptr) {
	std::cout << "Make pointer contains a value" << std::endl;
  }
  
}

int main () {
  null_ptrs();
}

