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
	2	Action:Evaluate JS http= LR.getParam("http");
//window.alert(http);
	3	Action:Navigate to http
	6	Action:dang nhap
	6.1	Action:Type "demo" in Tên đăng nhập textbox
	6.3	Action:Type ●●●●●●●●● in Mật khẩu passwordbox
	6.5	Action:Type "10002" in Mã cửa hàng textbox
	6.6	Action:Click on Đăng nhập gridcell
	8	Action:Wait 4 seconds
	9	Action:Click on button (2) button
	10	Action:Wait 6 seconds
	12	Action:pass
	13	Action:CỬA HÀNG
	13.1	Action:Click on CỬA HÀNG
	13.2	Action:Wait 4 seconds
	13.3	Action:them moi Hang Hoa
	13.3.1	Action:Click on Hàng hóa
	13.3.3	Action:Evaluate JS ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	13.3.4	Action:Evaluate JS ten_san_pham = LR.getParam("ten_san_pham");
	13.3.5	Action:Wait 4 seconds
	13.3.6	Action:Click on Thêm mới gridcell
	13.3.8	Action:Type ma_vach_hang_hoa in Mã vạch textbox
	13.3.10	Action:Type ten_san_pham in Tên sản phẩm textbox
	13.3.12	Action:Type "1" in Giá bán textbox
	13.3.13	Action:Type "3" in Giá bán textbox
	13.3.14	Action:Type "0" in Giá bán textbox
	13.3.15	Action:Type "0" in Giá bán textbox
	13.3.16	Action:Type "0" in Giá bán textbox
	13.3.17	Action:Type "0" in Giá bán textbox
	13.3.19	Action:Click on element (246)
	13.3.23	Action:Click on Áo phông không cổ gridcell
	13.3.26	Action:Type "1" in Giá nhập textbox
	13.3.27	Action:Type "2" in Giá nhập textbox
	13.3.28	Action:Type "0" in Giá nhập textbox
	13.3.29	Action:Type "0" in Giá nhập textbox
	13.3.30	Action:Type "0" in Giá nhập textbox
	13.3.31	Action:Type "0" in Giá nhập textbox
	13.3.32	Action:Wait 4 seconds
	13.3.33	Action:Click on Lưu gridcell
	13.3.34	Action:Wait 4 seconds
	13.3.35	Action:Click on Lưu gridcell
	13.3.36	Action:Wait 4 seconds
	13.4	Action:ram dom ngau nghien think time de chuyen sang nhiem vu khac
	13.5	Action:Wait 6 seconds
	13.7	Action:click them nhom hang hoa
	13.7.1	Action:Click on Nhóm hàng hóa
	13.7.3	Action:Wait 10 seconds
	13.7.5	Action:Click on Thêm mới gridcell
	13.7.8	Action:Evaluate JS nhom_hang_hoa = LR.getParam("nhom_hang_hoa");
//window.alert(nhom_hang_hoa);
//ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	13.7.9	Action:Wait 6 seconds
	13.7.10	Action:Type nhom_hang_hoa in Nhóm hàng hóa textbox
	13.7.13	Action:Type "link kien may tinh" in textbox (12) textbox
	13.7.14	Action:Click on Lưu gridcell
	13.7.15	Action:Wait 3 seconds
	13.9	Action:Wait 6 seconds
	14	Action:end Pass
	15	Action:Thao tac voi KHACH HANG
	16	Action:pass khach hàng
	17	Action:KHÁCH HÀNG THAO TÁC
	17.1	Action:Click on KHÁCH HÀNG
	17.2	Action:Wait 5 seconds
	17.3	Action:Click Khanh hang Them moi Khach hang
	17.3.1	Action:Wait 3 seconds
	17.3.2	Action:Click on Khách hàng
	17.3.4	Action:Wait 6 seconds
	17.3.5	Action:Evaluate JS var ma_khach_hang_t = LR.getParam("ma_khach_hang_t");
//window.alert(ma_khach_hang_t);
	17.3.6	Action:Evaluate JS var ten_khach_hang_t = LR.getParam("ten_khach_hang_t");
