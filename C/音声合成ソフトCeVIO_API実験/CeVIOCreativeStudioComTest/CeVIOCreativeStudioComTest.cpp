#include "stdafx.h"
#include <ObjBase.h>

// タイプライブラリインポート
// （タイプライブラリの登録は、【CeVIO Creative Studio】インストールえ時に行われます。）
#import "libid:D3AEA482-B527-4818-8CEA-810AFFCB24B6" named_guids rename_namespace("CeVIO")

int _tmain(int argc, _TCHAR* argv[])
{
	// COM初期化
	::CoInitialize(NULL);

	// ServiceControlインスタンス生成
	CeVIO::IServiceControl *pServiceControl;
	HRESULT result0 = ::CoCreateInstance(CeVIO::CLSID_ServiceControl, NULL, CLSCTX_INPROC_SERVER, CeVIO::IID_IServiceControl, reinterpret_cast<LPVOID *>(&pServiceControl));
	if (FAILED(result0)) {
		// 失敗
		::CoUninitialize();
		return 0;
	}

	// 【CeVIO Creative Studio】起動
	pServiceControl->StartHost(false);		// ※もし起動済みで呼び出したとしても問題ありません。

	// Talkerインスタンス生成
	CeVIO::ITalker *pTalker;
	HRESULT result1 = ::CoCreateInstance(CeVIO::CLSID_Talker, NULL, CLSCTX_INPROC_SERVER, CeVIO::IID_ITalker, reinterpret_cast<LPVOID *>(&pTalker));
	if (FAILED(result1)) {
		// 失敗
		::CoUninitialize();
		return 0;
	}

	// キャスト設定
	pTalker->Cast = "さとうささら";

	// （例）音量設定
	pTalker->Volume = 100;

	// （例）再生
	CeVIO::ISpeakingStatePtr pState = pTalker->Speak("こんにちは");
	pState->Wait();

	// （例）音素データ取得
	CeVIO::IPhonemeDataArrayPtr pPhonemes = pTalker->GetPhonemes("はじめまして");

	// Talker解放
	pTalker->Release();

	// 【CeVIO Creative Studio】終了
	pServiceControl->CloseHost(0);

	// ServiceControl解放
	pServiceControl->Release();

	// COM使用終了
	::CoUninitialize();

	return 0;
}