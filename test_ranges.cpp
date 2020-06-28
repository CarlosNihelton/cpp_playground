// This tells Catch to provide a main() - only do this in one cpp file per binary.
#define CATCH_CONFIG_MAIN  
#include <catch2/catch.hpp>

#include <vector>
#include <ranges>
#include <iostream>
 
TEST_CASE("Ranges views just work!", "[ranges]")
{
    std::vector<int> ints{0,1,2,3,4,5};
    std::vector<int> results{0,4,16};

    auto even = [](int i){ return 0 == i % 2; };
    auto square = [](int i) { return i * i; };

    auto filtered = ints | std::views::filter(even) | std::views::transform(square); 
 
    for (int i : filtered){
        std::cout << i << ' ';
    }
    std::cout<<'\n';
    REQUIRE( std::equal(filtered.begin(), filtered.end(), results.begin(), results.end() ) == true);
}
