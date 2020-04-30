#include <iostream>
#include <QTextStream>
int main()
{
    QTextStream cout(stdout);

    for(double
        x=1.2;
        x<=3;
        x+=0.2)
    {
      cout<<x<<endl;
    }
    return 0;
}
