#include <iostream>

using namespace std;
void showMovies() {
    cout<<"Available Movies:"<<endl;
    cout<<"1. Movie 1"<<endl;
    cout<<"2. Movie 2"<<endl;
    cout<<"3. Movie 3"<<endl;
    cout<<"Choose the movie by entering the number (1-3): ";
}

void displaySeats(char seats[5][10]) 
{
cout<<endl<<"Current seating arrangement:"<<endl;
for(int i=0;i<5;i++)
{
for(int j=0;j<10;j++)
{
cout<<"["<<seats[i][j]<<"]";  
}
cout<<endl;
}
}
void bookSeat(char seats[5][10]) {
int row,col;
cout<<endl<<"Enter the row (0 to 4):";
cin>>row;
cout<<"Enter the column (0 to 9):";
cin>>col;
if(row>=0 && row<5 && col>=0 && col<10) 
{
if(seats[row][col]=='A') 
{ 
seats[row][col]='B';  
cout<<"Booking successful! Your seat"<<row<<"x"<<col<<"is reserved.\n";
} 
else 
{
cout<<"Sorry, the seat is already booked."<<endl;
}
}
 else 
{
cout<<"Invalid seat selection. Try again."<<endl;
}
}

int main() 
{
 
char seats[5][10];
for (int i=0;i<5;i++) 
{
for (int j=0;j<10;j++) 
{
    seats[i][j]='A';
}
}

int movieChoice;
bool continueBooking=true;
while(continueBooking) 
{
showMovies(); 
cin>>movieChoice;
if(movieChoice==1) 
{
cout<<"You selected Movie 1"<<endl;
}
 else if(movieChoice==2) 
 {
cout<<"You selected Movie 2"<<endl;
}
else if(movieChoice==3) 
{
cout<<"You selected Movie 3"<<endl;
}
 else 
 {
cout<<"Invalid selection! Please choose a valid movie."<<endl;
continue;  
 }
 displaySeats(seats);
 bookSeat(seats);
 cout<<endl<<"Would you like to book another seat? (1 for Yes, 0 for No): ";
 cin>>continueBooking;
    }
cout<<endl<<"Thank you for using the Cinema Booking System!\n";
return 0;
}