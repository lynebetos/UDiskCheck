
// UDiskCheckDlg.h : 头文件
//

#pragma once


// CUDiskCheckDlg 对话框
class CUDiskCheckDlg : public CDialog
{
// 构造
public:
	CUDiskCheckDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_UDISKCHECK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


public:
	char FirstDriveFromMask( ULONG unitmask )
	{
		char i;

		for (i = 0; i < 26; ++i)
		{
			if (unitmask & 0x1)
				break;
			unitmask = unitmask >> 1;
		}

		return( i + 'A' );
	}



// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnDeviceChange(UINT nEventType, DWORD_PTR dwData);
	DECLARE_MESSAGE_MAP()
};
