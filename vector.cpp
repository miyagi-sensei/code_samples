#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> db[3];
  // put 3 elements into db[0]
  db[0].push_back(17);
  db[0].push_back(4);
  db[0].push_back(11);

  // put 1000 elements into db[1]
  for (int i = 0; i < 1000; i++)
    db[1].push_back(i * i);

  cout << db[0].size() << endl;
  cout << db[1].size() << endl;
  cout << db[2].size() << endl;
  return 0;
}
