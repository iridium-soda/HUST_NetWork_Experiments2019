#include "Global.h"
#include "RdtSender.h"
#include "RdtReceiver.h"
#include "TCPRdtReceiver.h"
#include "TCPRdtSender.h"
//Remember to use const
//When you re-define a function in derived class with same parameters as in base class then that's called as overriding. Whereas if you re-define that function with different parameter then it would be an attempt to use overloading from you side. But overloading is possible only in class scope. 
//So, in this case corresponding base class function would be hidden.

int main(int argc, char* argv[])
{

	RdtSender *pTCPSender = new TCPRdtSender();
	RdtReceiver *pTCPReceiver = new TCPRdtReceiver();

	pns->init();
	pns->setRtdSender(pTCPSender);
	pns->setRtdReceiver(pTCPReceiver);
	pns->setInputFile("../../input.txt");
	pns->setOutputFile("../../Output.txt");

	pns->start();

	delete pTCPSender;
	delete pTCPReceiver;
	delete pUtils;									//指向唯一的工具类实例，只在main函数结束前delete
	delete pns;										//指向唯一的模拟网络环境类实例，只在main函数结束前delete
	
	return 0;

}
