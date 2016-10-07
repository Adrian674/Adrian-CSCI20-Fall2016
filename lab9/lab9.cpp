//Creator: Adrian Gomez-Mora
//Date: 9/26/16
/*Create a class that converts temperatures between Kelvin, Fahrenheit and Celsius.  
 *It will always internally store the value in kelvin. 
 This class will be run by the provided main.*/
 
 #include <iostream>
 using namespace std;
 
 class TemperatureConverter {
  private:
  double kelvin_;
  
  public:
  TemperatureConverter(){
   kelvin_=0;
  }
  TemperatureConverter(double whatever){
   kelvin_= whatever;
  }
  
  void SetTempFromKelvin(double kelvin){
     kelvin_ = kelvin;
  }
  double GetTempFromKelvin(){
   return kelvin_;
  }
  void SetTempFromCelsius(double celsius){
     kelvin_= celsius + 273.15;
  }
  void SetTempFromFahrenheit(double fahrenheit){
     kelvin_= (5 * (fahrenheit -32)/9) + 273.15;
  }
  double GetTempAsCelsius(){
     return kelvin_ - 273.15;
  }
  double GetTempAsFahrenheit(){
      return ((((kelvin_ -273.15)*9)/5) + 32);
  }
  void PrintTemperatures(){
   cout<<"Temperature as Celsius is: ";
   cout<<GetTempAsCelsius()  << endl;
   cout<<"Temperature as Fahrenheit is: ";
   cout<< GetTempAsFahrenheit() << endl
       <<"Temperature as Kelvin is: ";
   cout<< GetTempFromKelvin()<<endl;
  }
  
 };
 
 int main(){
     
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
   
   return 0;
 }
 