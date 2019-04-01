
#include<iostream>

using namespace std;

void menu(){


  string station_name_from;
	int zone_from;

	string station_name_to;
	int zone_to;

	int menu_select_1;
	int menu_select_2;
	int menu_select_3;




  cout<<" WELCOME TO OUR GROUP PROJECT "<<endl;
	cout<<"************ MENY ************"<<endl;
	cout<<" 0. Cancel "<< endl;
	cout<<"1. Purchase a ticket "<< endl;


	cout<< " Input: ";
	cin >> menu_select_1;
	cout<< " " << endl;

	while (menu_select_1 != 0){
    switch(menu_select_1){

      case 1 : cout<<"Please choose which station you are going to depart from: "<<endl;

           cout<<"---------Zone 1---------"<<endl;
           cout<<"1: Oslo"<<endl;
           cout<<"2: Majorstuen"<<endl;
           cout<<"3: National Theatre"<<endl;
           cout<<"---------Zone 2---------"<<endl;
           cout<<"4: Lillestrom"<<endl;
           cout<<"5: Sandvika"<<endl;
           cout<<"6: Asker"<<endl;
           cout<<"---------Zone 3---------"<<endl;
           cout<<"7: Slemmestad"<<endl;
           cout<<"8: Frogner"<<endl;
           cout<<"9: Aurskog"<<endl;

           break;
    }
    cout<< " Input: ";
		cin >> menu_select_2;
		cout<< " " <<endl;

		switch(menu_select_2){

			case 1 :
					 station_name_from = "Oslo";
					 zone_from = 1;
					 break;

				case 2 :
					 station_name_from = "Majorstuen";
					 zone_from = 1;
					 break;

			 case 3 :
					 station_name_from = "National Theatre";
					 zone_from = 1;
					 break;

			 case 4 :
					 station_name_from = "Lillestrom";
					 zone_from = 2;
					 break;

			 case 5 :
					 station_name_from = "Sandvika";
					 zone_from = 2;
					 break;

			case 6 :
					 station_name_from = "Asker";
					 zone_from = 2;
					 break;

			case 7 :
					 station_name_from = "Slemmestad";
					 zone_from = 3;
					 break;

			case 8 :
					 station_name_from = "Frogner";
					 zone_from = 3;
					 break;

			case 9 :
					 station_name_from = "Aurskog";
					 zone_from = 3;
					 break;




		}

		cout<<"Please choose which station you are going to:  "<<endl;
					 cout<<"---------Zone 1---------"<<endl;
					 cout<<"1: Oslo"<<endl;
					 cout<<"2: Majorstuen"<<endl;
					 cout<<"3: National Theatre"<<endl;
					 cout<<"---------Zone 2---------"<<endl;
					 cout<<"4: Lillestrom"<<endl;
					 cout<<"5: Sandvika"<<endl;
					 cout<<"6: Asker"<<endl;
					 cout<<"---------Zone 3---------"<<endl;
					 cout<<"7: Slemmestad"<<endl;
					 cout<<"8: Frogner"<<endl;
					 cout<<"9: Aurskog"<<endl;


		cout<<" Input: ";
		cin >> menu_select_3;
		cout<< " " << endl;

		switch(menu_select_3){
			case 1 :
					 station_name_to = "Oslo";
					 zone_to = 1;
					 break;

				case 2 :
					 station_name_to = "Majorstuen";
					 zone_to = 1;
					 break;

			case 3 :
					 station_name_to = "National Theatre";
					 zone_to = 1;
					 break;

			case 4 :
					 station_name_to = "Lillestrom";
					 zone_to = 2;
					 break;

			case 5 :
					 station_name_to = "Sandvika";
					 zone_to = 2;
					 break;

			case 6 :
					 station_name_to = "Asker";
					 zone_to = 2;
					 break;

			case 7 :
					 station_name_to = "Slemmestad";
					 zone_to = 3;
					 break;

			case 8 :
					 station_name_to = "Frogner";
					 zone_to = 3;
					 break;

			case 9 :
					 station_name_to = "Aurskog";
					 zone_to = 3;
					 break;


		}



    cout<<" WELCOME TO OUR GROUP PROJECT "<<endl;
    cout<<"************ MENY ************"<<endl;
    cout<<" 0. Cancel "<< endl;
    cout<<"1. Purchase a ticket "<< endl;


    cout<< " Input: ";
    cin >> menu_select_1;
    cout<< " " << endl;

}

}


int main() {
std::cout << "WITHOUT THE OTHER METHODS ONLY MENU" << '\n';
  menu();



  return 0;
}
