#include <iostream>
#include "tree_map.h"

 using namespace std;

 int main()
 {
   TTreeMap<string, int> a;
   TTreeMap<string, char> b;
   TTreeMap<int, int> c;
   a.Add("test_0", 1024);
   a.Add("test_1", 512);
   a.Add("test_2", 256);
   a.Add("test_3", 128);
   b.Add("A0", 'a');
   b.Add("A1", 'b');
   b.Add("A2", 'c');
   b.Add("B0", 'd');

   cout << (a.Find("test_0") + a.Find("test_1")) << '\n';
   return 0;
 }
