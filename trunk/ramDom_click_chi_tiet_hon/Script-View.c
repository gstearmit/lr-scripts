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
	2	Action:Evaluate JS http=LR.getParam("http");
window.alert(http);
	3	Action:Navigate to "http://bo.ezmall.vn/"
	6	Action:Type "demo" in Tên đăng nhập textbox
	7	Action:Type ●●●●●●●●● in Mật khẩu passwordbox
	8	Action:Type "10002" in Mã cửa hàng textbox
	9	Action:Click on Đăng nhập gridcell
	11	Action:Wait 4 seconds
	12	Action:Click on button button
	14	Action:Evaluate JS var x = Math.floor (11 * Math.random () +5);
window.alert(x);
	15	Action:Wait 6 seconds
	16	Action:If ( x==5 )
	16.1	Action:Click Chon Cua hang
	16.1.1	Action:Click on CỬA HÀNG
	16.1.2	Action:Wait 5 seconds
	16.2	Action:Wait 3 seconds
	16.3	Action:Them moi Hang Hoa
	16.3.1	Action:Click on Hàng hóa
	16.3.2	Action:Click on Thêm mới gridcell
	16.3.4	Action:Type "23456789grrr" in Mã vạch textbox
	16.3.6	Action:Type "quan bo tay" in Tên sản phẩm textbox
	16.3.9	Action:Type "2" in Giá bán textbox
	16.3.10	Action:Type "3" in Giá bán textbox
	16.3.11	Action:Type "0" in Giá bán textbox
	16.3.12	Action:Type "0" in Giá bán textbox
	16.3.13	Action:Type "0" in Giá bán textbox
	16.3.14	Action:Type "0" in Giá bán textbox
	16.3.16	Action:Click on element (81)
	16.3.20	Action:Select "---Quần bò" from Áo Phông listbox
	16.3.23	Action:Type "1" in Giá nhập textbox
	16.3.24	Action:Type "2" in Giá nhập textbox
	16.3.25	Action:Type "3" in Giá nhập textbox
	16.3.26	Action:Type "0" in Giá nhập textbox
	16.3.27	Action:Type "0" in Giá nhập textbox
	16.3.28	Action:Type "0" in Giá nhập textbox
	16.3.29	Action:Type "0" in Giá nhập textbox
	16.3.31	Action:Click on Lưu gridcell
	16.3.32	Action:Click on Lưu gridcell
	16.11	Action:Wait 3 seconds
	16.12	Action:In ma Vach
	16.12.1	Action:Click on Hàng hóa
	16.12.2	Action:Type "aaa" in Tìm kiếm textbox
	16.12.3	Action:Click on Tìm kiếm gridcell
	16.12.8	Action:Click on In mã vạch gridcell
	16.12.12	Action:Type "2" in 1 textbox
	16.12.13	Action:Type "0" in 1 textbox
	16.12.15	Action:Click on Enter gridcell
	16.12.17	Action:Mouse down on In mã vạch gridcell
	16.12.19	Action:Click on In mã vạch gridcell
	16.12.21	Action:Click on OK gridcell
	17	Action:If ( x==6 )
	17.1	Action:Click on KHÁCH HÀNG
	17.2	Action:Evaluate JS ma_khach_hang = LR.getParam("ma_khach_hang");
	17.3	Action:Evaluate JS ten_khach_hang = LR.getParam("ten_khach_hang");
	17.4	Action:Wait 10 seconds
	17.5	Action:Them moi Khach hang
	17.5.1	Action:Click on Khách hàng
	17.5.3	Action:Click on Thêm mới gridcell
	17.5.6	Action:Type ma_khach_hang
 in Mã khách hàng textbox
	17.5.9	Action:Type ten_khach_hang
 in Tên khách hàng textbox
	17.5.12	Action:Type "0978367898" in ĐT di động textbox
	17.5.15	Action:Type "ezmallds@gmail.com" in Email textbox
	17.5.17	Action:Click on Lưu gridcell
	18	Action:If ( x==7 )
	18.1	Action:Click on KHO
	18.2	Action:Wait 10 seconds
	18.3	Action:Them moi - kiem kho
	18.3.1	Action:Click on Thêm mới gridcell
	18.3.3	Action:Wait 4 seconds
	18.3.4	Action:Type "aaa" in Hủy hàng textbox
	18.3.5	Action:Click on 0 AAA gridcell
	18.3.6	Action:Mouse Over
	18.3.6.2	Action:Move mouse over element (230)
	18.3.7	Action:Click on Thêm gridcell
	18.3.9	Action:Click on Thanh toán gridcell
	18.3.11	Action:Click on Thanh toán gridcell
	18.3.13	Action:Click on Đóng gridcell
	18.3.15	Action:Click on Kiểm kho
	18.3.16	Action:Wait 3 seconds
	18.3.17	Action:Click on Thêm mới gridcell
	18.3.19	Action:Type "aa" in Hủy hàng textbox
	18.3.20	Action:Click on 0 AAA gridcell
	18.3.22	Action:Click on Thêm gridcell
	19	Action:If ( x==8 )
	19.1	Action:Click on THU CHI
	19.2	Action:Wait 10 seconds
	19.3	Action:Phieu Thu
	19.3.1	Action:Click on Phiếu thu
	19.3.3	Action:Click on Thêm mới gridcell
	19.3.7	Action:Type "200000000" in 0 textbox
	19.3.10	Action:Type "Hoang Phuc" in Người nộp textbox
	19.3.13	Action:Type "Ha Noi - Cau Giay" in Địa chỉ textbox
	19.3.16	Action:Type "0972607988" in Tên khách hàng textbox
	19.3.18	Action:Click on Lưu gridcell
	19.3.20	Action:Click on Phiếu chi
	20	Action:If ( x==9 )
	20.1	Action:Click on ĐƠN HÀNG
	20.3	Action:Wait 10 seconds
	20.4	Action:Click on Đặt hàng gridcell
	20.6	Action:Type "aaa" in textbox (29) textbox
	20.8	Action:Click on 0 AAA gridcell
	20.9	Action:Mouse Over
	20.9.2	Action:Move mouse over Thêm gridcell
	20.10	Action:Click on Thêm gridcell
	20.12	Action:Click on OK button
	20.14	Action:Click on image (3) image
	20.16	Action:Click on Enter gridcell
	21	Action:If ( x==10 )
	21.1	Action:Click on HÓA ĐƠN
	21.2	Action:Wait 10 seconds
	22	Action:If ( x==11 )
	22.1	Action:Click on BÁO CÁO
	22.2	Action:Wait 10 seconds
	22.6	Action:Click on BC hàng tồn kho
	22.9	Action:Type "aaa" in Tìm kiếm textbox
	22.11	Action:Click on Tìm kiếm gridcell
	22.13	Action:Click on BC xuất nhập tồn
	23	Action:If ( x==12 )
	23.1	Action:Click on CẤU HÌNH
	23.2	Action:Wait 10 seconds
	24	Action:If ( x==13 )
	24.1	Action:Click on BÁO CÁO
	24.2	Action:Wait 10 seconds
	24.6	Action:Click on BC hàng tồn kho
	24.9	Action:Type "aaa" in Tìm kiếm textbox
	24.11	Action:Click on Tìm kiếm gridcell
	24.13	Action:Click on BC xuất nhập tồn
	25	Action:If ( x==14 )
	25.1	Action:Click on HÓA ĐƠN
	25.2	Action:Wait 10 seconds
	26	Action:If ( x==15 )
	26.1	Action:Click on THU CHI
	26.2	Action:Wait 10 seconds
	26.3	Action:Phieu Thu
	26.3.1	Action:Click on Phiếu thu
	26.3.3	Action:Click on Thêm mới gridcell
	26.3.7	Action:Type "200000000" in 0 textbox
	26.3.10	Action:Type "Hoang Phuc" in Người nộp textbox
	26.3.13	Action:Type "Ha Noi - Cau Giay" in Địa chỉ textbox
	26.3.16	Action:Type "0972607988" in Tên khách hàng textbox
	26.3.18	Action:Click on Lưu gridcell
	26.3.20	Action:Click on Phiếu chi
	27	Action:If ( x==16 )
	27.1	Action:Click on KHÁCH HÀNG
	27.2	Action:Evaluate JS ma_khach_hang = LR.getParam("ma_khach_hang");
	27.3	Action:Evaluate JS ten_khach_hang = LR.getParam("ten_khach_hang");
	27.4	Action:Wait 10 seconds
	27.5	Action:Them moi Khach hang
	27.5.1	Action:Click on Khách hàng
	27.5.3	Action:Click on Thêm mới gridcell
	27.5.6	Action:Type ma_khach_hang
 in Mã khách hàng textbox
	27.5.9	Action:Type ten_khach_hang
 in Tên khách hàng textbox
	27.5.12	Action:Type "0978367898" in ĐT di động textbox
	27.5.15	Action:Type "ezmallds@gmail.com" in Email textbox
	27.5.17	Action:Click on Lưu gridcell
	28	Action:Click on Đăng xuất gridcell
*/
};
