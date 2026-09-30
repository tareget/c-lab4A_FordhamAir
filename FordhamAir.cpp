//Yonas Klinowski
#include <iostream>
#include <string> 
#include <iomanip>
using namespace std; 

int main() {
    char destination;
    int timeofday;
    char dayofweek;
    int tixNum;
    double Tixprice;
    double Payment;
    double Change;
    bool isWeekend;
    bool isDay;

    cout << fixed << setprecision(2);
    
    cout << "Welcome to Fordham Airlines!" << endl;
    cout << "What is your destination? ([C]hicago, [M]iami, [P]ortland) ";
    cin >> destination;
    
    cout << "What time will you travel? (Enter time between 0-2359) ";
    cin >> timeofday;

    cout << "What type of day are you traveling? (week[E]nd or week[D]ay) ";
    cin >> dayofweek;

    isDay = (timeofday >= 500 && timeofday < 1900);

    double ChicagoPrice;
    switch (dayofweek)
    {
	    case 'E':
	   	  ChicagoPrice = isDay ? 90 : 60;
	          break;
	    case 'D':
	    	 ChicagoPrice = isDay ? 75 : 50;
	          break;
	    default:
	    ChicagoPrice = 0;
	}
    switch (destination)
    {
	case 'C':
	    Tixprice = ChicagoPrice;
	    break;
	case 'M':
	    Tixprice = ChicagoPrice * 2;
	    break;
        case 'P':
	    Tixprice = ChicagoPrice * 4;
	      break;
	default:
	    Tixprice = 0;
	}
    cout << "Each ticket will cost: $" << Tixprice << endl;

    cout << "How many tickets do you want? ";
    cin >> tixNum;

    if (tixNum <= 0 )
    {
    cout << "That is too little! No tickets ordered." << endl;
    }
    double totalCost = Tixprice * tixNum;
    cout << "You owe: $" << totalCost << endl;

    cout << "Amount paid? ";
    cin >> Payment;
    
    if (Payment < totalCost) {
	cout << "That is too little! No tickets ordered." << endl;
        return 0;
    }
    Change = Payment - totalCost;
    cout << "You will get in change: $" << Change << endl;
    cout << "Your tickets have been ordered!" << endl;

return 0;
} 

