//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : SoundManager.h
//  @ Date : 9/27/2012
//  @ Author : 
//
//


#if !defined(_SOUNDMANAGER_H)
#define _SOUNDMANAGER_H

#include "ISound.h"
#include "SoundManagerStatus.h"

class SoundManager
{
public:
	bool init(string configurationFile);
	string getError();
	ISound getSound(string soundName);
	SoundManagerStatus getStatus();
};

#endif  //_SOUNDMANAGER_H
