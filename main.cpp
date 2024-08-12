#include <iostream>
using namespace std;
class Player{
 private:
 string name;
 int healthPoints;
 int attackPoints;
 int experiencePoints;
 int level;
 public:
 Player(){
 name="unknown";
 healthPoints=100;
 attackPoints=20;
 experiencePoints=0;
 level=2;
 }
 Player(string n){
 name=n;
 healthPoints=100;
 attackPoints=20;
 experiencePoints=0;
 level=2;
 }
 void attack(){
 cout<<name <<" attacks with "<< attackPoints<<" attack points"<<endl;
 }
 void gainExperience(int points){
 experiencePoints+=points;
 }
 void display(){
 cout<<"Name:"<<name<<endl;
 cout<<"Health Points:"<<healthPoints<<endl;
 cout<<"Attack Points:"<<attackPoints<<endl;
 cout<<"Experience Points:"<<experiencePoints<<endl;
 cout<<"Level:"<<level<<endl;
 }
};
main()
{
 Player player1;
 cout<<"Attributes of Player 1:"<<endl;
 player1.display();
 cout<<endl;
 cout<<"Attack of Player 1:"<<endl;
 player1.attack();
 cout<<endl;
 Player player2("Gohan");
 cout<<"Attack of Player 2:"<<endl;
 player2.attack();
 cout<<endl;
 cout<<"Experience of Player2:"<<endl;
 player2.gainExperience(30);
 cout<<endl;
 cout<<"Attributes of Player 2:"<<endl;
 player2.display();}
