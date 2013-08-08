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
	12	Action:Click on CỬA HÀNG
	13	Action:Wait 4 seconds
	14	Action:them moi Hang Hoa
	14.1	Action:Click on Hàng hóa
	14.3	Action:Evaluate JS ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	14.4	Action:Evaluate JS ten_san_pham = LR.getParam("ten_san_pham");
	14.5	Action:Wait 4 seconds
	14.6	Action:Click on Thêm mới gridcell
	14.8	Action:Type ma_vach_hang_hoa in Mã vạch textbox
	14.10	Action:Type ten_san_pham in Tên sản phẩm textbox
	14.12	Action:Type "1" in Giá bán textbox
	14.13	Action:Type "3" in Giá bán textbox
	14.14	Action:Type "0" in Giá bán textbox
	14.15	Action:Type "0" in Giá bán textbox
	14.16	Action:Type "0" in Giá bán textbox
	14.17	Action:Type "0" in Giá bán textbox
	14.19	Action:Click on element (120)
	14.23	Action:Select "---Áo phông không cổ" from Áo Phông listbox
	14.26	Action:Type "1" in Giá nhập textbox
	14.27	Action:Type "2" in Giá nhập textbox
	14.28	Action:Type "0" in Giá nhập textbox
	14.29	Action:Type "0" in Giá nhập textbox
	14.30	Action:Type "0" in Giá nhập textbox
	14.31	Action:Type "0" in Giá nhập textbox
	14.32	Action:Wait 4 seconds
	14.33	Action:Click on Lưu gridcell
	14.34	Action:Wait 4 seconds
	14.35	Action:Click on Lưu gridcell
	14.36	Action:Wait 4 seconds
	15	Action:ram dom ngau nghien think time de chuyen sang nhiem vu khac
	16	Action:Wait 6 seconds
	18	Action:click them nhom hang hoa
	18.1	Action:Click on Nhóm hàng hóa
	18.3	Action:Wait 10 seconds
	18.5	Action:Click on Thêm mới gridcell
	18.8	Action:Evaluate JS nhom_hang_hoa = LR.getParam("nhom_hang_hoa");
window.alert(nhom_hang_hoa);
//ma_vach_hang_hoa = LR.getParam("ma_vach_hang_hoa");
	18.9	Action:Wait 6 seconds
	18.10	Action:Type nhom_hang_hoa in Nhóm hàng hóa textbox
	18.13	Action:Type "link kien may tinh" in textbox (33) textbox
	18.14	Action:Click on Lưu gridcell
	18.15	Action:Wait 3 seconds
	20	Action:Wait 6 seconds
	21	Action:Thao tac voi KHACH HANG
	22	Action:Click on KHÁCH HÀNG
	23	Action:Wait 5 seconds
	24	Action:Click Khanh hang Them moi Khach hang
	24.1	Action:Wait 3 seconds
	24.2	Action:Click on Khách hàng
	24.4	Action:Wait 6 seconds
	24.5	Action:Evaluate JS var ma_khach_hang_t = LR.getParam("ma_khach_hang_t");
window.alert(ma_khach_hang_t);
	24.6	Action:Evaluate JS var ten_khach_hang_t = LR.getParam("ten_khach_hang_t");
window.alert(ten_khach_hang_t);
	24.7	Action:Click on Thêm mới gridcell
	24.10	Action:Wait 6 seconds
	24.11	Action:Type ma_khach_hang_t in Mã khách hàng textbox
	24.14	Action:Type ten_khach_hang_t in Tên khách hàng textbox
	24.18	Action:Click on ĐT di động textbox
	24.22	Action:Type "5468@gmail.com" in Email textbox
	24.25	Action:Type "23/09/1986" in Ngày sinh textbox
	24.27	Action:Type "Hanoi" in textbox (33) textbox
	24.29	Action:Click on Nhóm hàng hóa textbox
	24.30	Action:Click on Lưu gridcell
	24.31	Action:Wait 4 seconds
	24.32	Action:Click on Lưu gridcell
	24.34	Action:Wait 6 seconds
	25	Action:Click on Nhóm khách hàng
	26	Action:Wait 6 seconds
	27	Action:Thao Tac KHO
	28	Action:Click on KHO
	30	Action:Wait 6 seconds
	31	Action:loi chua chay nhap hang
	32	Action:Click nhap hang
	32.1	Action:Click on Nhập hàng
	32.2	Action:Wait 3 seconds
	32.3	Action:Click on Thêm mới gridcell
	32.12	Action:Type "quan bo" in Hủy hàng textbox
	32.14	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	32.17	Action:Type "quan bo" in Hủy hàng textbox
	32.19	Action:Wait 3 seconds
	32.20	Action:Click on 2223213 quan bo gridcell
	32.21	Action:Click on Thêm gridcell
	32.23	Action:Wait 5 seconds
	32.24	Action:Click on Thanh toán gridcell
	32.26	Action:Click on Thanh toán gridcell
	32.27	Action:Click on Đóng gridcell
	32.28	Action:Wait 3 seconds
	33	Action:Wait 3 seconds
	34	Action:thao tac kiem kho
	34.1	Action:Click on Kiểm kho
	34.2	Action:Wait 3 seconds
	34.3	Action:Click on Thêm mới gridcell
	34.5	Action:Type "quan" in Hủy hàng textbox
	34.7	Action:Select "2223213-quan bo" from Hủy hàng autocomplete
	34.9	Action:Click on Thêm gridcell
	35	Action:Wait 3 seconds
	36	Action:THU CHI
	38	Action:Click on THU CHI
	39	Action:Wait 6 seconds
	41	Action:Wait 3 seconds
	42	Action:Click on Phiếu chi
	44	Action:Wait 3 seconds
	45	Action:Click on Nhập công nợ KH đầu kỳ
	47	Action:Wait 3 seconds
	48	Action:Click on Nhập công nợ NCC đầu kỳ
	49	Action:Wait 5 seconds
	50	Action:DON HANG
	52	Action:Click on ĐƠN HÀNG
	55	Action:Wait 6 seconds
	56	Action:Click on Đặt hàng gridcell
	57	Action:Wait 3 seconds
	59	Action:Type "quan" in textbox (30) textbox
	61	Action:Select "2223213-quan bo" from textbox (30) autocomplete
	63	Action:Click on Thêm gridcell
	65	Action:Click on OK button
	66	Action:Mouse Over
	66.2	Action:Move mouse over Ghi nợ gridcell
	67	Action:Click on image image
	68	Action:Wait 5 seconds
	69	Action:HOA DON
	72	Action:Click on HÓA ĐƠN
	73	Action:Wait 10 seconds
	74	Action:BAO CAO
	75	Action:Click on BÁO CÁO
	80	Action:Wait 4 seconds
	81	Action:Click on BC hàng tồn kho
	83	Action:Wait 3 seconds
	84	Action:Type "quan bo" in Giá nhập textbox
	86	Action:Click on Tìm kiếm gridcell
	88	Action:Wait 5 seconds
	89	Action:Click on BC xuất nhập tồn
	90	Action:Wait 3 seconds
	92	Action:CAU HINH
	93	Action:Click on CẤU HÌNH
	95	Action:Wait 5 seconds
	96	Action:Click on Thông tin cửa hàng
	98	Action:Wait 3 seconds
	99	Action:Click on Thiết bị pos
	101	Action:Click on Cấu hình cửa hàng
	103	Action:Wait 6 seconds
	104	Action:Click on Đăng xuất gridcell
*/
};
