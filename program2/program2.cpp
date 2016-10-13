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
 DistanceConverter(double x){
  miles_=x;
 }
 
 void SetDistFromMiles(double miles){
  miles_= miles;
 }
 double GetDistFromMiles(){
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
    
}