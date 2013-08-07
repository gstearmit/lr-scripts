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
	1	Action:Navigate to "http://bo.ezmall.vn/"
	4	Action:dang nhap
	4.1	Action:Type "demo" in Tên đăng nhập textbox
	4.3	Action:Type ●●●●●●●●● in Mật khẩu passwordbox
	4.5	Action:Type "10002" in Mã cửa hàng textbox
	4.6	Action:Click on Đăng nhập gridcell
	6	Action:Wait 4 seconds
	7	Action:Click on button (2) button
	8	Action:Wait 6 seconds
	10	Action:Click on CỬA HÀNG
	11	Action:Wait 4 seconds
	12	Action:them moi Hang Hoa
	12.1	Action:Click on Hàng hóa
	12.3	Action:Evaluate JS ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	12.4	Action:Evaluate JS ten_san_pham = LR.getParam("ten_san_pham");
	12.5	Action:Wait 4 seconds
	12.6	Action:Click on Thêm mới gridcell
	12.8	Action:Type ma_vach_hang_hoa in Mã vạch textbox
	12.10	Action:Type ten_san_pham in Tên sản phẩm textbox
	12.12	Action:Type "1" in Giá bán textbox
	12.13	Action:Type "3" in Giá bán textbox
	12.14	Action:Type "0" in Giá bán textbox
	12.15	Action:Type "0" in Giá bán textbox
	12.16	Action:Type "0" in Giá bán textbox
	12.17	Action:Type "0" in Giá bán textbox
	12.19	Action:Click on element (120)
	12.23	Action:Select "---Áo phông không cổ" from Áo Phông listbox
	12.26	Action:Type "1" in Giá nhập textbox
	12.27	Action:Type "2" in Giá nhập textbox
	12.28	Action:Type "0" in Giá nhập textbox
	12.29	Action:Type "0" in Giá nhập textbox
	12.30	Action:Type "0" in Giá nhập textbox
	12.31	Action:Type "0" in Giá nhập textbox
	12.32	Action:Wait 4 seconds
	12.33	Action:Click on Lưu gridcell
	12.34	Action:Wait 4 seconds
	12.35	Action:Click on Lưu gridcell
	12.36	Action:Wait 4 seconds
	13	Action:ram dom ngau nghien think time de chuyen sang nhiem vu khac
	14	Action:Wait 6 seconds
	16	Action:click them nhom hang hoa
	16.1	Action:Click on Nhóm hàng hóa
	16.3	Action:Wait 10 seconds
	16.5	Action:Click on Thêm mới gridcell
	16.8	Action:Evaluate JS nhom_hang_hoa = LR.getParam("nhom_hang_hoa");
window.alert(nhom_hang_hoa);
//ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	16.9	Action:Wait 6 seconds
	16.10	Action:Type nhom_hang_hoa in Nhóm hàng hóa textbox
	16.13	Action:Type "link kien may tinh" in textbox (33) textbox
	16.14	Action:Click on Lưu gridcell
	16.15	Action:Wait 3 seconds
	18	Action:Wait 6 seconds
	19	Action:Thao tac voi KHACH HANG
	20	Action:Click on KHÁCH HÀNG
	21	Action:Wait 5 seconds
	22	Action:Click Khanh hang Them moi Khach hang
	22.1	Action:Wait 3 seconds
	22.2	Action:Click on Khách hàng
	22.4	Action:Wait 6 seconds
	22.5	Action:Evaluate JS var ma_khach_hang_t = LR.getParam("ma_khach_hang_t");
window.alert(ma_khach_hang_t);
	22.6	Action:Evaluate JS var ten_khach_hang_t = LR.getParam("ten_khach_hang_t");
