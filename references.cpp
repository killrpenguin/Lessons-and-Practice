#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <typeinfo>

void flush() {std::cout << std::endl;}
static bool compare(const auto T) {
        return (typeid(T) == typeid(int));
    }

void my_list(const int a_num) {
  const std::vector<int> another_list {1,2,3,4,5,6};
  
  const std::vector<int> nums_list {a_num};
  
  const std::string_view see_digits {std::to_string(a_num)};
  
  std::cout<<see_digits << std::endl;
  
  for (const int num : nums_list)	std::cout << num << " ";
  
  flush();
}


std::vector<int> take_input(){
  std::vector<int> result;
  
  int num {0};
  
  const std::type_info &only_ints = typeid(num);
  
  for (int a {0}; a <= 4; a++ ){
	std::cout << &only_ints << std::endl;
    std::cin >> num;
	auto iter = result.end();
	result.insert(iter, num);
  }

  for (const int a_num : result ){
	std::cout << a_num << " is a ";
	std::cout << typeid(a_num).name() << std::endl;
	std::cout << compare(a_num);
  }
  return result;
}
  
int testing (const std::string_view text) {
  
  std::cout << text.size() << std::endl;
  
  return text.size();
}

void test2 (const std::string &some_text) {
  
  std::cout << some_text << "\n";
}

int main() {
  std::string myname = "David McFarland";
  int num {testing(myname)};
  test2(myname);
  my_list(num);
  std::vector<int> practice {take_input()};
  
  return 0;
}
