#include "IStatusEffect.hpp"


class ParalyzedEffect : public IStatusEffect
{
private:
	int turns_left;
public:
	void ApplyEffect(Pokemons* target_pokemin) override;

	string GetEffectName(Pokemons* target_pokemon) override;

	bool TurnEndEffect(Pokemons* target_pokemon) override;

	void ClearEffect(Pokemons* target_pokemon) override;
};