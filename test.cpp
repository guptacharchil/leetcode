#include <iostream>
#include <string>
#include<vector>
using namespace std;
typedef vector<int> vi;
int main()
{
  vi v;
//  std::vector<int> v;

  v.push_back(1);
    string b = "5.225";
    double a = stod(b);
    int c = stoi(b);
    cout << b << " " << a << " " << c << endl;
}
