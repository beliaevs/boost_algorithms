#include<iostream>
#include<boost/algorithm/cxx11/any_of.hpp>
#include<algorithm>
#include<vector>
#include<set>

int main()
{
  {
    std::vector<int> v = { 1,3, 2, 5, 6 };
    std::cout << boost::algorithm::any_of_equal(v, 2);
  }
  {
    std::set<int> s = { 1, 5, 2, 7 };
    std::cout << boost::algorithm::any_of_equal(s, 2);
  }
  {
    std::set<int> s = { 1, 5, 2, 6 };
    std:: cout << std::any_of(s.begin(), s.end(), [](auto e) { return e == 2; });
  }
  return 0;
}
