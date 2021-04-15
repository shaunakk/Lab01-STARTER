#include "demogData.h"
#include <sstream>

/* print county demographic data */
std::ostream &operator<<(std::ostream &out, const demogData &DD)
{
    out << "County Demographics Info: " << DD.getName() << ", " << DD.getState();
    out << " total population: " << DD.getPop();
    //consider re-writing with getters....
    out << "\nPopulation info: \n(\% over 65): " << DD.getpopOver65();
    out << " Count: "
        << DD.getpopOver65Count();
    out << "\n(\% under 18): " << DD.getpopUnder18();
    out << " Count: "
        << DD.getpopUnder18Count();
    out << "\n(\% under 5): " << DD.getpopUnder5();
    out << " Count: "
        << DD.getpopUnder5Count();
    out << "\nEducation info: ";
    out << "\n(\% Bachelor degree or more): " << DD.getBAup();
    out << " Count: "
        << DD.getBAupCount();
    out << "\n(\% high school or more): " << DD.getHSup();
    out << " Count: "
        << DD.getHSupCount();
    return out;
}
