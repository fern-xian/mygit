#include <boost/optional.hpp>
#include <iostream>
using namespace boost;
using namespace std;
int main()
{
 optional<int> op;
 op = 1;
 cout << *op << endl;

 vector<int> v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);

 optional<vector<int>> opvec(v);
 for(vector<int>::iterator iter = opvec->begin();iter != opvec->end();++iter){
    cout << *iter << endl;
 }
 return 0;
}
