#include "bgmcontrol.h"
#include "playhand.h"

#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QRandomGenerator>
#include <QTimer>

BGMControl::BGMControl(QObject *parent) : QObject(parent)
{

}

void BGMControl::initPlayList()
{

}

void BGMControl::startBGM(int volume)
{

}

void BGMControl::stopBGM()
{

}

void BGMControl::playerRobLordMusic(int point, RoleSex sex, bool isFirst)
{

}

void BGMControl::playCardMusic(Cards cards, bool isFirst, RoleSex sex)
{

}

void BGMControl::playLastMusic(CardType type, RoleSex sex)
{

}

void BGMControl::playPassMusic(RoleSex sex)
{

}

void BGMControl::playAssistMusic(AssistMusic type)
{

}

void BGMControl::stopAssistMusic()
{

}

void BGMControl::playEndingMusic(bool isWin)
{

}
