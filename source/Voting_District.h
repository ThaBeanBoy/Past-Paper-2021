#ifndef VOTING_DISTRICT_H
#define VOTING_DISTRICT_H

class District_ID {
public:
    int x();
    int y();

private:
    int _x_position;
    int _y_position;
};

class Voting_District {
public:
    Voting_District();

    Voting_District(
        District_ID ID,
        int Population,
        double UAP_Support,
        double APU_Support,
        double Undecided
    );

    Voting_District(const Voting_District& CopyFrom);

private:
    District_ID _ID;
    int _population;
    double _UAP_Support;
    double _APU_Support;
    double _Undecided;
};

#endif