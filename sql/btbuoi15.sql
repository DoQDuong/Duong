create table Sach(
    ten nvarchar(50) not null,
    tacgia nvarchar(50) not null,
    noidung ntext not null,
    gia decimal(12,4) not null,
    namxb date not null,
    lanxb int not null,
    soluong int not null,
    ma nvarchar(20) primary key
);
create table LoaiSach(
    ten nvarchar(20) foreign key references Sach(ma),
    idSach int identity(1,1) primary key  
);
create table NXB(
    nxb nvarchar(255) not null,
    diachi nvarchar(255) not null,
    id int identity(1,1) primary key 
);
create table NXB_LoaiSach(
    idLS int foreign key references LoaiSach(idSach),
    idNXB int foreign key references NXB(id)
);

create procedure proc_sach @t nvarchar(50),@tg nvarchar(50),@nd ntext,@g decimal(12,4),@nxb date,@lxb int,@sl int,@m nvarchar(20) as
insert into Sach(ten,tacgia,noidung,gia,namxb,lanxb,soluong,ma)
values  (@t,@tg,@nd,@g,@nxb,@lxb,@sl,@m);
select * from Sach;  

exec proc_sach @t=N'Trí tuệ Do Thái',@tg=N'Eran Katz',@nd=N'Bạn có muốn biết: Người Do Thái 
sáng tạo ra cái gì và nguồn gốc trí tuệ của họ xuất phát từ đâu không? Cuốn sách này sẽ dần
 hé lộ những bí ẩn về sự thông thái của người Do Thái, của một dân tộc thông tuệ với những 
 phương pháp và kỹ thuật phát triển tầng lớp trí thức đã được giữ kín hàng nghìn năm như 
 một bí ẩn mật mang tính văn hóa.',@g=79000,@nxb='2010',@lxb=1,@sl=100,@m=N'B002';

create procedure proc_loaisach @t nvarchar(20) as
insert into LoaiSach(ten)
values (@t);
select * from loaiSach;

exec proc_loaisach @t=N'Khoa Học Xã Hội';

create procedure proc_nxb @nxb nvarchar(255),@dc nvarchar(255) as
insert into NXB(nxb,diachi)
values (@nxb,@dc);
select * from NXB;

exec proc_nxb @nxb=N'Tri Thức',@dc=N'53 Nguyễn Du, Hai Bà Trưng, Hà Nội';

create procedure proc_nxbls @ils int,@inxb int as
insert into NXB_LoaiSach(idLS,idNXB)
values (@ils,@inxb);
select * from NXB_LoaiSach;

exec proc_nxbls @ils='',@inxb='';


--câu3:
select * from Sach where namxb>2008 and namxb<2022;
--câu4:
select top 10 * from Sach order by gia desc;
--câu5:
select ten from Sach where ten like N'%tin học%';
--câu6:
select ten,ma from Sach where ten like N'T%' order by gia desc;
--câu7:
select ten from Sach where ma in 
(select ten from LoaiSach where idSach in 
(select idLS from NXB_LoaiSach where idNXB in 
(select id from NXB where nxb like N'Tri Thức')));
--câu8:
select * from NXB where id in 
(select idNXB from NXB_LoaiSach where idLS in
(select idSach from LoaiSach where ten in
(select ma from Sach where ten like N'Trí tuệ Do Thái')));