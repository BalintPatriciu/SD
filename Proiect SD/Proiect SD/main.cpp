#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void start()
{
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                                                   Spanzuratoare.";
    cout<<endl<<"                                                             (Press any key to contiune)";
    getch();
}
char lista_cuvinte[250][250]={
" ",
"electroglotospectrografie",
"pneumonoultramicroscopicsilicovolcaniconicoza",
"difosfopiridinnucleotidpirofosfataza",
"encefalomielopoliradiculonevrita",
"gastropiloroduodenojejunostomie",
"euroobligatiune",
"semiautopropulsatie",
"bildungsromanesc",
"treieratoarei",
"protocromozom",
"degenerescrentele",
"citomegalovirusuri",
"supercalifragilisticexpialidocious",
"dinozaur",
"castan",
"carioci",
"ochelari",
"icoana",
"darapanat",
"castron",
"exteriorizare",
"curtezan",
"parmezan",
"lichior",
"rasina",
"papaia",
"piper",
"irigare",
"depresiv",
"xilofon",
"saxofon",
"cartuse",
"grajdi",
"decenii",
"lucerna",
"patrula",
"telenciclopedie",
"oxigen",
"solidaritate",
"impacientat",
"funingina",
"bibliografie",
"neinteligibil",
"telenciclopedie",
"televiziune",
"streang",
"trunchi",
"ghiont",
"stramt",
"strans",
"strict",
"zbenghi",
"sfincsi",
"prompt",
"transplant",
"masina",
"casa",
"salvare",
"temperament",
"schizofrenic",
"alfabeticeste",
"sternocleidomastoidian",
"electrocardiograma",
"xilofon",
"pneumatic",
"zbenghi",
"transplant",
"coincidenta",
"pupaza",
"destrabalare",
"monetarie",
"latifundiar",
"autoinsamantare",
"opiaceu",
"darapanatura",
"arbitrarietate",
"pneumogastric",
"stupefiant",
"soios",
"bibliologie",
"necuvantatoare",
"complexitate",
"metalurgie",
"electroglotospectrografie",
"feromicroazotombohidric",
"neologism",
"spectru",
"radiografie",
"neindemanatic",
"jargon",
"sintaxa",
"sintagma",
"incapabil",
"necooperant",
"falanga",
"metacarpiene",
"ciclic",
"fotosinteza",
"clorofila",
"neinfricat",
"licarire",
"trapezoid",
"pisiform",
"aureola",
"bolerou",
"nostalgie",
"elocvent",
"regenerator",
"crizantema",
"ombrogen",
"hemocrom",
"romanizare",
"dermatovenerologie",
"memorandum",
"pozomoc",
"pneumatic",
"homodiegetic",
"carburator",
};
struct cuvinte
{
    char cuvant[250],cuvant_litere_lipsa[250];
    int contor_greseli=0,dimensiune_cuvant_litere_lipsa=-1;

}Cuvinte[120];
void spanzuratoare (int contor_greseli)
{char desen[100][100];
cout<<endl<<endl<<endl<<endl<<endl<<endl;


int i,j,x;
///                                                0123456789ABCDEFGHIJ
   ///                                            0   __________
      ///                                         1  |          |
         ///                                      2  |         _|_
            ///                                   3  |        |0_0|
               ///                                4  |         | |
///                                               5  |       __| |__
   ///                                            6  |      /  | |  \
      ///                                         7  |         | |
         ///                                      8  |        /   \
            ///                                   9  |       /     \
               ///                               10  |
                  ///                            11__|__


                 for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';



desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
desen[0][9]='_';desen[6][9]='/';
desen[0][10]='_';desen[5][10]='_';desen[9][10]='/';///A
desen[0][11]='_';desen[3][11]='|';desen[5][11]='_';desen[8][11]='/';///B
desen[0][12]='_';desen[2][12]='_';desen[3][12]='X';desen[4][12]='|';desen[5][12]='|';desen[6][12]='|';desen[7][12]='|';///C
desen[1][13]='|';desen[2][13]='|';desen[3][13]='_';///D
desen[2][14]='_';desen[3][14]='X';desen[4][14]='|';desen[5][14]='|';desen[6][14]='|';desen[7][14]='|';///E
desen[3][15]='|';desen[5][15]='_';desen[8][15]=92;///F
desen[5][16]='_';desen[9][16]=92;///G
desen[6][17]=92;///H

if(contor_greseli==0)
{

    for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';
   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)///51///70
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}


}

