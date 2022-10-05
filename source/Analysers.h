#ifndef ANALYSERS_H
#define ANALYSERS_H

#include <sstream>

class Voting_Analyser {
public:
    virtual std::string analyse() = 0;
};

class BattleGround_Analyse : Voting_Analyser {
    std::string analyse();
};

class PotentialFraud_Analyser : Voting_Analyser {
    std::string analyse();
};

class PredictedOucome_Analyser : Voting_Analyser {
    std::string analyse();
};

#endif