#ifndef AFX_STD_9E4DD083_59FA_4C0F_9638_65FB0992BAB8_INCLUDE
#define AFX_STD_9E4DD083_59FA_4C0F_9638_65FB0992BAB8_INCLUDE

#if _MSC_VER >= 1200
#pragma  once
#endif //!_MSC_VER >= 1200

using namespace System;
using namespace System::Runtime::InteropServices;

#include <string>
using namespace std;


//�й��ַ���ת���йܵ�Unicode�ַ���
//���ص�ֵ��Ҫ�ͷ��ڴ�
wchar_t *ManagedStr2UnmanagedUniStr(String^ str);

//���й��ַ���ת�йܵ�Unicode�ַ���
String ^ UnmanagedStr2ManagedUniStr(wchar_t *str);


#endif //!AFX_STD_9E4DD083_59FA_4C0F_9638_65FB0992BAB8_INCLUDE

