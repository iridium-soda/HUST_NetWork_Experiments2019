#include "Global.h"
#include "RdtSender.h"
#include "RdtReceiver.h"
#include "GBNRdtReceiver.h"
#include "GBNRdtSender.h"


int main(int argc, char* argv[])
{

	RdtSender *pGBNSender = new GBNRdtSender();
	RdtReceiver *pGBNReceiver = new GBNRdtReceiver();


	pns->init();
	pns->setRtdSender(pGBNSender);
	pns->setRtdReceiver(pGBNReceiver);
	pns->setInputFile("../../input.txt");
	pns->setOutputFile("../../Output.txt");

	pns->start();





	delete pGBNSender;
	delete pGBNReceiver;

	delete pUtils;									//指向唯一的工具类实例，只在main函数结束前delete
	delete pns;										//指向唯一的模拟网络环境类实例，只在main函数结束前delete
	
	return 0;

}

