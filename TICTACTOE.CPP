#include<iostream>
using namespace std;

char sqr[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void borad();

int main()
{
	int player=0,i,choice;
	char mark;
	do
	{
		borad();
		player=(player%2)?1:2;
		
		cout<<"player" << player<<", enter a number : ";
		cin>>choice;
		
		mark=(player==1)? 'X' : '0';
	
	if(choice==1 && sqr[1]=='1')
	sqr[1]=mark;
	
	else if(choice==2 && sqr[2]=='2')
	sqr[2]=mark;
	
	else if (choice ==3 && sqr[3]=='3')
	  sqr[3]=mark;
	  
	  else if(choice==4 && sqr[4]=='4')
	  sqr[4]=mark;
	  
	   else if(choice==5 && sqr[5]=='5')
	  sqr[5]=mark;
	  
	   else if(choice==6 && sqr[6]=='6')
	  sqr[6]=mark;
	  
	   else if(choice==7 && sqr[7]=='7')
	  sqr[7]=mark;
	  
	   else if(choice==8 && sqr[8]=='8')
	  sqr[8]=mark;
	  
	   else if(choice==9 && sqr[9]=='9')
	  sqr[9]=mark;
	  
	  else
	  {
	  	cout<<"Invalid move ";
	  	
	  	player--;
	  	cin.ignore();
	  	cin.get();
	  }
	  i=checkwin();
	  
	  player++;
} while(i==-1);
borad();
if(i==1)

cout<<"==>\"aplayer "<<--player<<" "<<"win";

else
 
cout<<"==>\agame draw";

cin.ignore();
cin.get();
return 0;
}
int checkwin()
{
	if(sqr[1]==sqr[2]&& sqr[2]==sqr[3])
	return 1;
	
	else if(sqr[4]==sqr[5]&& sqr[5]==sqr[6])
	return 1;
	
	else if(sqr[7]==sqr[8]&& sqr[8]==sqr[9])
	return 1;
	
	else if(sqr[1]==sqr[4]&& sqr[4]==sqr[7])
	return 1;
	
	else if(sqr[2]==sqr[5] && sqr[5]==sqr[8])
	return 1;
	
	else if(sqr[3]==sqr[6]&& sqr[6]==sqr[9])
	return 1;
	
	else if(sqr[1]==sqr[5]&& sqr[5]==sqr[9])
	return 1;
	
	else if(sqr[3]==sqr[5]&& sqr[5]==sqr[7])
	return 1;
	
	else if(sqr[1]!='1' && sqr[2]!='2' && sqr[3]!='3' && sqr[4]!='4' && sqr[5]!='5' && sqr[6]!='6'&&  sqr[7]!='7' && sqr[8]!='8' && sqr[9]!='9')
	return 0;
	
else 
	return -1;
}
void borad()
{
	system("cls");
	cout<<"\n\n\tTic Tac Toe\n\n";
	
	cout<<"player 1 (X) - player 2(0)" <<endl<<endl;
	cout<<endl;
	
	cout<<"     |    |     "  <<endl;
	cout<<"  "<< sqr[1] <<"  |  "<<sqr[2]<<" |  " <<sqr[3]<<endl;
	
	cout<<"_____|____|_____"<<endl;
	cout<<"     |    |     "<<endl;
	
	cout<<"  "<<sqr[4]<<"  |  "<<sqr[5]<<" |  " <<sqr[6]<<endl;

   	cout<<"_____|____|_____"<<endl;
	cout<<"     |    |     "<<endl;
	
	cout<<"  "<<sqr[7]<<"  |  "<<sqr[8]<<" |  " <<sqr[9]<<endl;
		
	cout<<"     |    |     "<<endl <<endl;
}

