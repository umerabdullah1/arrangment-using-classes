#include <iostream>
#include<list>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
 class Users{
 	public:
 	list<string> name;
 	list<int> age;
 };
 int main(){
 	Users user;
 	user.name={"jhone","mike","devid","colton"};
 	user.age={19,20,24,25};
 	cout<<"name\t"<<"age"<<endl;
 	auto user_name=user.name.begin();
 	auto user_age=user.age.begin();
 	while(user_name!=user.name.end() && user_age!=user.age.end()){
      cout << *user_name<<"\t"<<*user_age<<endl;
	    ++user_name;
	    ++user_age;
      
    
}
return 0;
 }