//Creator: Adrian Gomez-Mora
//Date: 9/28/16
/* This is a conversion program for distances 
 * miles, yards, feet, and inches.*/
 
 #include <iostream>
 using namespace std;
 
class DistanceConverter{
 private:
 double miles_;
 
 public:
 DistanceConverter(){
  miles_=0;
 }
 /*DistanceConverter(double x){
  miles_=x;
 } */
 
 void SetDistFromMiles(double miles){
  miles_= miles;
 }
 double GetDistAsMiles(){
  return miles_;
 }
 
 void SetDistFromYards(double yards){
  miles_= yards * .000568182;
 }
 double GetDistAsYards(){
  return miles_*1760;
 }
 
 void SetDistFromFeet(double feet){
  miles_= feet * .0001893939;
 }
double GetDistAsFeet(){
 return miles_ * 5280;
} 
 
 void SetDistFromInches(double inches){
  miles_= inches * .000015782828;
 }
 double GetDistAsInches(){
  return miles_ * 63360;
 }
 
 void SetDistFromMeters(double meters){
  miles_= meters/1609.344;
 }
 double GetDistAsMeters(){
  return miles_ * 1609.344;
 }
  
 };
int main() {
   cout<<"1 mile to feet."<<endl;
   DistanceConverter distance1;
   distance1.SetDistFromMiles(1);
   cout<<distance1.GetDistAsFeet()<<endl;
   
   cout<<"1 mile to inches."<<endl;
   cout<<distance1.GetDistAsInches()<<endl;
   
   cout<<"1 mile to meters."<<endl;
   cout<<distance1.GetDistAsMeters()<<endl;
   
   cout<<"1 mile to yards."<<endl;
   cout<<distance1.GetDistAsYards()<<endl;
   
   cout<<"16 meters to miles."<<endl;
   distance1.SetDistFromMeters(16);
   cout<<distance1.GetDistAsMiles()<<endl;
   
   cout<<"20 yards to feet."<<endl;
   distance1.SetDistFromYards(20);
   cout<<distance1.GetDistAsFeet()<<endl;
   
   cout<<"100 inches to meters."<<endl;
   distance1.SetDistFromInches(100);
   cout<<distance1.GetDistAsMeters()<<endl;
   
   cout<<"1 meter to miles."<<endl;
   distance1.SetDistFromMeters(1);
   cout<<distance1.GetDistAsMiles()<<endl;
   
}