#include <iostream>
#include <cmath>
using namespace std;

double fo(double x0);
double fd(double x0);
double x_next(double x0);

int main()
{
  int tos=0;
  double xz=0;
  cout<<"Insert starting x: ";
  cin>>xz;
  cout<<"\nInsert Iteration time: ";
  cin>>tos;
  if(tos<=0)
  {
    cerr<<"\nInvalid Argument."<<endl;
    return 1;
  }
  for(int i=1;i<tos;i++) {xz=x_next(xz); if(fo(x0)==0) break;}
  cout<<"\nFinal Answer: "<<xz<<endl;
  return 1;
 }
 
 double fo(double x0)
 {
  double xt;
  xt=x0+2;//Input the equation you want to solve.
  return xt;
 }
 
 double fd(double x0)
 {
  double xt;
  xt=1;
  return xt;
 }
 
 double x_next(double x0)
 {
  double xt;
  if(fd(x0)==0)
  {
    if(fo(x0)==0) return x0;
    exit(1);
  }
  else
  {
    xt=x0-(fo(x0)/fd(x0));
  }
}
