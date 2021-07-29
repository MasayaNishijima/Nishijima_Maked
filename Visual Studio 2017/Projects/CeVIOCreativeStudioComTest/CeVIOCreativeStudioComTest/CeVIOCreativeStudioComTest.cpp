#include "stdafx.h"
#include <ObjBase.h>

// �^�C�v���C�u�����C���|�[�g
// �i�^�C�v���C�u�����̓o�^�́A�yCeVIO Creative Studio�z�C���X�g�[�������ɍs���܂��B�j
#import "libid:D3AEA482-B527-4818-8CEA-810AFFCB24B6" named_guids rename_namespace("CeVIO")

int _tmain(int argc, _TCHAR* argv[])
{
	// COM������
	::CoInitialize(NULL);

	// ServiceControl�C���X�^���X����
	CeVIO::IServiceControl *pServiceControl;
	HRESULT result0 = ::CoCreateInstance(CeVIO::CLSID_ServiceControl, NULL, CLSCTX_INPROC_SERVER, CeVIO::IID_IServiceControl, reinterpret_cast<LPVOID *>(&pServiceControl));
	if (FAILED(result0)) {
		// ���s
		::CoUninitialize();
		return 0;
	}

	// �yCeVIO Creative Studio�z�N��
	pServiceControl->StartHost(false);		// �������N���ς݂ŌĂяo�����Ƃ��Ă���肠��܂���B

	// Talker�C���X�^���X����
	CeVIO::ITalker *pTalker;
	HRESULT result1 = ::CoCreateInstance(CeVIO::CLSID_Talker, NULL, CLSCTX_INPROC_SERVER, CeVIO::IID_ITalker, reinterpret_cast<LPVOID *>(&pTalker));
	if (FAILED(result1)) {
		// ���s
		::CoUninitialize();
		return 0;
	}

	// �L���X�g�ݒ�
	pTalker->Cast = "���Ƃ�������";

	// �i��j���ʐݒ�
	pTalker->Volume = 100;

	// �i��j�Đ�
	CeVIO::ISpeakingStatePtr pState = pTalker->Speak("����ɂ���");
	pState->Wait();

	// �i��j���f�f�[�^�擾
	CeVIO::IPhonemeDataArrayPtr pPhonemes = pTalker->GetPhonemes("�͂��߂܂���");

	// Talker���
	pTalker->Release();

	// �yCeVIO Creative Studio�z�I��
	pServiceControl->CloseHost(0);

	// ServiceControl���
	pServiceControl->Release();

	// COM�g�p�I��
	::CoUninitialize();

	return 0;
}