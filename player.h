#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>

struct Player
{
    std::string _name;
    std::string _pos;
    float _age;
    std::string _team;
    float _gSelected;
    float _gStarted;
    float _minsPlayed;
    float _fgm;
    float _fga;
    float _fgPct;
    float _3pm;
    float _3pa;
    float _3pPct;
    float _2pm;
    float _2pa;
    float _2pPct;
    float _eFG;
    float _ftm;
    float _fta;
    float _ftPct;
    float _orb;
    float _drb;
    float _trb;
    float _ast;
    float _stl;
    float _blk;
    float _tov;
    float _pf;
    float _pts;


    Player(std::string name, std::string pos, float age, std::string team, float gSelected, float gStarted,
           float minsPlayed, float fgm, float fga, float fgPct, float threePM, float threePA,
           float threePPct, float twoPM, float twoPA, float twoPPct, float eFG, float ftm, float fta,
           float ftPct, float orb, float drb, float trb, float ast, float stl, float blk,
           float tov, float pf, float pts);
};