
// Interface Saisir le nom des Joueurs.h�: fichier d'en-t�te principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CInterfaceSaisirlenomdesJoueursApp�:
// Consultez Interface Saisir le nom des Joueurs.cpp pour l'impl�mentation de cette classe
//

class CInterfaceSaisirlenomdesJoueursApp : public CWinApp
{
public:
	CInterfaceSaisirlenomdesJoueursApp();

// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

	DECLARE_MESSAGE_MAP()
};

extern CInterfaceSaisirlenomdesJoueursApp theApp;