window.alert(ten_khach_hang_t);
	22.7	Action:Click on Thêm mới gridcell
	22.10	Action:Wait 6 seconds
	22.11	Action:Type ma_khach_hang_t in Mã khách hàng textbox
	22.14	Action:Type ten_khach_hang_t in Tên khách hàng textbox
	22.18	Action:Click on ĐT di động textbox
	22.22	Action:Type "5468@gmail.com" in Email textbox
	22.25	Action:Type "23/09/1986" in Ngày sinh textbox
	22.27	Action:Type "Hanoi" in textbox (33) textbox
	22.29	Action:Click on Nhóm hàng hóa textbox
	22.30	Action:Click on Lưu gridcell
	22.31	Action:Wait 4 seconds
	22.32	Action:Click on Lưu gridcell
	22.34	Action:Wait 6 seconds
	23	Action:Click on Nhóm khách hàng
	24	Action:Wait 6 seconds
	25	Action:Thao Tac KHO
	26	Action:Click on KHO
	28	Action:Wait 6 seconds
	29	Action:loi chua chay nhap hang
	30	Action:Click nhap hang
	30.1	Action:Click on Nhập hàng
	30.2	Action:Wait 3 seconds
	30.3	Action:Click on Thêm mới gridcell
	30.12	Action:Type "quan bo" in Hủy hàng textbox
	30.14	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	30.17	Action:Type "quan bo" in Hủy hàng textbox
	30.19	Action:Wait 3 seconds
	30.20	Action:Click on 2223213 quan bo gridcell
	30.21	Action:Click on Thêm gridcell
	30.23	Action:Wait 5 seconds
	30.24	Action:Click on Thanh toán gridcell
	30.26	Action:Click on Thanh toán gridcell
	30.27	Action:Click on Đóng gridcell
	30.28	Action:Wait 3 seconds
	31	Action:Wait 3 seconds
	32	Action:thao tac kiem kho
	32.1	Action:Click on Kiểm kho
	32.2	Action:Wait 3 seconds
	32.3	Action:Click on Thêm mới gridcell
	32.5	Action:Type "quan" in Hủy hàng textbox
	32.7	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	32.9	Action:Click on Thêm gridcell
	33	Action:Wait 3 seconds
	34	Action:THU CHI
	36	Action:Click on THU CHI
	37	Action:Wait 6 seconds
	39	Action:Wait 3 seconds
	40	Action:Click on Phiếu chi
	42	Action:Wait 3 seconds
	43	Action:Click on Nhập công nợ KH đầu kỳ
	45	Action:Wait 3 seconds
	46	Action:Click on Nhập công nợ NCC đầu kỳ
	47	Action:Wait 5 seconds
	48	Action:DON HANG
	50	Action:Click on ĐƠN HÀNG
	53	Action:Wait 6 seconds
	54	Action:Click on Đặt hàng gridcell
	55	Action:Wait 3 seconds
	57	Action:Type "quan" in textbox (30) textbox
	59	Action:Select "2223213-quan bo" from textbox (30) autocomplete
	61	Action:Click on Thêm gridcell
	63	Action:Click on OK button
	64	Action:Mouse Over
	64.2	Action:Move mouse over Ghi nợ gridcell
	65	Action:Click on image image
	66	Action:Wait 5 seconds
	67	Action:HOA DON
	70	Action:Click on HÓA ĐƠN
	71	Action:Wait 10 seconds
	72	Action:BAO CAO
	73	Action:Click on BÁO CÁO
	78	Action:Wait 4 seconds
	79	Action:Click on BC hàng tồn kho
	81	Action:Wait 3 seconds
	82	Action:Type "quan bo" in Giá nhập textbox
	84	Action:Click on Tìm kiếm gridcell
	86	Action:Wait 5 seconds
	87	Action:Click on BC xuất nhập tồn
	88	Action:Wait 3 seconds
	90	Action:CAU HINH
	91	Action:Click on CẤU HÌNH
	93	Action:Wait 5 seconds
	94	Action:Click on Thông tin cửa hàng
	96	Action:Wait 3 seconds
	97	Action:Click on Thiết bị pos
	99	Action:Click on Cấu hình cửa hàng
	101	Action:Wait 6 seconds
	102	Action:Click on Đăng xuất gridcell
*/
};
