#include <QTextStream>
int main()
{ int a,b,c;
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    cout.flush();
    cout<<" first =" <<endl;
    cin>>a;
    cout.flush();
    cout<<" second ="<<endl;
    cin>>b;
    cout.flush();
    cout<<" third ="<<endl;
    cin>>c;

    if (a==b && b==c)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"diferent"<<endl;
    }


}
