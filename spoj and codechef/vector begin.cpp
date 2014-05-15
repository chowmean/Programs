//main used vector func are.. begin,end,capacity,size,erase,iterator,push_back,pop_back,insert
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

 cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
  cout<<myvector.size();
  cout<<"\n"<<myvector.capacity();
  cout<<"\n"<<myvector.max_size();
  myvector.push_back(6);
  myvector.push_back(7);
  myvector.push_back(8);
  myvector.push_back(9);
  cout<<"\n";
   cout<<myvector.size();
  cout<<"\n"<<myvector.capacity();
  cout<<"\n"<<myvector.max_size();


  
  int as;cin>>as;
  
  return 0;
  
}
