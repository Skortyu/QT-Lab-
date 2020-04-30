#include <QTextStream>

int main()
{
    QTextStream cout(stdout);
    for (int i=0;i<1;i++)
    {
       cout<<"[[[[[[[[[[[[[[[      ]]]]]]]]]]]]]]]"<<endl;
    }
    for (int i=0;i<2;i++)
    {
       cout<<"[::::::::::::::      ::::::::::::::]"<<endl;
    }
    for(int i=0; i<1; i++)
    {
       cout<<"[::::::[[[[[[[:      :]]]]]]]::::::]"<<endl;
    }
    for(int i=0; i<10; i++)
    {
       cout<<"[:::::[                     ]::::::]"<<endl;
    }
    for(int i=0; i<1; i++)
    {
       cout<<"[::::::[[[[[[[:      :]]]]]]]::::::]"<<endl;
    }
    for (int i=0;i<2;i++)
    {
       cout<<"[::::::::::::::      ::::::::::::::]"<<endl;
    }
    {
       cout<<"[[[[[[[[[[[[[[[      ]]]]]]]]]]]]]]]"<<endl;
    }
    return 0;
}
