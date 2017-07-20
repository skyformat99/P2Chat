/********************************************************************
	����:	2016/12/14 11:05:16
	�ļ���:	TCP.h
	����:	BrianYi
	
	��;:	TCP���ӵ�ʵ��
*********************************************************************/
#pragma once
#include "CommonSocket.h"

P2_NAMESPACE_BEG

class TCP :
	public CommonSocket
{
public:
    TCP();
    TCP(const TCP& inTCP);
	~TCP();
	void listen_on_port(const USHORT& inPort);
	int32 connect_to(const Address& inAddress);
	int32 connect_to(const std::string& inIP, const USHORT& inPort);
	TCP accept_client(IOType inIOType = kBlocking);
	int32 send(const char* inContent, const size_t& inSize);
	int32 receive(char* outContent, const size_t& inSize, IOType inIOType = kBlocking);
	Address getAddress(void);
	std::string getIP(void);
	USHORT getPort(void);
protected:
	Address m_address;
};

P2_NAMESPACE_END