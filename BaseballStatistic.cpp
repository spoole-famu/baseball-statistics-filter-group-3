#include "Date.h"
#include <string>
#include "BaseballStatistic.h"

using namespace std;

BaseballStatistic::BaseballStatistic():firstName(""), lastName(""), teamName(""), jerseyNum(0), position(""), atBats(0), hr(0),
rbi(0), batting(""), throwing(""), sb(0), battingAverage(0.0), ops(0.0), era(0.0);
{
    
}
BaseballStatistic::BaseballStatistic(string fName, string lName, string tName, int jersey, string pos, int bats, int homerun, int rBats, 
                                     char b, char t, int s, double bA, int Ops,int Era, int , double, double)
{
    
}

//Mutators

//Set Functions
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

//Get functions

string BaseballStatistic::getFirstName()const{
    return firstName;
}

string BaseballStatistic::getLastName()const{
    return lastName;
}

string BaseballStatistic::getTeamName()const{
    return teamName;
}

int BaseballStatistic::getJerseyNum()const{
    return jerseyNum;
}

string BaseballStatistic::getPosition()const{
    return position;
}

char BaseballStatistic::getBatting()const{
    return batting;
}

char BaseballStatistic::getThrowing()const{
    return throwing;
}

int BaseballStatistic::getAtBats()const{
    return atBats;
}

double BaseballStatistic::getBattingAverage()const{
    return battingAverage;
}

int BaseballStatistic::getHR()const{
    return hr;
}

int BaseballStatistic::getRBI()const{
    return rbi;
}

int BaseballStatistic::getSB()const{
    return sb;
}

double BaseballStatistic::getOPS()const{
    return ops;
}

double BaseballStatistic::getERA()const{
    return era;
}
