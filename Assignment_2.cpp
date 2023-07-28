#include <iostream>

void matrix(int i, int j){
    int A[i][j];
    for(i = 0; i <2; i++){
        for(j = 0; j<2; j++){
            std::cout<<"Enter values : ";
            std::cin>>A[i][j];
        }
    }
            std::cout<<"_________________________"<<std::endl;
            std::cout<<"Displaying matrix"<<std::endl;
            std::cout<<"_________________________"<<std::endl;
            std::cout<<"\n";
    for(i = 0; i <2; i++){
        for(j = 0; j<2; j++){
            std::cout<<"\t"<<A[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
            std::cout<<"\n";
            std::cout<<"_________________________"<<std::endl;
            std::cout<<"Summation of matrix"<<std::endl;
            std::cout<<"_________________________"<<std::endl;
            std::cout<<"\n";
    int sum = 0;
        for(i = 0; i <2; i++){
        for(j = 0; j<2; j++){
             sum += A[i][j];
            std::cout<<sum;
        }

    }
}

int main() {
int i,j;
matrix(i,j);

    return 0;
}