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
	1	Action:Navigate to "http://bo.ezstore.vn/"
	4	Action:Type "demo" in Tên đăng nhập textbox
	5	Action:Type ●●●●●●●●● in Mật khẩu passwordbox
	6	Action:Type "10002" in Mã cửa hàng textbox
	8	Action:Click on Đăng nhập gridcell
	9	Action:Wait 5 seconds
	11	Action:Click on button button
	13	Action:Wait 8 seconds
	14	Action:Click on KHÁCH HÀNG
	16	Action:Them Moi Khach hang
	16.1	Action:Click on Khách hàng
	16.3	Action:Click on Thêm mới gridcell
	16.6	Action:Wait 3 seconds
	16.7	Action:Evaluate JS ma_khach_hang = LR.getParam("ma_khach_hang");
window.alert(ma_khach_hang);
	16.8	Action:Evaluate JS ten_khach_hang = LR.getParam("ten_khach_hang");
window.alert(ten_khach_hang);
	16.9	Action:Type ma_khach_hang in Mã khách hàng textbox
	16.10	Action:Type ten_khach_hang in Tên khách hàng textbox
	16.12	Action:Type "0972567987" in ĐT di động textbox
	16.15	Action:Type "6573email@gmail.com" in Email textbox
	16.18	Action:Type "27/09/2013" in Ngày sinh textbox
	16.22	Action:Type "Ha Noi" in textbox (10) textbox
	16.24	Action:Type "0487697878" in Điện thoại textbox
	16.25	Action:Wait 3 seconds
	16.27	Action:Click on Lưu gridcell
	16.30	Action:Click on Lưu gridcell
	16.32	Action:Mouse down on Lưu gridcell
	16.33	Action:Click on Lưu gridcell
	16.34	Action:Wait 5 seconds
	18	Action:Wait 8 seconds
	19	Action:Click on Nhóm khách hàng
	20	Action:Wait 6 seconds
	21	Action:Them moi nhom Khach Hang
	21.1	Action:Click on Thêm mới gridcell
	21.3	Action:Evaluate JS nhom_khach_hang = LR.getParam("nhom_khach_hang");
window.alert(nhom_khach_hang);
	21.4	Action:Type nhom_khach_hang in Điện thoại textbox
	21.6	Action:Click on Lưu gridcell
	22	Action:Wait 6 seconds
	23	Action:The Tra Truoc
	23.1	Action:Click on Thẻ trả trước
	23.3	Action:Click on Thêm mới gridcell
	23.5	Action:Type "23456789" in Mã thẻ textbox
	23.9	Action:Type "097685478" in Điện thoại textbox
	23.12	Action:Type "Hoang Phuc" in Tên chủ thẻ textbox
	23.15	Action:Type "phu" in Email textbox
	23.17	Action:Type "c3535@gmail.com" in Email textbox
	23.20	Action:Type ●●●●●●●●●● in Số thẻ passwordbox
	23.27	Action:Type "25/08" in 05/08/2013 textbox
	23.29	Action:Type "25/08/1987" in 05/08/2013 textbox
	23.30	Action:Click on Thêm mới gridcell
*/
};
