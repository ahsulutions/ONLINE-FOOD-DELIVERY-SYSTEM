#include<iostream>
#include<fstream>
using namespace std;
main()
{
	cout<<"************************************************************************************************"<<endl;
	cout<<"*"<<"                                                                                              "<<"*"<<endl;
	cout<<"*"<<"                                                                                              "<<"*"<<endl;
	cout<<"*"<<"                              WELCOME TO ONLINE FOOD DELIVERY SYSTEM                          "<<"*"<<endl;
	cout<<"*"<<"                                                                                              "<<"*"<<endl;
	cout<<"*"<<"                                                                                              "<<"*"<<endl;
	cout<<"************************************************************************************************"<<endl;
	//Online Food Delievery 
	ofstream User_account;
	
		User_account.open("User account.txt",ios::app);
	string F_Name,L_Name,Address,password,C_password, Number,Location;
	
    cout<<"Create account"<<endl;
    int a;
    cout<<"First name:";
    getline(cin,F_Name);
    cout<<"Last name:";
    getline(cin,L_Name);
    
    cout<<"Address:";
    getline(cin,Address);
    cout<<" Mobile number atleast five digit :";
    getline(cin,Number);
    if ((Number.size() > 200) || (Number.size() < 5))
    {
    cout << "Invalid Length" << endl;
    exit(0);
    }
    cout<<"successfully create account"<<endl;
    User_account<<F_Name<<endl;
    User_account<<L_Name<<endl;
    User_account<<Number<<endl;
    User_account<<Address<<endl;
    User_account.close();
    int n;
    cout<<"press 1 to select resturant :"<<endl;
    cin>>n; 
 if(n==1)

	{
		 int num;
		cout<<"select a number for restaurant you like to order (1 to 5):"<<endl;
		cout<<" press 01 for Al_Minaal The food tree:"<<endl;
		cout<<" press 02 for The Munji Munch:"<<endl;
		cout<<" press 03 for The Chinese Express:"<<endl;
		cout<<" press 04 for KFC:"<<endl;
		cout<<" press 05 for Cock and Bull(Pizza & Steak house):"<<endl;
		cin>>num;
		 if(num==01)
	{
		{
		int food,more;
		cout<<"Select  number for food you want to order"<<endl;
		cout<<"001 Any 02 chicken graves + egg fried ries PKR/-799"<<endl;
		cout<<"002 Half soup + full chicken gravy + full fried ries  PKR/-1400"<<endl;
		cout<<"003 bettered fried browns PKR/-399"<<endl;
		cout<<"004 Black pepper chicken  PKR/-750"<<endl;
		cout<<"005 hicken chilly dry PKR/-700"<<endl;
		cout<<"006 Chicken hot garllic PKR/-750"<<endl;
		cout<<"007 beijing beef PKR/-850"<<endl;
		cout<<"008 Dry beef chilly  PKR/-799"<<endl;
		cout<<"009 Beef in oister souce PKR/-850"<<endl;
		cout<<"010 Honey wings PKR/- 600"<<endl;
		cout<<"please enter the number to place your order :";
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		 
		 if(more==1)
		 {
		 
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
	{
		
	cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
	}}}}}}}}}}
cout<<"you buy successfully\n";
cout<<"your order is delieverd in 45 min\n";
    }
}
	else if(num==02)
	{
		{
		int food,more;
		cout<<"Select  number for food you want to order"<<endl;
		cout<<"001 2mini naan + curly fries+ Drink  PKR/-250"<<endl;
		cout<<"002 2 naan + curly fries + 2 Drinks PKR/-750"<<endl;
		cout<<"003 Half kg chicken karahi + full tikka boti + beef kabab + rogni naan 05 + 1.5 drink PKR/-1399"<<endl;
		cout<<"004 portion chicken karahi tikka boti + seekh kabab + naan + drink  PKR/-400"<<endl;
		cout<<"005 2 portion chicken karahi + yikka boti + seekh kabab ( 4 pieces) + naan 04 +2 drinks PKR/-800"<<endl;
		cout<<"006 half kg mutton karahi + full plate tikka boti + beef kabab + 06 naan+ 1.5 drink  PKR/-2000"<<endl;
		cout<<"007 beijing beef PKR/-850"<<endl;
		cout<<"008 Dry beef chilly  PKR/-799"<<endl;
		cout<<"009 Beef in oister souce PKR/-850"<<endl;
		cout<<"010 Drink PKR/-149"<<endl;
		cout<<"please enter the number to place your order :";
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		 
		 if(more==1)
		 {
		 
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
	{
		
	cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
	}}}}}}}}}}
