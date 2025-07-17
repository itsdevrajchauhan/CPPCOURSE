#include <iostream>
using namespace std;

class Emplyee
{
     int id;
     int salary;

public:
     void setId(void)
     {
          cout << "Enter the id : " << endl;
          cin >> id;
     }
     void getId(void)
     {
          cout << "id of the person is : " << id << endl;
     }
};

int main()
{

     /* Emplyee raj, rama;
      rama.setId();
      rama.getId();
      raj.setId();
      raj.getId(); */

     Emplyee Group[34];

     for (int i = 0; i < 4; i++)
     {

          Group[i].setId();
          Group[i].getId();
     }

     return 0;
}