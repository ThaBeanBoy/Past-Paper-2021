#ifndef ANALYSERS_H
#define ANALYSERS_H

#include <sstream>

// Foward declaration
class Voting_Grid;

class Voting_Analyser {
public:
    virtual std::string analyse(const Voting_Grid& Grid) = 0;
};

class BattleGround_Analyse : Voting_Analyser {
    std::string analyse(const Voting_Grid& Grid);
};

class PotentialFraud_Analyser : Voting_Analyser {
    std::string analyse(const Voting_Grid& Grid);
};

class PredictedOucome_Analyser : Voting_Analyser {
    std::string analyse(const Voting_Grid& Grid);
};

#endif