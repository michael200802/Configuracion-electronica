//Hola xd
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<sstream>
#include<conio.h>

using namespace std;

void gotoxy(int x,int y);

void text_box_number(string&num,int&x,int&y,int&topM,int&topm,int&cf);

void input(int&numero);

string semidesarrollada(int numero);

void abreviada(int numero,string&semi);

void orbitales(string&semi,int&numero);

int main(){
	system("title Menu/Configuracion electronica");
    int x;
    string configuracion_electronica_semi;
    input(x);
    configuracion_electronica_semi = semidesarrollada(x);
    abreviada(x,configuracion_electronica_semi);
    orbitales(configuracion_electronica_semi,x);
    cout<<endl;
    system("pause");
    system("cls");
    main();
    return 0;
}

//Funcion gotoxy
//Permite posicionar el cursor en la posicion que le pasamos
void gotoxy(int x,int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwpos;

    dwpos.X = x;
    dwpos.Y = y;

    SetConsoleCursorPosition(hcon,dwpos);
}

//Caja de texto
void text_box_number(string&num,int&x,int&y,int&topM,int&topm,int&cf){
    //Tope del bucle for
    const int top_for = 254;
    //Contador del bucle for, es decir, siempre tiene el mismo valor que i
    int c = 0;
    //Posicion en la string num
    int p = 0;

    //Ciclo while 
    while (true)
    {
        //S aumenta a i, hasta que este sea mayor que 254
        for (unsigned char i = 0; i < top_for; i++)
        {
            //Si el valor ascii de i es igual al valor ascii de la tecla pulsada por el usuario
            if (GetAsyncKeyState(i) == -32767)
            {
                //Switch, que definira que caracter se ingresa en la string num
                switch (c)
                {
                case 48:
                    num[p] = '0';
                    if (atoi(num.c_str()) < topM && p != 10 || p == 0)
                    {
                        p = p + 1;
                        cout<<"0";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;

                case 49:
                    num[p] = '1';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"1";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;

                case 50:
                    num[p] = '2';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"2";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;

                case 51:
                    num[p] = '3';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"3";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;
                
                case 52:
                    num[p] = '4';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"4";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;
                
                case 53:
                    num[p] = '5';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"5";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;
                
                case 54:
                    num[p] = '6';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"6";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;
                
                case 55:
                    num[p] = '7';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"7";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;

                case 56:
                    num[p] = '8';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"8";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;
                
                case 57:
                    num[p] = '9';
                    if (atoi(num.c_str()) < topM  || p == 0)
                    {
                        p = p + 1;
                        cout<<"9";
                    }
                    else
                    {
                        num[p] = ' ';
                    }
                    break;
                //Aqui no se ingresa ningun numero
                case 8:
                    //Solo si se ha ingresado un numero se cumple el condicional
                    if (p != 0)
                    {
                        //Se retrocede en una posicion
                        p = p - 1;
                        //El anterior numero es intercambiado por un espacio 
                        num[p] = ' ';
                        //Borramos el caracter que no nos importa
                        gotoxy(x + p,y);
                        cout<<" ";
                        gotoxy(x + p,y);
                    }
                    break;
                }
                //Estos condicionales tiene que ver con el cierre del ingreso de datos

                //
                if(cf == 0 && p != 0 && atoi(num.c_str()) < topM && atoi(num.c_str()) > topm)
                {
                    if (c == 32)
                    {
                        x = x + p + 1;
                        cout<<" ";
                        break;
                    }

                    if (c == 13)
                    {
                        x = 0;
                        y = y + 1;
                        cout<<endl;
                        break;
                    }
                    
                }

                if (cf == 1 && p != 0 && atoi(num.c_str()) < topM && atoi(num.c_str()) > topm)
                {
                    if (c == 13)
                    {
                        x = 0;
                        y = y + 1;
                        cout<<endl;
                        break;
                    }
                    
                }
                
                if (cf == 2 && p != 0 && atoi(num.c_str()) < topM && atoi(num.c_str()) > topm)
                {
                    if (c == 32)
                    {
                        x = x + p + 1;
                        cout<<" ";
                        break;
                    }

                }
                
                break;
            }

            c = c + 1;
        }

        if(cf == 0 && p != 0 && atoi(num.c_str()) < topM && atoi(num.c_str()) > topm)
        {
            if (c == 32)
            {
                break;
            }
            if (c == 13)
            {
                break;
            }
        }

        if (cf == 1 && p != 0 && atoi(num.c_str()) < topM && atoi(num.c_str()) > topm)
        {
            if (c == 13)
            {
                break;
            }
            
        }

        if (cf == 2 && p != 0 && atoi(num.c_str()) < topM && atoi(num.c_str()) > topm)
        {
            if (c == 32)
            {
                break;
            }
            
        }
        
        c = 0;
    }
    
    
    
}

//Pide el numero atomico
void input(int&numero){
    //String que se rellenara en text_box_number
    string in_put;
    //Coordenadas para la funcion gotoxy 
    int x = 16, y = 0;
    //Tope mayor y tope menor, del numero ingresado
    int topM = 119, topm = 0;
    //Señala el carcter final.
    //Si es 1, el carcter final es un enter
    //Si es 2, el caracter final es un space
    //Si es 0, el carcter final puede ser un enter o un space
    int cf = 1;
    //Titulo
    cout<<"Numero atomico: ";
    //Funcion text box number
    //Esta modificara a la string in_put
    text_box_number(in_put,x,y,topM,topm,cf);
    //Rellenamos a el int numero, con el valor de la string in_put
    numero = atoi(in_put.c_str());
}

string semidesarrollada(int numero){
    //Presentamos el titulo
    cout<<"Semidesarrollada: \n";

    stringstream ss;
    streambuf* backup = cout.rdbuf();
    cout.rdbuf(ss.rdbuf());

    //Serie de condidionales que imprimiran la configuracion electronica del elemento en cuestion
    if (numero - 2 >= 0)
    {
        numero = numero - 2;
        cout<<"1s2 ";
        if (numero - 2 >= 0)
        {
            numero = numero - 2;
            cout<<"2s2 ";
            if (numero - 6 >= 0)
            {
                numero = numero - 6;
                cout<<"2p6 ";
                if (numero - 2 >= 0)
                {
                    numero = numero - 2;
                    cout<<"3s2 ";
                    if (numero - 6 >= 0)
                    {
                        numero = numero - 6;
                        cout<<"3p6 ";
                        if (numero - 2 >= 0)
                        {
                            numero = numero - 2;
                            cout<<"4s2 ";
                            if (numero - 10 >= 0)
                            {
                                numero = numero - 10;
                                cout<<"3d10 ";
                                if (numero - 6 >= 0)
                                {
                                    numero = numero - 6;
                                    cout<<"4p6 ";
                                    if (numero - 2 >= 0)
                                    {
                                        numero = numero - 2;
                                        cout<<"5s2 ";
                                        if (numero - 10 >= 0)
                                        {
                                            numero = numero - 10;
                                            cout<<"4d10 ";
                                            if (numero - 6 >= 0)
                                            {
                                                numero = numero - 6;
                                                cout<<"5p6 ";
                                                if (numero - 2 >= 0)
                                                {
                                                    numero = numero - 2;
                                                    cout<<"6s2 ";
                                                    if (numero - 14 >= 0)
                                                    {
                                                        numero = numero - 14;
                                                        cout<<"4f14 ";
                                                        if (numero - 10 >= 0)
                                                        {
                                                            numero = numero - 10;
                                                            cout<<"5d10 ";
                                                            if (numero - 6 >= 0)
                                                            {
                                                                numero = numero - 6;
                                                                cout<<"6p6 ";
                                                                if (numero - 2 >= 0)
                                                                {
                                                                    numero = numero - 2;
                                                                    cout<<"7s2 ";
                                                                    if (numero - 14 >= 0)
                                                                    {
                                                                        numero = numero - 14;
                                                                        cout<<"5f14 ";
                                                                        if (numero - 10 >= 0)
                                                                        {
                                                                            numero = numero - 10;
                                                                            cout<<"6d10 ";
                                                                            if (numero - 6 >= 0)
                                                                            {
                                                                                numero = numero - 6;
                                                                                cout<<"7p6 ";
                                                                                if (numero - 14 >= 0)
                                                                                {
                                                                                    numero = numero - 14;
                                                                                    cout<<"6f14 "; 
                                                                                    if (numero - 10 >= 0)
                                                                                    {
                                                                                        numero = numero - 10;
                                                                                        cout<<"7d10 ";
                                                                                        if (numero - 14 >= 0)
                                                                                        {
                                                                                            numero = numero - 14;
                                                                                            cout<<"7f14 ";
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            if (numero != 0)
                                                                                            {
                                                                                                cout<<"7f"<<numero<<" ";
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        if (numero != 0)
                                                                                        {
                                                                                            cout<<"7d"<<numero<<" ";
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    if (numero != 0)
                                                                                    {
                                                                                        cout<<"6f"<<numero<<" ";
                                                                                    }
                                                                                }
                                                                                
                                                                            }
                                                                            else
                                                                            {
                                                                                if (numero != 0)
                                                                                {
                                                                                    cout<<"7p"<<numero<<" ";
                                                                                }
                                                                            }
                                                                            
                                                                        }
                                                                        else
                                                                        {
                                                                            if (numero != 0)
                                                                            {
                                                                                cout<<"6d"<<numero<<" ";
                                                                            }
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        if (numero != 0)
                                                                        {
                                                                            cout<<"5f"<<numero<<" ";
                                                                        }
                                                                    } 
                                                                }
                                                                else
                                                                {
                                                                    if (numero != 0)
                                                                    {
                                                                        cout<<"7s1 ";
                                                                    }
                                                                }

                                                            }
                                                            else
                                                            {
                                                                if (numero != 0)
                                                                {
                                                                    cout<<"6p"<<numero<<" ";
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            if (numero != 0)
                                                            {
                                                                cout<<"5d"<<numero<<" ";
                                                            }
                                                        }
                                                        
                                                    }
                                                    else
                                                    {
                                                        if (numero != 0)
                                                        {
                                                            cout<<"4f"<<numero<<" ";
                                                        }
                                                    }
                                                    
                                                    
                                                }
                                                else
                                                {
                                                    if (numero != 0)
                                                    {
                                                        cout<<"6s1 ";
                                                    }
                                                }
                                                
                                            }
                                            else
                                            {
                                                if (numero != 0)
                                                {
                                                    cout<<"5p"<<numero<<" ";
                                                }
                                            }
                                            
                                        }
                                        else
                                        {
                                            if (numero != 0)
                                            {
                                                cout<<"4d"<<numero<<" ";
                                            }
                                        }
                                        
                                    }
                                    else
                                    {
                                        if (numero != 0)
                                        {
                                            cout<<"5s1 ";
                                        }
            
                                    }
                                    
                                }
                                else
                                {
                                    if (numero != 0)
                                    {
                                        cout<<"4p"<<numero<<" ";
                                    }
                                    
                                }
                                
                            }
                            else
                            {
                                if (numero != 0)
                                {
                                    cout<<"3d"<<numero<<" ";
                                }
                            }
                        }
                        else
                        {
                            if (numero != 0)
                            {
                                cout<<"4s1 ";
                            }
                        }
                    }
                    else
                    {
                        if (numero != 0)
                        {
                            cout<<"3p"<<numero<<" ";
                        }
                    }
                    
                }
                else
                {
                    if (numero != 0)
                    {
                        cout<<"3s1 ";
                    }
                    
                }
                
            }
            else
            {
                
                if (numero != 0)
                {
                    cout<<"2p"<<numero<<" ";
                }
            }
            
        }
        else
        {
            if (numero != 0)
            {
                cout<<"2s1 ";
            }
            
        }
        
    }
    else
    {
        if (numero != 0)
        {
            cout<<"1s1 ";
        }
        
    }

    cout.rdbuf(backup);
    cout << ss.rdbuf();

    return ss.str();
}


void abreviada(int numero,string&semi){

    //Presentamos el titulo
    cout<<endl<<"Abreviada: \n";
    
    if (numero <= 2)
    {
        cout<<semi;
    }
    else
    {
        if (numero > 2 && numero <= 10)
        {
            cout<<"[He] ";
            for (int i = 4; i < semi.length(); i++)
            {
                cout<<semi[i];
            }

        }
        else
        {
            if (numero > 10 && numero <= 18)
            {
            	cout<<"[Ne] ";
                for (int i = 12; i < semi.length(); i++)
                {
                    cout<<semi[i];
                }
                
            }
            else
            {
                if (numero > 18 && numero <= 36)
                {
                    cout<<"[Ar] ";
                    for (int i = 20; i < semi.length(); i++)
                    {
                        cout<<semi[i];
                    }
                    
                }
                else
                {
                    if (numero > 36 && numero <= 54)
                    {
                        cout<<"[Kr] ";
                        for (int i = 33; i < semi.length(); i++)
                        {
                            cout<<semi[i];
                        }
                        
                    }
                    else
                    {
                        if (numero > 54 && numero <= 86)
                        {
                            cout<<"[Xe] ";
                            for (int i = 46; i < semi.length(); i++)
                            {
                                cout<<semi[i];
                            }
                            
                        }
                        else
                        {
                            if (numero > 86 && numero <= 118)
                            {
                                cout<<"[Rn] ";
                                for (int i = 64; i < semi.length(); i++)
                                {
                                    cout<<semi[i];
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
            
        }
        
        
    }
    
}

void orbitales(string&semi,int&numero)
{
    cout<<"\nOrbitales: \n";
    string num = "  ";
    int start = 0;

    if (numero > 2 && numero <= 10)
    {
        cout<<"[He] ";
        start = 4;
    }
    else
    {
        if (numero > 10 && numero <= 18)
        {
            cout<<"[Ne] ";
            start = 12;
        }
        else
        {
            if (numero > 18 && numero <= 36)
            {
                cout<<"[Ar] ";
                start = 20;
            }
            else
            {
                if (numero > 36 && numero <= 54)
                {
                    cout<<"[Kr] ";
                    start = 33;
                }
                else
                {
                    if (numero > 54 && numero <= 86)
                    {
                        cout<<"[Xe] ";
                        start = 46;
                    }
                    else
                    {
                        if (numero > 86 && numero <= 118)
                        {
                            cout<<"[Rn] ";
                            start = 64;
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
    for (int i = start; i < semi.length(); i++)
    {
        if (semi[i] == ' ')
        {
            for (int j = 0; j < 2; j++)
            {
                if (isdigit(semi[i-j-1]))
                {
                    num[1-j] = semi[i-j-1];
                }
                else
                {
                    num[1-j] = '0';
                }
                
            }

            for (int I = 1; I < atoi(num.c_str()) + 1; I++)
            {
                if (I%2 != 0)
                {
                    cout<<"[1/2|";
                    if (I + 1 > atoi(num.c_str()))
                    {
                        cout<<"   ]";
                    }
                    
                }
                else
                {
                    cout<<"-1/2]";
                }                
            }
            cout<<" ";
            
        }
        num = "";
    }
    
}
//Hola