if(contor_greseli==1)
{

    for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';

 desen[2][12]='_';  desen[2][14]='_';desen[3][11]='|';desen[3][12]='0';desen[3][13]='_';desen[3][14]='0';desen[3][15]='|';


   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}
}

if(contor_greseli==2)
{
   for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';

  desen[4][12]='|';desen[5][12]='|';desen[6][12]='|';desen[7][12]='|';

  desen[4][14]='|';desen[5][14]='|';desen[6][14]='|';desen[7][14]='|';

 desen[2][12]='_';  desen[2][14]='_';desen[3][11]='|';desen[3][12]='0';desen[3][13]='_';desen[3][14]='0';desen[3][15]='|';


   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}
}


if(contor_greseli==3)
{
   for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';

  desen[4][12]='|';desen[5][12]='|';desen[6][12]='|';desen[7][12]='|';

  desen[4][14]='|';desen[5][14]='|';desen[6][14]='|';desen[7][14]='|';

 desen[2][12]='_';  desen[2][14]='_';desen[3][11]='|';desen[3][12]='0';desen[3][13]='_';desen[3][14]='0';desen[3][15]='|';
desen[6][9]='/';
desen[5][10]='_';desen[5][11]='_';
   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}
}


if(contor_greseli==4)
{
   for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';

  desen[4][12]='|';desen[5][12]='|';desen[6][12]='|';desen[7][12]='|';desen[5][16]='_';

  desen[4][14]='|';desen[5][14]='|';desen[6][14]='|';desen[7][14]='|';desen[6][17]=92;

 desen[2][12]='_';  desen[2][14]='_';desen[3][11]='|';desen[3][12]='0';desen[3][13]='_';desen[3][14]='0';desen[3][15]='|';
desen[6][9]='/';
desen[5][10]='_';desen[5][11]='_';desen[5][15]='_';
   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}
}


if(contor_greseli==5)
{
   for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';

  desen[4][12]='|';desen[5][12]='|';desen[6][12]='|';desen[7][12]='|';desen[5][16]='_';desen[8][11]='/';

  desen[4][14]='|';desen[5][14]='|';desen[6][14]='|';desen[7][14]='|';desen[6][17]=92;

 desen[2][12]='_';  desen[2][14]='_';desen[3][11]='|';desen[3][12]='0';desen[3][13]='_';desen[3][14]='0';desen[3][15]='|';desen[9][10]='/';
desen[6][9]='/';
desen[5][10]='_';desen[5][11]='_';desen[5][15]='_';
   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}
}

if(contor_greseli==6)
{
   for(i=0;i<=12;i++)
   for(j=0;j<=18;j++)
   desen[i][j]=' ';

  desen[4][12]='|';desen[5][12]='|';desen[6][12]='|';desen[7][12]='|';desen[5][16]='_';desen[8][11]='/';desen[9][16]=92;

  desen[4][14]='|';desen[5][14]='|';desen[6][14]='|';desen[7][14]='|';desen[6][17]=92;

 desen[2][12]='_';  desen[2][14]='_';desen[3][11]='|';desen[3][12]='X';desen[3][13]='_';desen[3][14]='X';desen[3][15]='|';desen[9][10]='/';
desen[6][9]='/';desen[8][15]=92;
desen[5][10]='_';desen[5][11]='_';desen[5][15]='_';
   desen[0][10]='_';desen[0][9]='_';
desen[1][13]='|';desen[2][13]='|';desen[0][11]='_';desen[0][12]='_';
    desen[11][0]='_';desen[11][1]='_';
desen[1][2]='|';desen[2][2]='|';desen[3][2]='|';desen[4][2]='|';desen[5][2]='|';desen[6][2]='|';desen[7][2]='|';desen[8][2]='|';desen[9][2]='|';desen[10][2]='|';desen[11][2]='|';
desen[0][3]='_';desen[11][3]='_';
desen[0][4]='_';desen[11][4]='_';
desen[0][5]='_';
desen[0][6]='_';
desen[0][7]='_';
desen[0][8]='_';
for(i=0;i<=11;i++)
   {for(x=1;x<=70;x++)
       cout<<" ";
        for( j=0;j<=17;j++)
  cout<<desen[i][j];
cout<<endl;}
}
//for(i=0;i<=11;i++)
 //   {cout<<"                                                                             ";
 //       for( j=0;j<=17;j++)
