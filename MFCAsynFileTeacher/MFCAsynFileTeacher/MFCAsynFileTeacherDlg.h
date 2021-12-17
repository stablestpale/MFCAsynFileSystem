
// MFCAsynFileTeacherDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMFCAsynFileTeacherDlg �Ի���
class CMFCAsynFileTeacherDlg : public CDialogEx {
	// ����
public:
	CMFCAsynFileTeacherDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCASYNFILETEACHER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CButton c_change;
	CString m_char_port;
	CListBox c_client;
	CButton c_create;
	CString m_default_location;
	CString m_file_port;
	CString m_ip;
	CString m_login_port;
	CListBox c_recvbuf;
	CButton c_select;
	CButton c_send;
	CString m_sendbuf;
	CString m_teacher_state;
};
