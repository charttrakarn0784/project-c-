#include<iostream>
#include<string>

using namespace std;

void tutorial(){
    char pieces;
    cout<<"_____________________________________________________________________\n\n\n";
    cout<<"Bea/Pawn[B]  Ship/Rook[S]  Horse/Knight[H]\n" ;
    cout<<"Cone/Bishop[C]  Med/Queen[M]  Khun/King[K]\n" ;
    cout<<"Exit[E]";
    cout << "\n\n"; //! B,M,C,H,S,K
    cout<<"_____________________________________________________________________\n\n\n";

while(true){
    cout<<"which pieces do you want to know its moves? : ";
    cin>>pieces;
    pieces = toupper(pieces);

    cout<<"_____________________________________________________________________\n\n\n";
    
    //tutorial
    if (pieces == 'B')
    {   
        cout << "Normal\n"; //! X means RIP&TEAR(eat)!!
        cout<<"=====================\n"<<"|   | X | * | X |   |\n"<<"=====================\n"<<"|   |   | B |   |   |\n"<<"=====================\n"<<"|   |   |   |   |   |\n"<<"=====================";    
        cout << "\nFlipped\n";//? F means Flipped Bea
        cout<<"=====================\n"<<"|   | * |   | * |   |\n"<<"=====================\n"<<"|   |   | F |   |   |\n"<<"=====================\n"<<"|   | * |   | * |   |\n"<<"=====================";
    }

    if(pieces == 'M')
    {
        cout<<"=====================\n|   | * |   | * |   |\n=====================\n|   |   | M |   |   |\n=====================\n|   | * |   | * |   |\n=====================\n";

    }

    if(pieces == 'C')
    {
        cout<<"=====================\n|   | * | * | * |   |\n=====================\n|   |   | C |   |   |\n=====================\n|   | * |   | * |   |\n=====================\n";
    }

    if(pieces == 'H')
    {
        cout<<"=====================\n|   | * |   | * |   |\n=====================\n| * |   |   |   | * |\n=====================\n|   |   | H |   |   |\n=====================\n| * |   |   |   | * |\n=====================\n|   | * |   | * |   |\n=====================\n";
    }

    if(pieces == 'S')
    {
        cout<<"=====================\n|   |   | * |   |   |\n=====================\n|   |   | * |   |   |\n=====================\n| * | * | S | * | * |\n=====================\n|   |   | * |   |   |\n=====================\n|   |   | * |   |   |\n=====================\n";
    }

    if(pieces == 'K')
    {
        cout<<"=====================\n|   |   |   |   |   |\n=====================\n|   | * | * | * |   |\n=====================\n|   | * | K | * |   |\n=====================\n|   | * | * | * |   |\n=====================\n|   |   |   |   |   |\n=====================\n";
    }

    if (pieces == 'E'){break;}


    
    cout<<"\n\n_____________________________________________________________________\n\n";
}

}
