#include <bits/stdc++.h>;
using namespace std;



int main() {


  cout << "\n\n\t\t HOTEL MANAGEMENT IN C++";
  cout << "\n\t  ----------------------------- \n\n";
  
  int quant;
  int choice;
  // Cost of each items
  int cost_of_room = 1200, cost_of_pasta = 250, cost_of_burger = 60, cost_of_noodles = 50, cost_of_shake = 120, cost_of_chicken = 70;
  // Quantity of Food variables
  int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
  // food items sold
  int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
  // Total price of items
  int Total_room=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

  cout << "\n\t\t Quantity of items we have ";
  cout << "\n\t   ------------------------------ \n";
  cout << "\n\n Rooms available : ";
  cin >> Qrooms;
  cout << "\n Quantity of pastas : ";
  cin >> Qpasta;
  cout << "\n Quantity of burger : ";
  cin >> Qburger;
  cout << "\n Quantity of noodles : ";
  cin >> Qnoodles;
  cout << "\n Quantity of shake : ";
  cin >> Qshake;
  cout << "\n Quantity of chicken-roll : ";
  cin >> Qchicken;

  
menu:
  cout << "\n\t\t Please select from the menu options ";
  cout << "\n\t   --------------------------------------- \n";
  cout << "\n\n1) Rooms";
  cout << "\n2) Pasta";
  cout << "\n3) Burger";
  cout << "\n4) Noodles";
  cout << "\n5) Shake";
  cout << "\n6) Chicken-roll";
  cout << "\n7) Information regarding sales and collection";
  cout << "\n8) Exit";

  cout << "\n\n Please Enter your choice! ";
  cin >> choice;

  switch (choice) {
    case 1 : 
      cout << "\n\n Enter the number of rooms you want: ";
      cin >> quant;
      if(Qrooms - Srooms >= quant)
      {
        Srooms = Srooms + quant;
        Total_room = (Total_room + quant) * cost_of_room;
        cout << "\n\n\t\t" << quant << " room/rooms have been allotted to you!" << endl;
        
      }
      else 
        cout << "\n\tOnly " << Qrooms-Srooms << " Rooms remaining in hotel " << endl;
      break;
    
    case 2 :
      cout << "\n\n Enter Pasta Quantity : ";
      cin >> quant;
      if(Qpasta - Spasta >= quant)
      {
        Spasta = Spasta + quant;
        Total_pasta = (Total_pasta + quant) * cost_of_pasta;
        cout << "\n\n\t\t" << quant << " pasta is the order!" << endl;
        
      }
      else 
        cout << "\n\tOnly " << Qpasta-Spasta << " Pasta remaining in hotel " << endl;
      break;
    
    case 3 :
      cout << "\n\n Enter Burger Quantity : ";
      cin >> quant;
      if(Qburger - Sburger >= quant)
      {
        Sburger = Sburger + quant;
        Total_burger = (Total_burger + quant) * cost_of_burger;
        cout << "\n\n\t\t" << quant << " burger is the order!" << endl;
        
      }
      else 
        cout << "\n\tOnly " << Qburger-Sburger << " burger remaining in hotel " << endl;
      break;

    case 4 :
      cout << "\n\n Enter Noodles Quantity : ";
      cin >> quant;
      if(Qnoodles - Snoodles >= quant)
      {
        Snoodles = Snoodles + quant;
        Total_noodles = (Total_noodles + quant) * cost_of_noodles;
        cout << "\n\n\t\t" << quant << " noodles is the order!" << endl;
        
      }
      else 
        cout << "\n\tOnly " << Qnoodles-Snoodles << " Noodles remaining in hotel " << endl;
      break;

    case 5 :
      cout << "\n\n Enter Shake Quantity : ";
      cin >> quant;
      if(Qshake - Sshake >= quant)
      {
        Sshake = Sshake + quant;
        Total_shake = (Total_shake + quant) * cost_of_shake;
        cout << "\n\n\t\t" << quant << " shake is the order!" << endl;
        
      }
      else 
        cout << "\n\tOnly " << Qshake-Sshake << " Shake remaining in hotel " << endl;
      break;

    case 6 :
      cout << "\n\n Enter Chiken-roll Quantity : ";
      cin >> quant;
      if(Qchicken - Schicken >= quant)
      {
        Schicken = Schicken + quant;
        Total_chicken = (Total_chicken + quant) * cost_of_chicken;
        cout << "\n\n\t\t" << quant << " chicken-roll is the order!" << endl;
        
      }
      else 
        cout << "\n\tOnly " << Qchicken-Schicken << " Chicken-roll remaining in hotel " << endl;
      break;

    case 7 :
      cout << "\n\t\t Details of Sales and Collection ";
      cout << "\n\n Number of rooms we had : " << Qrooms;
      cout << "\n\n Number of  rooms we gave for rent : " << Srooms;
      cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
      cout << "\n\n Total rooms collection for the day : " << Total_room;

      cout << "\n\n Number of Pastas we had : " << Qpasta;
      cout << "\n\n Number of Pastas we sold : " << Spasta;
      cout << "\n\n Remaining Pastas : " << Qpasta - Spasta;
      cout << "\n\n Total Pastas collection for the day : " << Total_pasta;

      cout << "\n\n Number of Burger we had : " << Qburger;
      cout << "\n\n Number of Burger we sold : " << Sburger;
      cout << "\n\n Remaining Burger : " << Qburger - Sburger;
      cout << "\n\n Total Burger collection for the day : " << Total_burger;

      cout << "\n\n Number of Noodles we had : " << Qnoodles;
      cout << "\n\n Number of Noodles we sold : " << Snoodles;
      cout << "\n\n Remaining Noodles : " << Qnoodles - Snoodles;
      cout << "\n\n Total Noodles collection for the day : " << Total_noodles;

      cout << "\n\n Number of Shake we had : " << Qshake;
      cout << "\n\n Number of Shake we sold : " << Sshake;
      cout << "\n\n Remaining Shake : " << Qshake - Sshake;
      cout << "\n\n Total Shake collection for the day : " << Total_shake;

      cout << "\n\n Number of Chicken-rolls we had : " << Qchicken;
      cout << "\n\n Number of Chicken-rolls we sold : " << Schicken;
      cout << "\n\n Remaining Chicken-rolls : " << Qchicken - Schicken;
      cout << "\n\n Total Chicken-rolls collection for the day : " << Total_chicken;

      cout << "\n\n\n Total Collection : " << Total_room + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken << endl;
      break;

    case 8 :
      exit(0);
      break;
    default:
      cout << "\n Please select from above options" << endl;
      
  }
  goto menu;
}