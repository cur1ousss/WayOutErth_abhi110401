#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int rows,columns;
cin>>rows>>columns;

int matrix[rows][columns];
for(int step=0;step<rows;step++){
    for(int term=0;term<columns;term++){
        cin>>matrix[step][term];
    }
    cout<<"\n";
}

cout<<"\n\n";

for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<" "<<matrix[i][j];
    }

    cout<<"\n";
}

cout<<"\n\n";
/*int swap=0;
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){

          cout<<"\n matrix "<<i<<" "<<j<<" is "<<matrix[i][j];  
        swap=matrix[i][j];
            matrix[i][j]=matrix[j][i];
             cout<<"\n matrix "<<i<<" "<<j<<" after swappingn is "<<matrix[i][j];  
           matrix[j][i]=swap;
                 cout<<"\n matrix "<<j<<" "<<i<<" is "<<matrix[j][i];  
    
        cout<<" "<<matrix[i][j];
    }
    cout<<"\n";
}
cout<<"\n\n";

for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<" "<<matrix[i][j];
    }
    cout<<"\n";
}*/

cout<<"\n \n copied soluytion is \n";
for(int i=0;i<columns;i++){
    for(int j=0;j<rows;j++){

        cout<<" "<<matrix[j][i];

    }
    cout<<"\n";
}






cout<<"\n\n";
    return 0;

}