//    cout<<desen[i][j];
//cout<<endl;}


}
int random()
{
int random;
srand(time(NULL));
random=rand()%118+1;

  return random;
}
void initializare_cuvant_litere_lipsa_si_modificare_cuvant_original(int contor_cuvinte, cuvinte Cuvinte[120])
{
    char prima_litera,ultima_litera;
    int i;
    prima_litera=Cuvinte[contor_cuvinte].cuvant[0];
    ultima_litera=Cuvinte[contor_cuvinte].cuvant[strlen(Cuvinte[contor_cuvinte].cuvant)-1];
    Cuvinte[contor_cuvinte].cuvant_litere_lipsa[0]=prima_litera;
    Cuvinte[contor_cuvinte].cuvant_litere_lipsa[1]=' ';
    Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa+=2;
    for(i=1;i<strlen(Cuvinte[contor_cuvinte].cuvant)-1;i++)
        if(Cuvinte[contor_cuvinte].cuvant[i]==prima_litera)
       {Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
        Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]=prima_litera;
        Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
        Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]=' ';}
        else if(Cuvinte[contor_cuvinte].cuvant[i]==ultima_litera)
        {
            Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
            Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]=ultima_litera;
            Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
            Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]=' ';
        }
        else
        {Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
            Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]='_';
            Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
            Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]=' ';

        }

    Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
    Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa]=ultima_litera;


///modificare cuvant original a.i. sa fie mai usoara verificarea


int dimensiune;
dimensiune=strlen(Cuvinte[contor_cuvinte].cuvant);
char copie[250];
int dim=0;
for(i=0;i<dimensiune;i++)
{
    copie[dim++]=Cuvinte[contor_cuvinte].cuvant[i];
    if(i!=dimensiune-1)
    copie[dim++]=' ';
}
strcpy(Cuvinte[contor_cuvinte].cuvant,copie);


}
void initializare_cuvant(int contor_cuvinte, cuvinte Cuvinte[120])
{

    strcpy(Cuvinte[contor_cuvinte].cuvant,lista_cuvinte[random()]);



}
void afisare_cuvant_litere_lipsa(cuvinte Cuvinte[120],int contor_cuvinte,char litera,bool corect,bool existent)
{int dimensiune,i;
dimensiune=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
if(dimensiune%2==1)
    for(i=1;i<=72-(dimensiune-1)/2;i++)
    cout<<" ";
else
    for(i=1;i<=72-(dimensiune)/2;i++)
    cout<<" ";
for(i=0;i<=dimensiune;i++)
   if(corect==1&&Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i]==litera)
   {

    SetConsoleTextAttribute(h,1);
       cout<<Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i];
    SetConsoleTextAttribute(h,7);
   }
    else if (existent==1&&Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i]==litera)
    {
        SetConsoleTextAttribute(h,2);
       cout<<Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i];
    SetConsoleTextAttribute(h,7);
    }
    else
    cout<<Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i];

}
bool eroare_citire_litera(char litera)
{

    if(litera<'a'||litera>'z')
        return 0;

    return 1;


}
void citire_litera(char &litera)
{
    int x;
    x=getch();

    litera=x;
}
bool litera_nu_se_afla_in_cuvant(char litera, cuvinte Cuvinte[120],int contor_cuvinte)
{
int dimensiune;
dimensiune=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
int i;

for(i=0;i<=dimensiune;i++)
    if(Cuvinte[contor_cuvinte].cuvant[i]==litera)
    return 1;


    return 0;



}
bool litera_deja_existenta(char litera,cuvinte Cuvinte[120],int contor_cuvinte)
{
    int dimensiune;
    dimensiune=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
int i;

for(i=0;i<=dimensiune;i++)
    if(Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i]==litera)
    return 0;

return 1;


}
void inlocuire(char litera,cuvinte Cuvinte[120],int contor_cuvinte)
{
    int dimensiune;
    dimensiune=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
    int i;
    for(i=0;i<=dimensiune;i++)
        if(litera==Cuvinte[contor_cuvinte].cuvant[i])
        Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i]=litera;
}
bool complet(char litera, cuvinte Cuvinte[120], int contor_cuvinte)
{
    int dimensiune;
    dimensiune=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
    int i;
    for(i=0;i<=dimensiune;i++)
        if(Cuvinte[contor_cuvinte].cuvant[i]!=Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i])
        return 0;


return 1;
}


///SetConsoleTextAttribute(h,13);
 /// 4 rosu
 /// 14 galben
 /// 7 default
