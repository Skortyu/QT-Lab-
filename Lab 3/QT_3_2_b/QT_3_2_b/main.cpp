#include <QTextStream>

int main()
{
    int a;
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    cout<<"Pleas enter a nambe - ";
    cout.flush();
    cin>>a;

    if(a<=100 && a>=(-100))
    {
        a++;
        cout<<a<<endl;
    }
    else
    {
     a=0;
     cout<<a<<endl;
    }
           return 0;
}
