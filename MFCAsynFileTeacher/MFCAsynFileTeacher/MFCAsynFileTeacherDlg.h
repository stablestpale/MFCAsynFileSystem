
// MFCAsynFileTeacherDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMFCAsynFileTeacherDlg 对话框
class CMFCAsynFileTeacherDlg : public CDialogEx {
	// 构造
public:
	CMFCAsynFileTeacherDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCASYNFILETEACHER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