///1 albastru
/// 2 verde
///10 verde deschis
/// 72 mijlocul, exact sub spanzuratoare
int main()
{int contor_cuvinte=1,decizie=-1,scor=0,i,dimensiune;
char litera;
bool corect,existent=0;
start();
while(contor_cuvinte<=119&&litera!=27&&decizie!=27)
{
system("cls");
cout<<"Scor: "<<scor;
/// enter pentru urmatorul cuvant, space pentru a incepe din nou, esc pentru a inchide
initializare_cuvant(contor_cuvinte,Cuvinte);
initializare_cuvant_litere_lipsa_si_modificare_cuvant_original(contor_cuvinte,Cuvinte);
cout<<endl;
spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
cout<<endl<<endl;
afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
cout<<endl<<endl;
citire_litera(litera);

while(complet(litera,Cuvinte,contor_cuvinte)==0&&Cuvinte[contor_cuvinte].contor_greseli<6&&litera!=27&&decizie!=27)
{
   if(eroare_citire_litera(litera)==0)
    { system("cls");
    cout<<"Scor: "<<scor;
    cout<<endl;
    spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
    cout<<endl<<endl;
    afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
    cout<<endl<<endl;

    SetConsoleTextAttribute(h,14);
        cout<<"                                                 Nu puteti introduce alt ceva in afara de litere mici!";
    SetConsoleTextAttribute(h,7);


    }

    else if(litera_deja_existenta(litera,Cuvinte,contor_cuvinte)==0)
    {    system("cls");
    existent=1;
    cout<<"Scor: "<<scor;
    cout<<endl;
        spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
    cout<<endl<<endl;
        afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
            cout<<endl<<endl;
SetConsoleTextAttribute(h,2);
cout<<"                                                          Litera se afla deja in cuvant!";///cu galben si literele cu albastru
SetConsoleTextAttribute(h,7);

existent=0;


  ///  citire_litera(litera);
   /// cout<<endl<<endl;
   /// afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte);
    }

    else if(litera_nu_se_afla_in_cuvant(litera,Cuvinte,contor_cuvinte)==0)///cu rosu (mesajul)
    { Cuvinte[contor_cuvinte].contor_greseli++;
        system("cls");
        cout<<"Scor: "<<scor;
     cout<<endl;
    spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
    cout<<endl<<endl;
    afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
    cout<<endl<<endl;
SetConsoleTextAttribute(h,4);
        cout<<"                                                           Litera nu se afla in cuvant!";
SetConsoleTextAttribute(h,7);




    }


else if(complet(litera,Cuvinte,contor_cuvinte)==0&&Cuvinte[contor_cuvinte].contor_greseli<6)
    {inlocuire(litera,Cuvinte,contor_cuvinte);
    corect=1;
    system("cls");
    cout<<"Scor: "<<scor;
    cout<<endl;
spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
cout<<endl<<endl;
afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
cout<<endl<<endl;
    }
    corect=0;
    if(complet(litera,Cuvinte,contor_cuvinte)==0&&Cuvinte[contor_cuvinte].contor_greseli<6)
  citire_litera(litera);
}
decizie=-1;
if(complet(litera,Cuvinte,contor_cuvinte)==1)
    {system("cls");
    cout<<"Scor: "<<++scor;
    cout<<endl;
spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
cout<<endl<<endl;
afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
cout<<endl<<endl;
        cout<<"Press Enter to contiune or Esc to exit.";
        while(decizie!=13&&decizie!=27)
    {
       decizie=getch();
    }
    contor_cuvinte++;
    }
else if(Cuvinte[contor_cuvinte].contor_greseli==6)
{scor=0;
    system("cls");
    cout<<"Scor: "<<scor;
    cout<<endl;
spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
cout<<endl<<endl;
afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte,litera,corect,existent);
cout<<endl<<endl<<endl<<endl;
dimensiune=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
dimensiune+=14;
if(dimensiune%2==1)
    for(i=1;i<=72-(dimensiune-1)/2;i++)
    cout<<" ";
else
    for(i=1;i<=72-(dimensiune)/2;i++)
    cout<<" ";
cout<<"Cuvantul era: ";
for(i=0;i<=Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;i++)
cout<<Cuvinte[contor_cuvinte].cuvant[i];
cout<<endl<<endl;
cout<<"                                                      Press space to restart or Esc to exit.";
while(decizie!=32&&decizie!=27)
{
    decizie=getch();
}

contor_cuvinte++;
}

}
	return 0;

}
