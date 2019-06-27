#ifndef PLAYER_H

#define PLAYER_H

#include <string>

class Player

{

    public:

        Player();

        virtual ~Player();

        void setName(std::string n);

        void setScore(int s);

        std::string getName();

        int getScore();


    protected:


    private:

    std::string name;

    int score;

};

#endif // PLAYER_H
