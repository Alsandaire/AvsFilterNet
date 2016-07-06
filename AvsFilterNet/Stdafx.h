// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef STDAFX_H
#define STDAFX_H


#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "avisynth.h"

//using namespace Native;

#include "AvisynthException.h"
#include "FilterNotFoundException.h"
#include "VarNotFoundException.h"

#include "Enumerations.h"
#include "NativeString.h"
#include "VideoInfo.h"
#include "VideoFrame.h"
#include "Clip.h"
#include "AVSValue.h"
#include "ScriptEnvironment.h"
#include "AVSValueCollector.h"


#include "AvisynthFilter.h"
#include "AvisynthFilterNativeStub.h"


#include "AvisynthFilterClassAttribute.h"

#endif