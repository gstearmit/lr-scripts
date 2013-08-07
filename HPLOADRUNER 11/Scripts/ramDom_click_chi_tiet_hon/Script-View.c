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
	4	Action:Type "demo" in Tên đăng nhập textbox
	5	Action:Type ●●●●●●●●● in Mật khẩu passwordbox
	6	Action:Type "10002" in Mã cửa hàng textbox
	7	Action:Click on Đăng nhập gridcell
	9	Action:Wait 4 seconds
	10	Action:Click on button button
	12	Action:Evaluate JS var x = Math.floor (11 * Math.random () +5);
window.alert(x);
	13	Action:Wait 6 seconds
	14	Action:If ( x==5 )
	14.1	Action:Click Chon Cua hang
	14.1.1	Action:Click on CỬA HÀNG
	14.1.2	Action:Wait 5 seconds
	14.2	Action:Wait 3 seconds
	14.3	Action:Them moi Hang Hoa
	14.3.1	Action:Click on Hàng hóa
	14.3.2	Action:Click on Thêm mới gridcell
	14.3.4	Action:Type "23456789grrr" in Mã vạch textbox
	14.3.6	Action:Type "quan bo tay" in Tên sản phẩm textbox
	14.3.9	Action:Type "2" in Giá bán textbox
	14.3.10	Action:Type "3" in Giá bán textbox
	14.3.11	Action:Type "0" in Giá bán textbox
	14.3.12	Action:Type "0" in Giá bán textbox
	14.3.13	Action:Type "0" in Giá bán textbox
	14.3.14	Action:Type "0" in Giá bán textbox
	14.3.16	Action:Click on element (81)
	14.3.20	Action:Select "---Quần bò" from Áo Phông listbox
	14.3.23	Action:Type "1" in Giá nhập textbox
	14.3.24	Action:Type "2" in Giá nhập textbox
	14.3.25	Action:Type "3" in Giá nhập textbox
	14.3.26	Action:Type "0" in Giá nhập textbox
	14.3.27	Action:Type "0" in Giá nhập textbox
	14.3.28	Action:Type "0" in Giá nhập textbox
	14.3.29	Action:Type "0" in Giá nhập textbox
	14.3.31	Action:Click on Lưu gridcell
	14.3.32	Action:Click on Lưu gridcell
	14.11	Action:Wait 3 seconds
	14.12	Action:In ma Vach
	14.12.1	Action:Click on Hàng hóa
	14.12.2	Action:Type "aaa" in Tìm kiếm textbox
	14.12.3	Action:Click on Tìm kiếm gridcell
	14.12.8	Action:Click on In mã vạch gridcell
	14.12.12	Action:Type "2" in 1 textbox
	14.12.13	Action:Type "0" in 1 textbox
	14.12.15	Action:Click on Enter gridcell
	14.12.17	Action:Mouse down on In mã vạch gridcell
	14.12.19	Action:Click on In mã vạch gridcell
	14.12.21	Action:Click on OK gridcell
	15	Action:If ( x==6 )
	15.1	Action:Click on KHÁCH HÀNG
	15.2	Action:Evaluate JS ma_khach_hang = LR.getParam("ma_khach_hang");
	15.3	Action:Evaluate JS ten_khach_hang = LR.getParam("ten_khach_hang");
	15.4	Action:Wait 10 seconds
	15.5	Action:Them moi Khach hang
	15.5.1	Action:Click on Khách hàng
	15.5.3	Action:Click on Thêm mới gridcell
	15.5.6	Action:Type ma_khach_hang
 in Mã khách hàng textbox
	15.5.9	Action:Type ten_khach_hang
 in Tên khách hàng textbox
	15.5.12	Action:Type "0978367898" in ĐT di động textbox
	15.5.15	Action:Type "ezmallds@gmail.com" in Email textbox
	15.5.17	Action:Click on Lưu gridcell
	16	Action:If ( x==7 )
	16.1	Action:Click on KHO
	16.2	Action:Wait 10 seconds
	16.3	Action:Them moi - kiem kho
	16.3.1	Action:Click on Thêm mới gridcell
	16.3.3	Action:Wait 4 seconds
	16.3.4	Action:Type "aaa" in Hủy hàng textbox
	16.3.5	Action:Click on 0 AAA gridcell
	16.3.6	Action:Mouse Over
	16.3.6.2	Action:Move mouse over element (230)
	16.3.7	Action:Click on Thêm gridcell
	16.3.9	Action:Click on Thanh toán gridcell
	16.3.11	Action:Click on Thanh toán gridcell
	16.3.13	Action:Click on Đóng gridcell
	16.3.15	Action:Click on Kiểm kho
	16.3.16	Action:Wait 3 seconds
	16.3.17	Action:Click on Thêm mới gridcell
	16.3.19	Action:Type "aa" in Hủy hàng textbox
	16.3.20	Action:Click on 0 AAA gridcell
	16.3.22	Action:Click on Thêm gridcell
	17	Action:If ( x==8 )
	17.1	Action:Click on THU CHI
	17.2	Action:Wait 10 seconds
	17.3	Action:Phieu Thu
	17.3.1	Action:Click on Phiếu thu
	17.3.3	Action:Click on Thêm mới gridcell
	17.3.7	Action:Type "200000000" in 0 textbox
	17.3.10	Action:Type "Hoang Phuc" in Người nộp textbox
	17.3.13	Action:Type "Ha Noi - Cau Giay" in Địa chỉ textbox
	17.3.16	Action:Type "0972607988" in Tên khách hàng textbox
	17.3.18	Action:Click on Lưu gridcell
	17.3.20	Action:Click on Phiếu chi
	18	Action:If ( x==9 )
	18.1	Action:Click on ĐƠN HÀNG
	18.3	Action:Wait 10 seconds
	18.4	Action:Click on Đặt hàng gridcell
	18.6	Action:Type "aaa" in textbox (29) textbox
	18.8	Action:Click on 0 AAA gridcell
	18.9	Action:Mouse Over
	18.9.2	Action:Move mouse over Thêm gridcell
	18.10	Action:Click on Thêm gridcell
	18.12	Action:Click on OK button
	18.14	Action:Click on image (3) image
	18.16	Action:Click on Enter gridcell
	19	Action:If ( x==10 )
	19.1	Action:Click on HÓA ĐƠN
	19.2	Action:Wait 10 seconds
	20	Action:If ( x==11 )
	20.1	Action:Click on BÁO CÁO
	20.2	Action:Wait 10 seconds
	20.6	Action:Click on BC hàng tồn kho
	20.9	Action:Type "aaa" in Tìm kiếm textbox
	20.11	Action:Click on Tìm kiếm gridcell
	20.13	Action:Click on BC xuất nhập tồn
	21	Action:If ( x==12 )
	21.1	Action:Click on CẤU HÌNH
	21.2	Action:Wait 10 seconds
	22	Action:If ( x==13 )
	22.1	Action:Click on BÁO CÁO
	22.2	Action:Wait 10 seconds
	22.6	Action:Click on BC hàng tồn kho
	22.9	Action:Type "aaa" in Tìm kiếm textbox
	22.11	Action:Click on Tìm kiếm gridcell
	22.13	Action:Click on BC xuất nhập tồn
	23	Action:If ( x==14 )
	23.1	Action:Click on HÓA ĐƠN
	23.2	Action:Wait 10 seconds
	24	Action:If ( x==15 )
	24.1	Action:Click on THU CHI
	24.2	Action:Wait 10 seconds
	24.3	Action:Phieu Thu
	24.3.1	Action:Click on Phiếu thu
	24.3.3	Action:Click on Thêm mới gridcell
	24.3.7	Action:Type "200000000" in 0 textbox
	24.3.10	Action:Type "Hoang Phuc" in Người nộp textbox
	24.3.13	Action:Type "Ha Noi - Cau Giay" in Địa chỉ textbox
	24.3.16	Action:Type "0972607988" in Tên khách hàng textbox
	24.3.18	Action:Click on Lưu gridcell
	24.3.20	Action:Click on Phiếu chi
	25	Action:If ( x==16 )
	25.1	Action:Click on KHÁCH HÀNG
	25.2	Action:Evaluate JS ma_khach_hang = LR.getParam("ma_khach_hang");
	25.3	Action:Evaluate JS ten_khach_hang = LR.getParam("ten_khach_hang");
	25.4	Action:Wait 10 seconds
	25.5	Action:Them moi Khach hang
	25.5.1	Action:Click on Khách hàng
	25.5.3	Action:Click on Thêm mới gridcell
	25.5.6	Action:Type ma_khach_hang
 in Mã khách hàng textbox
	25.5.9	Action:Type ten_khach_hang
 in Tên khách hàng textbox
	25.5.12	Action:Type "0978367898" in ĐT di động textbox
	25.5.15	Action:Type "ezmallds@gmail.com" in Email textbox
	25.5.17	Action:Click on Lưu gridcell
	26	Action:Click on Đăng xuất gridcell
*/
};
