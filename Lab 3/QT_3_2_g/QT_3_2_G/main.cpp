#include <QTextStream>
int main()
{
    int Ax=0,Ay=0,Bx=0,By=0,Cx=0,Cy=0,Dx=0,Dy=0;

    QTextStream cout(stdout);
    QTextStream cin (stdin);
    cout.flush();
    cin.flush();

    cout<<"Cordents point A(x.y)"<<endl;

    cin>>Ax;

    cin>>Ay;
    cout<<"Cordents point B(x.y)"<<endl;

    cin>>Bx;

    cin>>By;
    cout<<"Cordents point C(x.y)"<<endl;
    cin>>Cx;

    cin>>Cy;
    if(Ay==By && Ax==Cx)
    {
        cout<<"Good"<<endl;
        Dy=Cy*1;
        Dx=Bx*1;
        cout<<"D("<<Dx<<"."<<Dy<<")";

    }else
    {
      cout<<"don`t 90`";
    }



}
