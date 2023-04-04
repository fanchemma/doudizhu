#include "robotplayhand.h"
#include <QDebug>

RobotPlayHand::RobotPlayHand(Player* player, QObject *parent) : QThread(parent)
{

}

void RobotPlayHand::run()
{

    m_player->thinkPlayHand();
}
