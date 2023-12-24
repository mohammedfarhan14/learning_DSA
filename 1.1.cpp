//Learn the basics of c++ (1.1)         
//A 2 Z  DSA Sheet BY STRIVER
#include <iostream>
#include <string> //bits/stdc++.h

using namespace std;

int main(){

cout<<"i am learning the DSA Course from Striver and Love Babbar"<<endl;\
//-----------------------------------------------------------------------------------------------------------------------------

//user input and output in c++

int x, y;
cout<<"enter the value of x and y: " ;
cin >> x >> y;
cout<< "the value of X & Y is: ";
cout<< x <<" and "<< y;
//-------------------------------------------------------------------------------------------------------------------------------
//Datatypes in c++

// int, float, char, long, double, long long, string 

//string and getline 
string str;
getline (cin, str);
cout<< str;
//-------------------------------------------------------------------------------------------------------------------------------
// if-else statement
//write a program that takes an input of an age and prints if u r adult or not

int age;
cout<<"Enter your age: "<<endl;
cin>>age;
if(age<18 && age>=1){
    cout<<"you are not an adult";
}
else if(age>18 ){
    cout<<"You are an adult"<<endl;
}
else{
    cout<<"Invalid age"<<endl;
}
//-------------------------------------------------------------------------------------------------------------------------------
/*
 A school has the following rules for grading system:
a. below 25 is - F
b. 25 to 44 is - E
c. 45 to 49 is - D
d. 50 to 59 is - C
e. 60 to 79 is - B 
f. 80 to 100 is - A
*/
int marks;
cin >> marks;
if(marks < 25){
    cout<<"F";
}
else if (marks >=25 && marks <=44){
    cout<<"E";
}
else if (marks >=45 && marks <=49){
    cout<<"D";
}
else if (marks >=50 && marks <=59){
    cout<<"C";
}
else if (marks >=60 && marks <=79){
    cout<<"B";
}
else if (marks >=80 && marks <=100){
    cout<<"A";
}
else {
    cout<<"invalid marks";
}
//-------------------------------------------------------------------------------------------------------------------------------
/*
 Take the age from the user and then decide accordingly 
 1. if age < 18, 
 print-> "not eligible for job"
 2. if age is >= 18
 print-> "eligible for job"
 3. if age is >= 55 and age <= 57
 print-> " eligible for job but retirement soon"
 4. if age >57
 print-> " retirement time"
*/
int age;
cout<<"Enter age: ";
cin>> age;
if (age < 18){
    cout<<"not eligible for job";
}
else if( age <= 57){
    cout<<"eligible for job";
  if (age >=55){
        cout<<", but retirement soon";
    }
}
else if( age > 57 ){
    cout<<"retirement time exceded";
}
//-------------------------------------------------------------------------------------------------------------------------------
/*
Take the day no and print the corresponding day
for 1 print monday.
for 2 print tuesday and so on....
*/
int day;
cout<<"Enter day: ";
cin>> day;
switch(day){
    case 1: 
        cout<<"Monday";
        break;
    case 2: 
        cout<<"Tuesday";
        break;
    case 3:
         cout<<"Wednsday";
        break;
    case 4: 
        cout<<"Thursday";
        break;
    case 5:
         cout<<"Friday";
        break;
    case 6: 
        cout<<"Saturday";
        break;
    case 7: 
        cout<<"Sunday";
        break;
   
    default: 
        cout<<"invalid";

}
//-------------------------------------------------------------------------------------------------------------------------------
// Arrays & Strings(basics and theory)

//and yes u can perform operations on the arrays
// Basically a character array is known as string( remember its also an array, but of characters)

//-------------------------------------------------------------------------------------------------------------------------------
// FOR LOOPS
for(int i =1; i<10; i++){
    cout<<"Mohammed Farhan"<<" "<<i <<endl;
}


for(int i=5; i>0; i--){
    cout<<"Mohammed Farhan"<<" "<<i <<endl;
}
//-------------------------------------------------------------------------------------------------------------------------------
// WHILE LOOPS
int i=1;
while(i<=5){
    cout<<"Mohammed Farhan"<<" "<<i <<endl;
    i++;
}

int i =5;
while(i>=0){
    cout<<"Mohammed Farhan"<<" "<<i <<endl;
    i--;
}
//-------------------------------------------------------------------------------------------------------------------------------
// DO WHILE LOOP
// do while loops is used when u want ur line of code to be executed atleast once no matter the condition 

int i=1;
do{  
    cout<<"Mohammed Farhan"<<" "<<i <<endl;
    i++;  // if u dont put i++, then there will be an infinite loop, cuz i will always remain 1.
}while(i<=5);

int i=5;
do{ 
    cout<<"Mohammed Farhan"<<" "<<i <<endl;
    i--;
}while(i>=0);

//-------------------------------------------------------------------------------------------------------------------------------
//FUNCTIONS
// Functions are a set of code which performs something for u
// Functions are used to modularise code
// Functions are used to increase readablity
// Functions are used to use same code multiple times

// Void function             ->    it doesnot return any value
// return function           ->    it returns a value
// paramaterised function    ->    it takes a paramater as an input
// non paramaterised         ->    it doesnot take any paramater

void printname(){
    cout<<"Mohammed Farhan"<<endl;
}; // void function should be outside the main function
printname();

//--------------------------------------
void printname(string name){
    cout<<"hey"<<" "<<name<<endl;
};// void function should be outside the main function
    cout<<"enter name ?: "<<endl;
  string name;
  cin>>name;
  printname(name);
//-----------------------------------------
void printname(string name){
    cout<<"hey"<<" "<<name<<endl;
};// void function should be outside the main function

    cout<<"enter name ?: "<<endl;
  string name;
  cin>>name;
  printname(name);
  
  string name2;
  cin>>name2;
  printname(name2);
//----------------------------------------------

//.. Take two numbers and print their sum using functions
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}//outside main function

int num1, num2;
cout<<"Enter 2 numbers: "<<endl;
cin>> num1 >> num2;
int res = sum(num1, num2);
cout<<res;








    
return 0;
} 
