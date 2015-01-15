#include <iostream>

void hanoi(int,int,int,int);

int main(int argc, const char * argv[]){
    int num_disc = 0;
    
    std::cout << "Entero el numero de discos: ";
    std::cin >> num_disc;
    
    if (num_disc < 1){
        std::cout << "El numero de discos debe ser > 0" << std::endl;
        return 1;
    }
    
    hanoi(num_disc,1,3,2);
    
    return 0;
}

void hanoi(int n, int x, int y, int z){
    if (n == 1){
        //Mover los discos
        std::cout << n ": " << x << " ---> " << y << std::endl;
    }
    else{
        hanoi(n-1,x,z,y);
        //Mover los discos
        std::cout << n ": " << x << " ---> " << y << std::endl;
        
        hanoi(n-1,z,y,x);
    }
}
