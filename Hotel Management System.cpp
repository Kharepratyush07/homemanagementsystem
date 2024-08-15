#include<iostream>
using namespace std;

int main()
{

   int quant;
   int choice;
 //quantity of items
   int Qrooms=0, Qbiryani=0,Qburger=0,Qpizza=0,Qicecream=0,Qbrownie=0,Qpasta=0,Qroll=0;
 //sold of items
   int Srooms=0, Sbiryani=0,Sburger=0,Spizza=0,Sicecream=0,Sbrownie=0,Spasta=0,Sroll=0;
 //total quantity
   int total_rooms=0,total_biryani=0,total_burger=0,total_pizza=0,total_icecream=0,total_brownie=0,total_pasta=0,total_roll=0;
 
 cout<<"\n\t Quantity of Items We Have!!! ";
 cout<<"\n Rooms Available: ";
 cin>>Qrooms;
 cout<<"\n Chicken Biryani Available: ";
 cin>>Qbiryani;
 cout<<"\n Burger Available: ";
 cin>>Qburger;
 cout<<"\n Pizza Available: ";
 cin>>Qpizza;
 cout<<"\n Ice Cream Available: ";
 cin>>Qicecream;
 cout<<"\n Brownie Available: ";
 cin>>Qbrownie;
 cout<<"\n Pasta Available: ";
 cin>>Qpasta;
 cout<<"\n VEG Roll Available: ";
 cin>>Qroll;
 
 m:
 cout<<"\n\t\t PLEASE SELECT FROM THE GIVEN MENU OPTIONS ";
 cout<<"\n n1) Rooms ";
 cout<<"\n n2) Chicken Biryani ";
 cout<<"\n n3) Burger ";
 cout<<"\n n4) Pizza ";
 cout<<"\n n5) Ice Cream ";
 cout<<"\n n6) Brownie ";
 cout<<"\n n7) Pasta ";
 cout<<"\n n8) VEG Roll ";
 cout<<"\n n9) Information about sales and collection ";
 cout<<"\n n10)EXIT ";
 
 cout<<"\n\n Please Enter your choice ";
 cin>>choice;
 
 switch(choice){
 	case 1:
 		cout<<"Enter the number of rooms you want ";
 		cin>>quant;
 		if(Qrooms-Srooms >=quant){
 			Srooms=Srooms+quant;
 			total_rooms=total_rooms+quant*1100;
 			cout<<"\n\n\t\t"<<quant << " "<<" room/rooms have been alloted to you! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qrooms-Srooms<<"Rooms remaining in Hotel ";
		 break;
		 
	case 2:
 		cout<<"Enter the Quantity of Chicken biryani you want ";
 		cin>>quant;
 		if(Qbiryani-Sbiryani >=quant){
 			Sbiryani=Sbiryani+quant;
 			total_biryani=total_biryani+quant*250;
 			cout<<"\n\n\t\t"<<quant<<"chicken biryani you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qbiryani-Sbiryani<<"Chicken biryani remaining in Hotel ";
		 break;	 
		 
	case 3:
 		cout<<"Enter the Quantity of Burger you want ";
 		cin>>quant;
 		if(Qburger-Sburger >=quant){
 			Sburger=Sburger+quant;
 			total_burger=total_burger+quant*120;
 			cout<<"\n\n\t\t"<<quant<<"Burger you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qburger-Sburger<<"Burger remaining in Hotel ";
		 break;	
	
	case 4:
 		cout<<"Enter the Quantity of Pizza you want ";
 		cin>>quant;
 		if(Qpizza-Spizza >=quant){
 			Spizza=Spizza+quant;
 			total_pizza=total_pizza+quant*300;
 			cout<<"\n\n\t\t"<<quant<<"Pizza you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qpizza-Spizza<<"Pizza remaining in Hotel ";
		 break;	
		 
	case 5:
 		cout<<"Enter the Quantity of Ice cream you want ";
 		cin>>quant;
 		if(Qicecream-Sicecream >=quant){
 			Sicecream=Sicecream+quant;
 			total_icecream=total_icecream+quant*100;
 			cout<<"\n\n\t\t"<<quant<<"Ice cream you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qicecream-Sicecream<<"Ice cream remaining in Hotel ";
		 break;
		
	case 6:
 		cout<<"Enter the Quantity of Brownie you want ";
 		cin>>quant;
 		if(Qbrownie-Sbrownie >=quant){
 			Sbrownie=Sbrownie+quant;
 			total_brownie=total_brownie+quant*150;
 			cout<<"\n\n\t\t"<<quant<<"Brownie you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qbrownie-Sbrownie<<"Brownie remaining in Hotel ";
		 break;
		 
	case 7:
 		cout<<"Enter the Quantity of Pasta you want ";
 		cin>>quant;
 		if(Qpasta-Spasta >=quant){
 			Spasta=Spasta+quant;
 			total_pasta=total_pasta+quant*130;
 			cout<<"\n\n\t\t"<<quant<<"Pasta you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qpasta-Spasta<<"Pasta remaining in Hotel ";
		 break;
		
	case 8:
 		cout<<"Enter the Quantity of Veg roll you want ";
 		cin>>quant;
 		if(Qroll-Sroll >=quant){
 			Sroll=Sroll+quant;
 			total_roll=total_roll+quant*110;
 			cout<<"\n\n\t\t"<<quant<<"Veg roll you order! ";
 			
		 }
		 else
		 cout<<"\n\t only "<<Qroll-Sroll<<"Veg roll remaining in Hotel ";
		 break;
	case 9:
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of rooms we had : "<<Qrooms;
		cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
		cout<<"\n\n Number of room remaining : "<<Qrooms-Srooms;
		cout<<"\n\n Total rooms collection for the day : "<<total_rooms;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of chicken biryani  we had : "<<Qbiryani;
		cout<<"\n\n Number of chicken biryani we sold: "<<Sbiryani;
		cout<<"\n\n Number of chicken biryani remaining : "<<Qbiryani-Sbiryani;
		cout<<"\n\n Total chicken biryani collection for the day : "<<total_biryani;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of burger we had : "<<Qburger;
		cout<<"\n\n Number of burger we sold: "<<Sburger;
		cout<<"\n\n Number of burger remaining : "<<Qburger-Sburger;
		cout<<"\n\n Total burger collection for the day : "<<total_burger;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of pizza we had : "<<Qpizza;
		cout<<"\n\n Number of pizza we sold: "<<Spizza;
		cout<<"\n\n Number of pizza remaining : "<<Qpizza-Spizza;
		cout<<"\n\n Total pizza collection for the day : "<<total_pizza;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of ice cream we had : "<<Qicecream;
		cout<<"\n\n Number of ice cream we sold: "<<Sicecream;
		cout<<"\n\n Number of ice cream remaining : "<<Qicecream-Sicecream;
		cout<<"\n\n Total ice cream collection for the day : "<<total_icecream;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of brownie we had : "<<Qbrownie;
		cout<<"\n\n Number of brownie we sold: "<<Sbrownie;
		cout<<"\n\n Number of brownie  remaining : "<<Qbrownie-Sbrownie;
		cout<<"\n\n Total brownie collection for the day : "<<total_brownie;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number ofpasta we had : "<<Qpasta;
		cout<<"\n\n Number of pasta we sold: "<<Qpasta-Spasta;
		cout<<"\n\n Total pasta collection for the day : "<<total_pasta;
		
		cout<<"\n\t\t Details of sales and collections";
		cout<<"\n\n Number of veg roll we had : "<<Qroll;
		cout<<"\n\n Number of veg roll we sold: "<<Sroll;
		cout<<"\n\n Number of veg roll remaining : "<<Qroll-Sroll;
		cout<<"\n\n Total veg roll collection for the day : "<<total_roll;
		
		cout<<"\n\n Total collection Of a Day: "<<total_rooms+total_biryani+total_burger+total_pizza+total_icecream+total_brownie+total_pasta+total_roll;
		break;
	case 10:
	    exit(0);
		
		
	   default:
	     cout<<"\n Please select the numbers mentioned above!";	
	 	 	    
 }
 goto m;
}


