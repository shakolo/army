//
// Created by eVol on 09.03.2017.
//

#ifndef ARMY_UNITISDEADEXCEPTION_HPP
#define ARMY_UNITISDEADEXCEPTION_HPP

#include <iostream>

class UnitIsDeadException {
public:
    std::string message;
    UnitIsDeadException(const std::string text) : message(text) {}
};


#endif //ARMY_UNITISDEADEXCEPTION_HPP
