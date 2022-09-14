#include "Controller.h"

Controller::Controller(Service *serv, ClockService *clockServ)
{
    service = serv;
    clockService = clockServ;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    if (strBtn == "modeButton") 
    { 
        service->updateState("modeButton");
    }
    if (strBtn == "clockUpdate") 
    { 
        clockService->updateEvent();
    }
}


// void Controller::updateEvent(std::string strBtn)
// {
//     switch (lightState)
//     {
//     case LIGHT_OFF:
//         if (strBtn == "powerButton") {
//             lightState = LIGHT_1;
//             view->updateState("modeButton");
//         }
//         break;
    
//     case LIGHT_1:
//         if (strBtn == "powerButton") {
//             lightState = LIGHT_2;
//             view->updateState("modeButton");
//         }
//         break;
    
//     case LIGHT_2:
//         if (strBtn == "powerButton") {
//             lightState = LIGHT_3;
//             view->updateState("modeButton");
//         }
//         break;

//     case LIGHT_3:
//         if (strBtn == "powerButton") {
//             lightState = LIGHT_4;
//             view->updateState("modeButton");
//         }
//         break;

//     case LIGHT_4:
//         if (strBtn == "powerButton") {
//             lightState = LIGHT_5;
//             view->updateState("modeButton");
//         }
//         break;

//     case LIGHT_5:
//         if (strBtn == "powerButton") {
//             lightState = LIGHT_OFF;
//             view->updateState("modeButton");
//         }
//         break;

//     }
// }