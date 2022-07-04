#include <iostream>
#include <string>

using namespace std;

int numVowel(string name)
{
  int count = 0;
  for(int i = 0; i <= name.length(); i++)
  {
    if((name[i] == 'a') || (name[i] == 'e') || (name[i] == 'i') || (name[i] == 'o') || (name[i] == 'u'))
    {
      count++;
    }
  }
  return count;
}

int main() {
  string n;
  cout << "Please enter your name" << endl;
  //cin stops at spaces so you need getline(cin, n); rather than cin >> n;
  // You can also set getline to stop at characters by adding a third arg
  getline(cin, n);
  cout<<n<<endl;
  cout << numVowel(n) << endl;
} 