//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_ABILITYWEREWOLF_HPP
#define ARMY_ABILITYWEREWOLF_HPP


#include "Ability.hpp"

class AbilityWerewolf: public Ability {
private:
    bool isWolf;
public:
    bool getIsIsWolf() const;

    void setIsWolf(bool);

    AbilityWerewolf(Unit *owner, double damage, double counterattackDamage);
    void attack(Unit *attacker, Unit *target);
    void counterattack(Unit* counterattacker, Unit *target);
    void transform();
    void infect(Unit* attacker, Unit* target);
};

#endif //ARMY_ABILITYWEREWOLF_HPP
