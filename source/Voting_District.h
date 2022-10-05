#ifndef VOTING_DISTRICT_H
#define VOTING_DISTRICT_H

class District_ID {
public:
    District_ID(int x = 0, int y = 0);

    int x();
    int y();

private:
    int _x_position;
    int _y_position;
};

#pragma pack(push)
#pragma pack(1)
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

private:
    District_ID _ID;
    int _population;
    double _UAP_Support;
    double _APU_Support;
    double _Undecided;
};

#pragma pack(pop)

#endif