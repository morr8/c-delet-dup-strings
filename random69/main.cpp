#include <iostream>
using namespace std;

int main()
{
   string word;
   cin >> word;
   
   bool done = false;
   while (!done)
   {
      string previous = word;
      cin >> word;
      if (word.substr(word.length() - 1) == ".")
      {
         word = word;
         done = true;
      }
      if (word != previous)
      {
         cout << previous << " ";
      }
   }
   cout << word;

   return 0;
}
