#include <iostream>

//int main() {
//    const double pi = 3.14;
//    int file_size=10; //Snake case
//    int FileSize =10; //Pascal case
//    int fileSize =10; // camel case
//    int iFileSize=10; //Hungarian Notation
//    return 0;
//}

int main() {
    int x=2;
    int y=3;
    int z=x+y;
    std::cout<<z;
    std::cout<<"\n";
    int I = x/y;
    float II=(float )x/(float)y;
    std::cout<<I;
    std::cout<<"\n";
    std::cout<<II;
    std::cout<<"\n";
    std::cout<<I++;
    std::cout<<"\n";
    std::cout<<I;
    std::cout<<"\n";
    std::cout<<++I;
    return 0;
}