#include <QTextStream>
int main()
{ int A=0,B=0,C=0,D=0,V=0;

    QTextStream cout(stdout);
    QTextStream cin (stdin);

    cout.flush();

    cout<<"Your nambe ="<<endl;
    cin>>A;
    B=A/100;
    C=(A-B*100)/10;
    D=A-(B*100)-(C*10);
    V=(D*100)+(C*10)+B;
    cout<<"New Your Nambe = "<<V;



}
