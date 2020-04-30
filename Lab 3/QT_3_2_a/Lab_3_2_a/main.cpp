#include <QTextStream>
int main ()
{
    int a,b,c;
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    cout<<"First nambe - ";
    cout.flush();
    cin>>a;
    cout<<"Second nambe - ";
    cout.flush();
    cin>>b;
    if(a>b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
       c = a;
       a = b;
       b = c;

        cout<<"a = "<<a<<" "<<"b = "<<b;
    }
    return 0;
}
