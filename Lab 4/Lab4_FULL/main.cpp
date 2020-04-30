#include <QTextStream>
#include <QString>
#include <QtAlgorithms>
#include <iostream>



int main()
{   QTextStream cout(stdout);
    QTextStream cin(stdin);

    int TASK,item;
    char menu, menu_item;
    cout.flush();
do {

   cout<<"TASK. - 2"<<endl;
   cout<<"TASK. - 3"<<endl;
   cout<<"TASK. - 4"<<endl;
   cout<<"TASK. - 5"<<endl<<endl;
   cout<<"Nambe TASK. - "<<endl;
      {
       cin>>TASK;

            if(TASK==2)
                { do
                    {
                    cout<<"Nambe item - 1"<<endl;
                    cout<<"Nambe item - 2"<<endl;
                    cout<<"Nambe item - 3"<<endl;
                    cout<<"Nambe item - 4"<<endl;
                    cout<<"Nambe item - 5"<<endl;
                    cout<<"Nambe item - 6"<<endl<<endl;
                    cout<<"Nambe item - "<<endl<<endl;
                    QString W1="Hello", W2="my", W3="sleepless",W4="night",All_W;
                    QString r ="!!!";
                    QString L="L L L ";
                    All_W=W1+" "+W2+" "+W3+" "+W4;
                    int size;
                {
                cin>>item;

                       if(item==1)
                     {char p=' ';
                      All_W=W1+" "+W2+" "+W3+" "+W4;
                      cout<<"First methot"<<endl<<All_W<<endl;
                      All_W=W1+p+W2+p+W3+p+W4;
                      cout<<"Sekond methot"<<endl<<All_W<<endl;
                      cout<<"Third methot"<<endl;
                      cout<<W1<<"o"<<W2<<" "<<W3<<" "<<W4<<endl<<endl;
                     }
                 else  if(item==2)
                 {
                  cout<<All_W+r<<endl;
                 }
                 else  if(item==3)
                 {QString f="Word";

                 cout<<f+" "+All_W<<endl;
                 }
                 else  if(item==4)
                 {
                  All_W+=" RRRRRRRR";
                  cout<<All_W<<endl;
                 }
                 else  if(item==5)
                 {
                  size=All_W.length();
                  cout<<"size = "<<size<<endl;
                 }
                 else  if(item==6)
                 {
                 cout<<L+All_W<<endl;
                 }
                    }

                cout<<"Return Menu TASK"<<endl;
                cout<<"press any number here and press enter"<<endl;
                cin>>menu_item;
                } while (menu_item<=1) ;}

            else if(TASK==3)
            {  do{  cout<<"Nambe item - 1"<<endl;
                    cout<<"Nambe item - 2"<<endl;
                    cout<<"Nambe item - 3"<<endl;
                    int size;
                    QString Sentence1, Sentence2, Sentence3;
                    Sentence1="This function is overloaded.This function overloaded prepend().Return the numbers of characters string";
                    Sentence2="This function is overloaded.This function overloaded prepend().";
                    Sentence3="This function is overloaded.";

                    size=Sentence1.length();
             {
                cin>>item;
                if(item==1)
                {
                    for(int i=0; i<10;i++)
                    {
                        cout<<Sentence1[i];
                    }
                    for(int i=size-4 ; i<=size;i++)
                    {
                        cout<<Sentence1[i];
                    }

                }
           else if(item==2)
                {
                  for(int i = 0;i<=size;i++)
                  {
                   if(Sentence2[i]=="c")
                   {
                    size=0;
                   }  cout<<Sentence2[i];
                  }
                }
           else if(item==3)
                {int size0;
                 size0=Sentence3.length();
                 for(int i=0;i<=size0;i++)
                 {
                  cout<<Sentence3[i];
                  if(Sentence3[1]==" ")
                  {
                  cout<<endl;
                  }
                 }
                }

             }
                    cout<<"Return Menu TASK"<<endl;
                    cout<<"press any number here and press enter"<<endl;
                    cin>>menu_item;
                 }while (menu_item<=1);}

            else if(TASK==4)
            { do{  cout<<"Nambe item - 1"<<endl;
                    cout<<"Nambe item - 2"<<endl;
                    cout<<"Nambe item - 3"<<endl;
                    cout<<"Nambe item - 4"<<endl;
                    cout<<"Nambe item - 5"<<endl;
                    cout<<"Nambe item - 6"<<endl;

                    QString W1, W2, W3,W4,W5,W6;
                    int size;
                    W1="It`s a very bad day,gays";
                    W2="Have a good day!";
                    W3="It`s a very bad day,gays";
                    W4="It`s a very bad day,gays";
                    W5="It`s a very bad day,gays";
                    W6="It`s a very bad day,gays";
                    size=W3.length();


                    {

                      if(item==1)
                       {
                         cout<<W1<<endl;
                         cout<<W1.replace(0,10,"!!")<<endl;
                       }
                     else if(item==2)
                       {
                         cout<<W2.replace(12,13,"1")<<endl;
                         cout<<W2.replace(12,13,"night!")<<endl;
                       }
                     else if(item==3)
                       {int g = 0;
                          cout<<"\n"<<W3;
                          while ((g = W3.indexOf("a", g)) != -1) {
                              //W3.replace(g,g,"O");
                              W3[g] = 'O';
                              g++;
                          }
                          cout<<W3;
                       }

                     else if(item==4)
                       {
                          for (int i = 0; i <= size; i++) {
                                 if(W4[i] == " "){
                                     cout<<"--";
                                 }
                                 else {
                                     cout<<W4[i];
                                 }
                       }
                      }


                    }
                    cout<<"Return Menu TASK"<<endl;
                    cout<<"press any number here and press enter"<<endl;
                    cin>>menu_item;
                 }while (menu_item<=1);}

            else if(TASK==5)
            {

            }
      }
   cout<<"Nambe TASK. "<<endl;
   cin>>menu;
   } while (menu>=9);


}