cout<<"you buy successfully\n";
cout<<"your order is delieverd in 45 min\n";
    }
	}
	else if(num==03)
	{
		{
		int food,more;
		cout<<"Select  number for food you want to order"<<endl;
		cout<<"001 Chicken in Hot Garlic Sauce PKR/-699"<<endl;
		cout<<"002 Hot N Sour Chickens  PKR/-600"<<endl;
		cout<<"003 Chicken Cashewnuts PKR/-650"<<endl;
		cout<<"004 Beijing Chicken  PKR/-750"<<endl;
		cout<<"005 Almond Chicken PKR/-799"<<endl;
		cout<<"006 Beijing Beef PKR/-650"<<endl;
		cout<<"007 beijing beef PKR/-850"<<endl;
		cout<<"008 Hot Black Pepper Beefy  PKR/-799"<<endl;
		cout<<"009 Fish in Hot Garlic Sauce PKR/-850"<<endl;
		cout<<"010 Home Made Style Fish PKR/- 600"<<endl;
		cout<<"please enter the number to place your order :";
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		 
		 if(more==1)
		 {
		 
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
	{
		
	cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
	}}}}}}}}}}
cout<<"you buy successfully\n";
cout<<"your order is delieverd in 45 min\n";
    }
	}
	else if(num==04)
	{
			{
		int food,more;
		cout<<"Select  number for food you want to order"<<endl;
		cout<<"001 zinger burger + drink PKR/-330"<<endl;
		cout<<"002 kentkey burger + drink  PKR/-550"<<endl;
		cout<<"003 stacker burger + drink PKR/-560"<<endl;
		cout<<"004 mighty burger + drink  PKR/-500"<<endl;
		cout<<"005 9 piece bucket  PKR/-1100"<<endl;
		cout<<"006 10 hot wings PKR/-400"<<endl;
		cout<<"007 9 hot shot PKR/-300"<<endl;
		cout<<"008 4 zinger + 1.5 drink  PKR/-1100"<<endl;
		cout<<"009 mighty + staker + kentkey + zinger + 1.5 drink  PKR/-1400"<<endl;
		cout<<"010 9 piece bucket + 4 colysala + 1.5 drink PKR/- 1550"<<endl;
		cout<<"please enter the number to place your order :";
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		 
		 if(more==1)
		 {
		 
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
	{
		
	cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
	}}}}}}}}}}
cout<<"you buy successfully\n";
cout<<"your order is delieverd in 45 min\n";
    }
	}
	else if(num==05)
	{
		int food,more;
		cout<<"Select  number for food you want to order"<<endl;
		cout<<"001 amercino burger fries + drink  PKR/- 350"<<endl;
		cout<<"002 2 chicken shawarma + Drink PKR/-350"<<endl;
		cout<<"003 5 chucken nugits + fried wings +fries  + Drink PKR/-350"<<endl;
		cout<<"004 4 zinger + fries +1.5 Drinks PKR/-1100"<<endl;
		cout<<"005 family pizza +1.5 Drink PKR/-1100"<<endl;
		cout<<"006 macroni salaad   PKR/-200"<<endl;
		cout<<"007 spicy wings  + drink PKR/-300"<<endl;
		cout<<"008 crispy chicken burger  PKR/-375"<<endl;
		cout<<"009 stuffed brest burger  PKR/-370"<<endl;
		cout<<"010 Honey chicen wings PKR/- 500"<<endl;
		cout<<"please enter the number to place your order :";
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		 
		 if(more==1)
		 {
		 
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		
		if(more==1)
		{
		cin>>food;
		cout<<"if buy more food enter 1 otherwise press any key =";
		cin>>more;
		if(more==1)
	{
	
	}}}}}}}}
cout<<"you buy successfully\n";
cout<<"your order is delieverd in 45 min\n";
    }
	

