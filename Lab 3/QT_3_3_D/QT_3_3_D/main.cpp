#include <iostream>
#include <QTextStream>

int main()
{
 QTextStream cout(stdout);
 int a=2, n=5, m=1;
 for(int i=1;i<=n;i++)
 {
     m*=(a*i)*(a*i);
     cout<<i<<"\t"<<m<<"\n";
 }
    cout<<m<<"\n";
    return 0;
}
