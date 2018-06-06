#include <iostream>
#include <string>


using namespace std;

int main()
{
  int petla;
  string slowo;

  cin >> petla;

  do {

    cin >> slowo;
    cout << slowo;
    cin >> slowo;

    petla--;
  } while(petla > 0);


}
