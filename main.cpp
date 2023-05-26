#include <iostream>
#include <string>
#include <vector>


using namespace std;

class produit{
    private:
int id;
string name;
int quant;
float prix;

    public:
produit(int i,string n,int q,float p):id(i),name(n),quant(q),prix(p){}
produit(){
id=0;
name="AUCUN PRODUIT";
quant=0;
prix=0.0;}

int getID(){
return id;}

string getName(){
return name;}

int getQuant(){
return quant;}

float getPrice(){
return prix;}

void ajouter_produit(produit P[],int nm){

	cout<<"\nEnter the No. of Products that you wish to add: ";
    cin>>nm;

for(int i=0;i<nm;i++){
        cout<<"ENTRER L'ID DU PRODUIT";
	    cin>>P[i].id;
        cout<<"ENTRER LE NOM DU PRODUIT";
	    cin>>P[i].name;
        cout<<"ENTRER LE PRIX DU PRODUIT";
	    cin>>P[i].prix;
        cout<<"ENTRER LA QUANTITE DU PRODUIT";
	    cin>>P[i].quant;
}}

void display_prod(produit P[]){
int nm;
for(int i=0;i<nm;i++){
        cout<<" L'ID DU PRODUIT:"<<P[i].id<<endl;
	    cout<<" NOM DU PRODUIT:"<<P[i].name<<endl;
        cout<<"PRIX DU PRODUIT:"<<P[i].prix<<endl;
        cout<<"QUANTITE DU PRODUIT:"<<P[i].quant<<endl;
}}

void search_produit(produit P[],int ide){
int nm;
    for(int i=0;i<nm;i++){
        if (ide==P[i].id)
                    cout << "\t\tPRODUCT DETAILS\n";
				cout << "PRODUCT NAME:" << P[i].name << "\n";
				cout << "TOTAL UNITS IN STOCK:" << P[i].quant << "\n";
				cout << "UNIT PRRICE:" << P[i].prix << endl;
    }


}
};


int main()
{ int nm,ide;
    produit P;
    produit P1(1,"MILK",100,4.99);
    produit P2(2,"WATER",100,5.99);
    produit P3(3,"JUICE",100,6.99);


	cout<<"\nEnter the No. of Products that you wish to add: ";
    cin>>nm;
    P.ajouter_produit(P,nm);

    P.display_prod(P2);
    cout<<"\nEnter the No. of Products that you wish to search: ";
    cin>>ide;
    P.search_produit(P,ide);






    return 0;
}
