#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string my_list[2] = {"apple", "banana"}; // partially possible
  my_list[0] = "I hate banana";
  cout << my_list << endl;

  map<string, double> my_dict; // partially possible
  //my_dict["key"] = "value"; // not possible
  my_dict["pi"] = 3.14;

  cout << my_dict["pi"] << endl;

  int range_list[10];
  for (int i=0; i<10; i++) {
      range_list[i] = i;
      cout << range_list[i] << endl;
  }
  
  cout << "length : " << (sizeof(range_list)/sizeof(*range_list));
  cout << range_list << endl;

  int nums[10];
  for (int i=0; i<10; i++)
    nums[i] = i;

  cout << nums<< endl;

  int size=sizeof(nums)/sizeof(*nums);

  for (int i=0; i < 13; i++) {
      cout << i << endl;
      if (find(nums, nums+size, i) != nums+size) {
          cout<< "find" << endl;
      } else {
          cout << "not found" << endl;
          continue;
      }
  }
}
