#include "Global.h"
#include "RdtSender.h"
#include "RdtReceiver.h"
#include "SRRdtReceiver.h"
#include "SRRdtSender.h"



int main(int argc, char* argv[])
{
	RdtReceiver *pSRReceiver = new SRRdtReceiver();
	RdtSender *pSRSender = new SRRdtSender();


	pns->init();
	pns->setRtdSender(pSRSender);
	pns->setRtdReceiver(pSRReceiver);
	pns->setInputFile("../../input.txt");
	pns->setOutputFile("../../Output.txt");


	pns->start();

	delete pSRSender;
	delete pSRReceiver;
	delete pUtils;									//指向唯一的工具类实例，只在main函数结束前delete
	delete pns;										//指向唯一的模拟网络环境类实例，只在main函数结束前delete
	
	return 0;

}

