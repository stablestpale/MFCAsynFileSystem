
// MFCAsynFileTeacherDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCAsynFileTeacher.h"
#include "MFCAsynFileTeacherDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCAsynFileTeacherDlg 对话框



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


// CMFCAsynFileTeacherDlg 消息处理程序

BOOL CMFCAsynFileTeacherDlg::OnInitDialog() {
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCAsynFileTeacherDlg::OnPaint() {
	if (IsIconic()) {
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	} else {
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCAsynFileTeacherDlg::OnQueryDragIcon() {
	return static_cast<HCURSOR>(m_hIcon);
}

