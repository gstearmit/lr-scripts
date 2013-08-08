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
	13	Action:Click on CỬA HÀNG
	14	Action:Wait 4 seconds
	15	Action:them moi Hang Hoa
	15.1	Action:Click on Hàng hóa
	15.3	Action:Evaluate JS ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	15.4	Action:Evaluate JS ten_san_pham = LR.getParam("ten_san_pham");
	15.5	Action:Wait 4 seconds
	15.6	Action:Click on Thêm mới gridcell
	15.8	Action:Type ma_vach_hang_hoa in Mã vạch textbox
	15.10	Action:Type ten_san_pham in Tên sản phẩm textbox
	15.12	Action:Type "1" in Giá bán textbox
	15.13	Action:Type "3" in Giá bán textbox
	15.14	Action:Type "0" in Giá bán textbox
	15.15	Action:Type "0" in Giá bán textbox
	15.16	Action:Type "0" in Giá bán textbox
	15.17	Action:Type "0" in Giá bán textbox
	15.19	Action:Click on element (246)
	15.23	Action:Click on Áo phông không cổ gridcell
	15.26	Action:Type "1" in Giá nhập textbox
	15.27	Action:Type "2" in Giá nhập textbox
	15.28	Action:Type "0" in Giá nhập textbox
	15.29	Action:Type "0" in Giá nhập textbox
	15.30	Action:Type "0" in Giá nhập textbox
	15.31	Action:Type "0" in Giá nhập textbox
	15.32	Action:Wait 4 seconds
	15.33	Action:Click on Lưu gridcell
	15.34	Action:Wait 4 seconds
	15.35	Action:Click on Lưu gridcell
	15.36	Action:Wait 4 seconds
	16	Action:ram dom ngau nghien think time de chuyen sang nhiem vu khac
	17	Action:Wait 6 seconds
	19	Action:click them nhom hang hoa
	19.1	Action:Click on Nhóm hàng hóa
	19.3	Action:Wait 10 seconds
	19.5	Action:Click on Thêm mới gridcell
	19.8	Action:Evaluate JS nhom_hang_hoa = LR.getParam("nhom_hang_hoa");
//window.alert(nhom_hang_hoa);
//ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	19.9	Action:Wait 6 seconds
	19.10	Action:Type nhom_hang_hoa in Nhóm hàng hóa textbox
	19.13	Action:Type "link kien may tinh" in textbox (12) textbox
	19.14	Action:Click on Lưu gridcell
	19.15	Action:Wait 3 seconds
	21	Action:Wait 6 seconds
	22	Action:end Pass
	23	Action:Thao tac voi KHACH HANG
	24	Action:Click on KHÁCH HÀNG
	25	Action:Wait 5 seconds
	26	Action:Click Khanh hang Them moi Khach hang
	26.1	Action:Wait 3 seconds
	26.2	Action:Click on Khách hàng
	26.4	Action:Wait 6 seconds
	26.5	Action:Evaluate JS var ma_khach_hang_t = LR.getParam("ma_khach_hang_t");
window.alert(ma_khach_hang_t);
	26.6	Action:Evaluate JS var ten_khach_hang_t = LR.getParam("ten_khach_hang_t");
window.alert(ten_khach_hang_t);
	26.7	Action:Click on Thêm mới gridcell
	26.10	Action:Wait 6 seconds
	26.11	Action:Type ma_khach_hang_t in Mã khách hàng textbox
	26.14	Action:Type ten_khach_hang_t in Tên khách hàng textbox
	26.18	Action:Click on ĐT di động textbox
	26.22	Action:Type "5468@gmail.com" in Email textbox
	26.25	Action:Type "23/09/1986" in Ngày sinh textbox
	26.27	Action:Type "Hanoi" in textbox (33) textbox
	26.29	Action:Click on Nhóm hàng hóa textbox
	26.30	Action:Click on Lưu gridcell
	26.31	Action:Wait 4 seconds
	26.32	Action:Click on Lưu gridcell
	26.34	Action:Wait 6 seconds
	27	Action:Click on Nhóm khách hàng
	28	Action:Wait 6 seconds
	29	Action:Thao Tac KHO
	30	Action:Click on KHO
	32	Action:Wait 6 seconds
	33	Action:loi chua chay nhap hang
	34	Action:Click nhap hang
	34.1	Action:Click on Nhập hàng
	34.2	Action:Wait 3 seconds
	34.3	Action:Click on Thêm mới gridcell
	34.12	Action:Type "quan bo" in Hủy hàng textbox
	34.14	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	34.17	Action:Type "quan bo" in Hủy hàng textbox
	34.19	Action:Wait 3 seconds
	34.20	Action:Click on 2223213 quan bo gridcell
	34.21	Action:Click on Thêm gridcell
	34.23	Action:Wait 5 seconds
	34.24	Action:Click on Thanh toán gridcell
	34.26	Action:Click on Thanh toán gridcell
	34.27	Action:Click on Đóng gridcell
	34.28	Action:Wait 3 seconds
	35	Action:Wait 3 seconds
	36	Action:thao tac kiem kho
	36.1	Action:Click on Kiểm kho
	36.2	Action:Wait 3 seconds
	36.3	Action:Click on Thêm mới gridcell
	36.5	Action:Type "quan" in Hủy hàng textbox
	36.7	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	36.9	Action:Click on Thêm gridcell
	37	Action:Wait 3 seconds
	38	Action:THU CHI
	40	Action:Click on THU CHI
	41	Action:Wait 6 seconds
	43	Action:Wait 3 seconds
	44	Action:Click on Phiếu chi
	46	Action:Wait 3 seconds
	47	Action:Click on Nhập công nợ KH đầu kỳ
	49	Action:Wait 3 seconds
	50	Action:Click on Nhập công nợ NCC đầu kỳ
	51	Action:Wait 5 seconds
	52	Action:DON HANG
	54	Action:Click on ĐƠN HÀNG
	57	Action:Wait 6 seconds
	58	Action:Click on Đặt hàng gridcell
	59	Action:Wait 3 seconds
	61	Action:Type "quan" in textbox (30) textbox
	63	Action:Select "2223213-quan bo" from textbox (30) autocomplete
	65	Action:Click on Thêm gridcell
	67	Action:Click on OK button
	68	Action:Mouse Over
	68.2	Action:Move mouse over Ghi nợ gridcell
	69	Action:Click on image image
	70	Action:Wait 5 seconds
	71	Action:HOA DON
	74	Action:Click on HÓA ĐƠN
	75	Action:Wait 10 seconds
	76	Action:BAO CAO
	77	Action:Click on BÁO CÁO
	82	Action:Wait 4 seconds
	83	Action:Click on BC hàng tồn kho
	85	Action:Wait 3 seconds
	86	Action:Type "quan bo" in Giá nhập textbox
	88	Action:Click on Tìm kiếm gridcell
	90	Action:Wait 5 seconds
	91	Action:Click on BC xuất nhập tồn
	92	Action:Wait 3 seconds
	94	Action:CAU HINH
	95	Action:Click on CẤU HÌNH
	97	Action:Wait 5 seconds
	98	Action:Click on Thông tin cửa hàng
	100	Action:Wait 3 seconds
	101	Action:Click on Thiết bị pos
	103	Action:Click on Cấu hình cửa hàng
	105	Action:Wait 6 seconds
	106	Action:Click on Đăng xuất gridcell
*/
};