//window.alert(ten_khach_hang_t);
	17.3.7	Action:Click on Thêm mới gridcell
	17.3.10	Action:Wait 6 seconds
	17.3.11	Action:Type ma_khach_hang_t in Mã khách hàng textbox
	17.3.14	Action:Type ten_khach_hang_t in Tên khách hàng textbox
	17.3.18	Action:Click on ĐT di động textbox
	17.3.22	Action:Type "5468@gmail.com" in Email textbox
	17.3.25	Action:Type "23/09/1986" in Ngày sinh textbox
	17.3.27	Action:Type "Hanoi" in textbox (33) textbox
	17.3.29	Action:Click on Nhóm hàng hóa textbox
	17.3.30	Action:Click on Lưu gridcell
	17.3.31	Action:Wait 4 seconds
	17.3.32	Action:Click on Lưu gridcell
	17.3.34	Action:Wait 6 seconds
	17.4	Action:Click on Nhóm khách hàng
	18	Action:Wait 6 seconds
	19	Action:end pass khách hàng
	20	Action:Thao Tac KHO
	21	Action:Click on KHO
	23	Action:Wait 6 seconds
	24	Action:pass nhap hang
	25	Action:Click nhap hang
	25.1	Action:Click on Nhập hàng
	25.2	Action:Wait 3 seconds
	25.3	Action:Click on Thêm mới gridcell
	25.12	Action:Evaluate JS ma_nhap_hang = LR.getParam("ma_nhap_hang");
//window.alert(ma_nhap_hang);
	25.13	Action:Type ma_nhap_hang in Kiểm kho textbox
	25.15	Action:Click on 2223213 quan bo gridcell
	25.18	Action:Type "quan bo" in Hủy hàng textbox
	25.20	Action:Wait 3 seconds
	25.21	Action:Click on 2223213 quan bo gridcell
	25.22	Action:Click on Thêm gridcell
	25.24	Action:Wait 5 seconds
	25.25	Action:Click on Thanh toán gridcell
	25.27	Action:Wait 3 seconds
	25.28	Action:Click on Thanh toán gridcell
	25.29	Action:Click on Đóng gridcell
	25.30	Action:Wait 3 seconds
	26	Action:Wait 3 seconds
	27	Action:thao tac kiem kho
	27.1	Action:Click on Kiểm kho
	27.2	Action:Wait 3 seconds
	27.3	Action:Click on Thêm mới gridcell
	27.7	Action:Evaluate JS ma_nhap_hang = LR.getParam("ma_nhap_hang");
//window.alert(ma_nhap_hang);
	27.8	Action:Type ma_nhap_hang in Kiểm kho textbox
	27.10	Action:Click on 2223213 quan bo gridcell
	27.11	Action:Wait 5 seconds
	27.12	Action:Click on Thêm gridcell
	27.15	Action:Type "quan" in Chuyển kho nội bộ textbox
	27.17	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	27.19	Action:Click on Thêm gridcell
	28	Action:Wait 3 seconds
	29	Action:THU CHI
	31	Action:Click on THU CHI
	32	Action:Wait 6 seconds
	34	Action:Wait 3 seconds
	35	Action:Click on Phiếu chi
	37	Action:Wait 3 seconds
	38	Action:Click on Nhập công nợ KH đầu kỳ
	40	Action:Wait 3 seconds
	41	Action:Click on Nhập công nợ NCC đầu kỳ
	42	Action:Wait 5 seconds
	43	Action:DON HANG
	45	Action:Click on ĐƠN HÀNG
	48	Action:Wait 6 seconds
	49	Action:Click on Đặt hàng gridcell
	50	Action:Wait 3 seconds
	52	Action:Type "quan" in textbox (30) textbox
	54	Action:Select "2223213-quan bo" from textbox (30) autocomplete
	56	Action:Click on Thêm gridcell
	58	Action:Click on OK button
	59	Action:Mouse Over
	59.2	Action:Move mouse over Ghi nợ gridcell
	60	Action:Click on image image
	61	Action:Wait 5 seconds
	62	Action:HOA DON
	65	Action:Click on HÓA ĐƠN
	66	Action:Wait 10 seconds
	67	Action:BAO CAO
	68	Action:Click on BÁO CÁO
	73	Action:Wait 4 seconds
	74	Action:Click on BC hàng tồn kho
	76	Action:Wait 3 seconds
	77	Action:Type "quan bo" in Giá nhập textbox
	79	Action:Click on Tìm kiếm gridcell
	81	Action:Wait 5 seconds
	82	Action:Click on BC xuất nhập tồn
	83	Action:Wait 3 seconds
	85	Action:pass cau hinh
	86	Action:CAU HINH
	87	Action:Thao tác cấu hình
	87.1	Action:Click on CẤU HÌNH
	87.3	Action:Wait 5 seconds
	87.4	Action:Click on Thông tin cửa hàng
	87.6	Action:Wait 3 seconds
	87.7	Action:Click on Thiết bị pos
	87.9	Action:Click on Cấu hình cửa hàng
	87.10	Action:Wait 6 seconds
	88	Action:end pass cau hinh
	90	Action:Wait 6 seconds
	91	Action:Click on Đăng xuất gridcell
*/
};
