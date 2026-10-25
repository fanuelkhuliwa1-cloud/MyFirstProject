#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

   // cout << daysUntilExpiration << endl;
    
    if (daysUntilExpiration == 0)
    {
        cout << "You subscription has expired.";
     
    } 
      else if (daysUntilExpiration == 1)
      {
        cout << "Your subscription expires within a day. Renew now and save 20%!";
      }
      else if (daysUntilExpiration <= 5)
      {
        cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!";
      }
      else if (daysUntilExpiration <= 10)
      {
        cout << "Your subscription will expire soon. Renew now!";
      }
      else
      {
        cout << "Your subscription is still active.";
      }

      return 0;
      

}