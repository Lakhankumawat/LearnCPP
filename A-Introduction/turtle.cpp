#include<simplecpp>

main_program{
turtleSim();
cout<< "How many times?";
int i;
int j=1;
cin>> i;
repeat(i){
forward(2);right(2*j);
j++;
}
wait(10);
}
