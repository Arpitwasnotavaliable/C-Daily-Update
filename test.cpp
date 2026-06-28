#include<iostream>
int main()
{
	
	for(int count=1;count<=100;count++){
		if(count%3==0 & count%5==0){
		std::cout<<"Fizzbuzz"<<std::endl;
}
		else if(count%3==0){
		std::cout<<"Fizz"<<std::endl;
}
		else if(count%5==0){
		std::cout<<"Buzz"<<std::endl;
}
		else{
		std::cout<<count<<std::endl;
}


}
}