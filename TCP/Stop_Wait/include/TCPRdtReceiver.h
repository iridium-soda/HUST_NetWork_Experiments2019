  
#pragma once
#include "RdtReceiver.h"
#include "Global.h"
class TCPRdtReceiver :
	public RdtReceiver
{
private:
	int expectedSeqNum;
	const int seqsize;
	Packet lastAckPkt;

private:
	void Init();

public:
	TCPRdtReceiver(int sSize);
	TCPRdtReceiver();
	virtual ~TCPRdtReceiver();

	void receive(const Packet &packet);
};
