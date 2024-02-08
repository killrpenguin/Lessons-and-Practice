#include <iostream>

class Sales_item {
public:Sales_item(float price) { // Paramaterized Constructor
    std::cout << "Paramaterized Constructor -Book Sold!" << std::endl;
    books_sold++;
    total_sales += price;
  }

public:Sales_item() { // Default constructor
  std::cout << "Default Constructor - Book Sold!" << std::endl;
    price = 0;
    books_sold++;
    total_sales += price;

}

	Sales_item(const Sales_item &) = default;
	Sales_item(Sales_item &&) = default;
	Sales_item &operator=(const Sales_item &) = default;
	Sales_item &operator=(Sales_item &&) = default;

	static int books_sold;
	static float total_sales;
	static float average_rev;

	float price;

    float get_average_sales() { return total_sales / books_sold; }
};


int Sales_item::books_sold = 0;
float Sales_item::total_sales = 0.0;
float Sales_item::average_rev = 0.0;

Sales_item* sales_item_pointer;


int main (void) {
  
  Sales_item first_sale(10.99);
  Sales_item second_sale(9.99);
  Sales_item third_sale;

  float sales_avg = second_sale.get_average_sales();

  std::cout << "Total Sales: $" << Sales_item::total_sales << std::endl;
  std::cout << "Average of all sales: $" << sales_avg << std::endl;

  return 0;
}

