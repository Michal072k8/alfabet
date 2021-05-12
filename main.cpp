#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int odp;

int main() {
  cout << "wpisz 1 by zaczac alfabet" << endl;
  cin >> odp;

  if(odp==1)
  {
    for(int i=97;i<123;i++)
    {
      cout << char(i) << endl;
      sleep(1);
      system("clear");
      // cout << "a" << endl;
      // sleep(1);
      // system("clear");
      // cout << "b" << endl;
      // sleep(1);
      // system("clear");
      // cout << "c" << endl;
      // sleep(1);
      // system("clear");
      // cout << "d" << endl;
      // sleep(1);
      // system("clear");
      // cout << "e" << endl;
      // sleep(1);
      // system("clear");
      // cout << "f" << endl;
      // sleep(1);
      // system("clear");
      // cout << "g" << endl;
      // sleep(1);
      // system("clear");
      // cout << "h" << endl;
      // sleep(1);
      // system("clear");
      // cout << "i" << endl;
      // sleep(1);
      // system("clear");
      // cout << "j" << endl;
      // sleep(1);
      // system("clear");
      // cout << "k" << endl;
      // sleep(1);
      // system("clear");
      // cout << "l" << endl;
      // sleep(1);
      // system("clear");
      // cout << "m" << endl;
      // sleep(1);
      // system("clear");
      // cout << "n" << endl;
      // sleep(1);
      // system("clear");
      // cout << "o" << endl;
      // sleep(1);
      // system("clear");
      // cout << "p" << endl;
      // sleep(1);
      // system("clear");
      // cout << "r" << endl;
      // sleep(1);
      // system("clear");
      // cout << "s" << endl;
      // sleep(1);
      // system("clear");
      // cout << "t" << endl;
      // sleep(1);
      // system("clear");
      // cout << "u" << endl;
      // sleep(1);
      // system("clear");
      // cout << "w" << endl;
      // sleep(1);
      // system("clear");
      // cout << "x" << endl;
      // sleep(1);
      // system("clear");
      // cout << "y" << endl;
      // sleep(1);
      // system("clear");
      // cout << "z" << endl;
      // sleep(1);
      // system("clear");
    }
  }
  else
  {
    cout << "zla odpowiedz";
  }
}
