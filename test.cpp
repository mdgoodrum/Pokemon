#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/json_query.hpp>

using namespace jsoncons;
using namespace jsoncons::jsonpath;

int main()
{
    std::ifstream is("pokemon.json");
    json pokemon;
    is >> pokemon;

    // All books whose author's name starts with Evelyn
    json result1 = json_query(booklist, "$.pokemon.moves[?(@.attack =~ /138.*?/)]");
    std::cout << "(1)\n" << pretty_print(result1) << std::endl;

    // Change the price of "Moby Dick"
    //json_replace(booklist,"$.store.book[?(@.isbn == '0-553-21311-3')].price",10.0);
    //std::cout << "(2)\n" << pretty_print(booklist) << std::endl;

}