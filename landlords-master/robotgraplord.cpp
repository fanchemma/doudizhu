#include "robotgraplord.h"

RobotGrapLord::RobotGrapLord(Player* player, QObject *parent) : QThread(parent)
{

}

void RobotGrapLord::run()
{

    m_player->thinkCallLord();
}
