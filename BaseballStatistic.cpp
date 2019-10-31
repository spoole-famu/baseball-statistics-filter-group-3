#include "Date.h"
#include <string>
#include "BaseballStatistic.h"

using namespace std;

//Mutators

void BaseballStatistic::setFirstName(string fName){
    firstName = fName;
}

void BaseballStatistic::setLastName(string lName){
    lastName = lName;
}

void BaseballStatistic::setTeamName(string tName){
    teamName = tName;
}

void BaseballStatistic::setJerseyNum(int jNum){
    jerseyNum = jNum;
}

void BaseballStatistic::setPosition(string ps){
    position = ps;
}

void BaseballStatistic::setBatting(char b){
    batting = b;
}

void BaseballStatistic::setThrowing(char t){
    throwing = t;
}

void BaseballStatistic::setAtBats(int atb){
    atBats = atb;
}

void BaseballStatistic::setBattingAverage(double ba){
    battingAverage = ba;
}

void BaseballStatistic::setHR(int homeRun){
    hr = homeRun;
}

void BaseballStatistic::setRBI(int runsBattedIn){
    rbi = runsBattedIn;
}

void BaseballStatistic::setSB(int stolenBase){
    sb = stolenBase;
}

void BaseballStatistic::setOPS(double onBasePlusSlugging){
    ops = onBasePlusSlugging;
}

void BaseballStatistic::setERA(double earnedRunAverage){
    era = earnedRunAverage;
}

	//accessor functions that retrieve each stat from player
		std::string getFirstName()const { return fName; }
		std::string getLastName()const { return lName; };
		std::string getTeamName()const { return tNum; };
		int getJerseyNum()const { return jNum; };
		std::string getPosition()const { return ps; };
		int getAge()const { return age; };
		char getBatting()const { return b; };
		char getThrowing()const { return t; };
		int getAtBats()const { return atb; };
		double getBattingAverage()const { return ba; };
		int getHR()const { return homeRun; };
		int getRBI()const { return runsBattedIn; };
		int getSB()const { return stolenBase; };
		double getOPS()const { return onBasePlusSlugging; } ;
		double getERA()const { return earnedRunAverage; };
		

		//prints a single statistic row to the terminal
		void print()const{
        
        
        };
