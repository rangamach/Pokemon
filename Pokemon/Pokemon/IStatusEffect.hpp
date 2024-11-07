class Pokemons;

class IStatusEffect
{
public:
	virtual void ApplyEffect(Pokemons* target_pokemin) = 0;
};