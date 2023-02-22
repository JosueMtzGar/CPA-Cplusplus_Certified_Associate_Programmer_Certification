#include <iostream>
#include <string>

/*Programa para ver el tamaño de un string que ocupa 
actualmente y su tamaño maximo que puede llegar a
ocupar */

using namespace std;

void print_info(string& s)
{
  cout << "length = " << s.length() << endl;
  cout << "capacity = " << s.capacity() << endl;
  cout << "max size = " << s.max_size() << endl;
  cout << "---------" << endl;
}

int main() 
{
  string the_string = "content";

  print_info(the_string);
  for (int i = 0; i < 10; i++)
    the_string += the_string;
  print_info(the_string);
}