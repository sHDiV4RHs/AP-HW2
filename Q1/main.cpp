/* M.Mehdi Naseri 9423115 */

#include<iostream>

int main()
{
	/****1****/
	// int a{10};
	// const int* b{&a};
	// (*b)++;
	// a++;
	// std::cout << a << " " << b << " " << *b << std::endl;
	// return 0;

	/****2****/
	// const int a{10};
	// int c{20};
	// int d{30};
	// const int* b{&a};
	// b = &c;
	// std::cout << a << " " << " " << *b;
	// int* const e{&c};
	// e = &d;
	// std::cout << d << " " << e << " " << *e;
	// return 0;

	/****3****/
	// char a{'a'};
	// const char* name{"Amir Jahanshahi"};
	// const char* p1{name}; //?
	// std::cout << *p1 << *(p1 + 1) << *(p1 + 2) << std::endl;
	// p1 = &a; //Allowed?
	// std::cout << *p1 << *(p1 + 1) << *(p1 + 2) << std::endl;
	// p1 = name;
	// *p1 = 'b'; //Allowed?
	// char* p2{name}; //Allowed?
	// return 0;

	/****4****/
	//  int (*p5)[3]{1, 2, 3}; //?
	//  int a[3]{1, 2, 3};
	//  p5 = a;
	//  std::cout << *p5 << std::endl;
	// return 0;
}

