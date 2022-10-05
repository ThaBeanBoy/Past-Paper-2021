#ifndef VOTING_GRID_H
#define VOTING_GRID_H

#include "Voting_District.h"
#include <vector>
#include "Analysers.h"
#include <iostream>

class Voting_Grid {
public:
    Voting_Grid(/* No args constructor */);

    Voting_Grid(std::string fileName);

    Voting_Grid(const Voting_Grid& CopyFrom);

    ~Voting_Grid();

    void operator= (const Voting_Grid& RHS);

    void operator! ();

    void operator() (int x, int y);

    void loadFromFile(std::string fileName);

    void saveToFile(std::string fileName);

private:
    Voting_District** _Districts;

    std::vector<Voting_Analyser*> _Analysers;
};

#endif