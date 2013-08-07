   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   !!                                                                               !!
   !!                    	  PLEASE NOTE											!!
   !!                   	  ===========											!!
   !!                                                                               !!
   !!    This view is a READ-ONLY representation of the script.                     !!
   !!                                                                               !!
   !!    Use the Firefox TruClient sidebar to develop, edit and enhance the script. !!
   !!                                                                               !!
   !!    Select the DEVELOP SCRIPT button to open the Firefox TruClient sidebar.    !!
   !!                                                                               !!
   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


F(){
/*
	1	Action:Wait 3 seconds
	2	Action:Evaluate JS http_truyen_vao = LR.getParam("http_truyen_vao");
//window.alert(http_truyen_vao);
	3	Action:Navigate to http_truyen_vao
	6	Action:Type "demo" in Tên đăng nhập textbox
	6	 Start: dang_nhap
*/
		lr_start_transaction("dang_nhap");
/*
	7	Action:Type ●●●●●●●●● in Mật khẩu passwordbox
	8	Action:Type "10002" in Mã cửa hàng textbox
	10	Action:Click on Đăng nhập gridcell
	10	 End: dang_nhap
	11	Action:Wait 5 seconds
	13	Action:Click on button button
	13	 Start: Con_cua_hang_duy_tan End: Con_cua_hang_duy_tan
*/
		lr_start_transaction("Con_cua_hang_duy_tan");
/*
	15	Action:Wait 8 seconds
	16	Action:Click on KHÁCH HÀNG
	18	Action:Them Moi Khach hang
	18	 Start: them_moi_khach_hang End: them_moi_khach_hang
*/
		lr_start_transaction("them_moi_khach_hang");
/*
	18.1	Action:Click on Khách hàng
	18.3	Action:Click on Thêm mới gridcell
	18.6	Action:Wait 3 seconds
	18.7	Action:Evaluate JS ma_khach_hang = LR.getParam("ma_khach_hang");
//window.alert(ma_khach_hang);
	18.8	Action:Evaluate JS ten_khach_hang = LR.getParam("ten_khach_hang");
//window.alert(ten_khach_hang);
	18.9	Action:Type ma_khach_hang in Mã khách hàng textbox
	18.10	Action:Type ten_khach_hang in Tên khách hàng textbox
	18.12	Action:Type "0972567987" in ĐT di động textbox
	18.15	Action:Type "6573email@gmail.com" in Email textbox
	18.18	Action:Type "27/09/2013" in Ngày sinh textbox
	18.22	Action:Type "Ha Noi" in textbox (10) textbox
	18.24	Action:Type "0487697878" in Điện thoại textbox
	18.25	Action:Wait 3 seconds
	18.27	Action:Click on Lưu gridcell
	18.30	Action:Wait 3 seconds
	18.31	Action:Click on Lưu gridcell
	18.33	Action:Mouse down on Lưu gridcell
	18.34	Action:Click on Lưu gridcell
	18.35	Action:Wait 5 seconds
	20	Action:Wait 8 seconds
	21	Action:Click on Nhóm khách hàng
	22	Action:Wait 6 seconds
	23	Action:Them moi nhom Khach Hang
	23.1	Action:Click on Thêm mới gridcell
	23.3	Action:Evaluate JS nhom_khach_hang = LR.getParam("nhom_khach_hang");
window.alert(nhom_khach_hang);
	23.4	Action:Type nhom_khach_hang in Điện thoại textbox
	23.6	Action:Click on Lưu gridcell
	24	Action:Wait 6 seconds
	25	Action:The Tra Truoc
	25	 Start: The_tra_truoc End: The_tra_truoc
*/
		lr_start_transaction("The_tra_truoc");
/*
	25.1	Action:Click on Thẻ trả trước
	25.2	Action:Wait 6 seconds
	25.4	Action:Click on Thêm mới gridcell
	25.6	Action:Wait 3 seconds
	25.7	Action:Evaluate JS ma_the = LR.getParam("ma_the");
//window.alert(ma_the);
	25.8	Action:Type ma_the in Mã thẻ textbox
	25.12	Action:Type "097685478" in Điện thoại textbox
	25.13	Action:Evaluate JS ten_chu_the = LR.getParam("ten_chu_the");
//window.alert(ten_chu_the);
	25.16	Action:Type ten_chu_the in Tên chủ thẻ textbox
	25.19	Action:Type "phuca5uwi@gmail.com" in Email textbox
	25.20	Action:Evaluate JS so_the = LR.getParam("so_the");
//window.alert(so_the);
	25.24	Action:Type ●●●●●● in Số thẻ passwordbox
	25.32	Action:Type "25/08/1987" in 06/08/2013 textbox
	25.33	Action:Wait 5 seconds
	25.34	Action:Click on Thêm mới gridcell
	25.35	Action:Wait 3 seconds
*/
};
