//
// Created by eVol on 08.03.2017.
//

#ifndef ARMY_UNITTYPE_HPP
#define ARMY_UNITTYPE_HPP
#include <iostream>

/* - Soldier [Солдат] : юнит без всяких специальных возможностей
- Rogue [Разбойник] : разбойника невозможно контратаковать
- Berserker [Берсерк] : на берсеркера не действует магия
- Vampire [Вампир] : при атаке / контратаке потребляет часть жизненных сил противника
- Werewolf [Оборотень] : умеет превращаться в волка (в состоянии волка имеет более высокий показатель жизненных сил и атаки, но получает больший урон от магии)
- Wizard [Волшебник] : атакует боевыми заклинаниями (лечебные заклинания имеют только половину силы)
- Healer [Целитель] : владеет целебными заклинаниями (боевые заклинания имеют только половину силы)
- Priest [Священник] : владеет целебными заклинаниями (боевые заклинания имеют только половину силы), наносит x2 урон нежити (Vampire, Necromancer)
- Warlock [Чернокнижник] : призывает демонов (класс Demon немного расширяет класс Soldier)
- Necromancer [Некромант] : следит за всеми кого атаковал, в случае смерти атакованого юнита, получает часть его жизненных сил
 */


class UnitType {
private:
    std::string name;
    int hpmax;
    int damage;

public:

    UnitType(const std::string &name, int hpmax, int damage);

    virtual ~UnitType();

    const std::string &getNameUT() const;

    int getHpmax() const;

    int getDamage() const;
};


#endif //ARMY_UNITTYPE_HPP
