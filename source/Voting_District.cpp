#include "Voting_District.h"

District_ID::District_ID(int x, int y) : _x_position(x), _y_position(y) {
}

int District_ID::x() {
    return _x_position;
}

int District_ID::y() {
    return _y_position;
}

// class Voting_District {
// public:
Voting_District::Voting_District() : _population(0), _UAP_Support(0), _APU_Support(0), _Undecided(0) {}

Voting_District::Voting_District(
    District_ID ID,
    int Population,
    double UAP_Support,
    double APU_Support,
    double Undecided
) :
    _ID(ID),
    _population(Population),
    _UAP_Support(UAP_Support),
    _APU_Support(APU_Support),
    _Undecided(Undecided) {}