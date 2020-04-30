#include <iostream>
#include <QTextStream>

int main()
{
  QTextStream cout(stdout);
  int sum=0;
  for(double x=1;x<112;x+=3 )
  {
      sum+=x;
  }
  cout<<"Sum = "<<sum<<endl;
  return 0;
}
