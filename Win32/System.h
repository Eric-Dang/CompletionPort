//-------------------------------------------------------------------------------------------------
//	Created:	2015-6-23   17:47
//	File Name:	System.h
//	Author:		Eric(ɳӥ)
//	PS:			�������˵�����󣬴���������߼������⣬������⣬������ҡ�лл��
//  Email:		frederick.dang@gmail.com
//	Purpose:	IOCP��Ҫ������һЩϵͳ�ļ�
//-------------------------------------------------------------------------------------------------

#ifdef _WIN32
#include <windows.h>
#include <winsock.h>
#include <WinSock2.h>
#include <stdio.h>
#include <assert.h>
#include <MSWSock.h>

#pragma comment(lib, "Ws2_32.lib")

#endif // _WIN32