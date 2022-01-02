#include <iostream>
#include <vector>



auto filter_palindromes(std::vector<std::string> vec) -> std::vector<std::string>
{
	std::vector<std::string> wyjscie;
	
	for(int i=0; i<vec.size(); i++)
	{
		if(is_palindrome(vec[i]))
		{
			wyjscie.push_back(vec[i]);
		}
	}
	return wyjscie;
}
 auto main() ->int
 {
 	
 	std::vecctor<std::string> vec = {"palindrom", "kajak", "mucha"}, przefiltrowane;
 	
 	przefiltrowane - filter_palindromes(vec);
 	for(int i=0;i<przefiltrowane.size();i++)
 	{
 		std::cout<<przefiltrowane[i]<<" ";
	 }
	return 0;
}
