
// MFCAsynFileTeacherDlg.h : ͷ�ļ�
//

#pragma once


// CMFCAsynFileTeacherDlg �Ի���
class CMFCAsynFileTeacherDlg : public CDialogEx
{
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
};
