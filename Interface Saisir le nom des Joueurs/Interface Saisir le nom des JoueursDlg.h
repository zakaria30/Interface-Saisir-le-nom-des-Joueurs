
// Interface Saisir le nom des JoueursDlg.h : fichier d'en-t�te
//

#pragma once


// bo�te de dialogue CInterfaceSaisirlenomdesJoueursDlg
class CInterfaceSaisirlenomdesJoueursDlg : public CDialogEx
{
// Construction
public:
	CInterfaceSaisirlenomdesJoueursDlg(CWnd* pParent = NULL);	// constructeur standard

// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INTERFACESAISIRLENOMDESJOUEURS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Impl�mentation
protected:
	HICON m_hIcon;

	// Fonctions g�n�r�es de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
