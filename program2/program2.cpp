//Creator: Adrian Gomez-Mora
//Date: 9/28/16
/* This is a conversion program for distances 
 * miles, yards, feet, and inches.*/
 
 #include <iostream>
 using namespace std;
 
 double MilesToYards(double Yards){
  double Miles=0;
  const double MilesConv=1760;
  Miles = MilesConv * Yards;
  
  return Miles;
}

 double YardsToMiles(double Miles){
  double Yards=0;
  const double YardsConv=.0005681818;
  Yards = YardsConv * Miles;
  
  return Yards;
 }
 
 double MilesToMeters (double Meters){
  double Miles= 0;
  
  Miles= 1609.344 * Meters;
  
  return Miles;
 }
int main() {
    
    cout<<MilesToYards(1)<<endl;
    cout<<YardsToMiles(1)<<endl;
    cout<<MilesToMeters(1)<<endl;
}