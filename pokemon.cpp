
#include <fstream>
using <mscorlib.dll>
using namespace System;
using namespace System::Collections;

class Pokemon() {
    std::string name;
    ArrayList* typing = new ArrayList();
    ArrayList* stats = new ArrayList();
    bool isBurned = false;
    bool isParalyzed = false;
    bool isAsleep = false;
    bool isFrozen = false;
    public:

    Pokemon(string name) {
        name = this.name;
        isBurned = this.isBurned;
        isParalyzed = this.isParalyzed;
        isAsleep = this.isAsleep;
        isFrozen = this.isFrozen;

        std::ifstream pokemon_file("pokemon.json", std::ifstream::binary);
        pokemon_file >> pokemon;

        cout<<pokemon[name]["moves"];
    }

    string getName() {
        return this.name;
    }

    void addMove(Pokemon pokemon, string move) {
        ;   
    }

    bool isFainted(Pokemon pokemon) {
        return pokemon.hp <= 0;
    }

}

main(void) {
    Pokemon abra = new Pokemon("Abra");
}