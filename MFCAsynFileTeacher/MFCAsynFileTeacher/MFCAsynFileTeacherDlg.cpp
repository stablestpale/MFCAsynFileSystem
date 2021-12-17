
// MFCAsynFileTeacherDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCAsynFileTeacher.h"
#include "MFCAsynFileTeacherDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCAsynFileTeacherDlg �Ի���



CMFCAsynFileTeacherDlg::CMFCAsynFileTeacherDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCASYNFILETEACHER_DIALOG, pParent), m_char_port(_T("")), m_default_location(_T("")), m_file_port(_T("")), m_ip(_T("")), m_login_port(_T("")), m_sendbuf(_T("")), m_teacher_state(_T("")) {
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCAsynFileTeacherDlg::DoDataExchange(CDataExchange* pDX) {
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHANGE, c_change);
	DDX_Text(pDX, IDC_CHAT_PORT, m_char_port);
	DDX_Control(pDX, IDC_CLIENT, c_client);
	DDX_Control(pDX, IDC_CREATE, c_create);
	DDX_Text(pDX, IDC_DEFAULT_LOCATION, m_default_location);
	DDX_Text(pDX, IDC_FILE_PORT, m_file_port);
	DDX_Text(pDX, IDC_IP, m_ip);
	DDX_Text(pDX, IDC_LOGIN_PORT, m_login_port);
	DDX_Control(pDX, IDC_RECVBUF, c_recvbuf);
	DDX_Control(pDX, IDC_SELECT, c_select);
	DDX_Control(pDX, IDC_SEND, c_send);
	DDX_Text(pDX, IDC_SENDBUF, m_sendbuf);
	DDX_Text(pDX, IDC_TEACHER_STATE, m_teacher_state);
}

BEGIN_MESSAGE_MAP(CMFCAsynFileTeacherDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CMFCAsynFileTeacherDlg ��Ϣ�������

BOOL CMFCAsynFileTeacherDlg::OnInitDialog() {
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFCAsynFileTeacherDlg::OnPaint() {
	if (IsIconic()) {
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	} else {
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFCAsynFileTeacherDlg::OnQueryDragIcon() {
	return static_cast<HCURSOR>(m_hIcon);
}

