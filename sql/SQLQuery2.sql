create table nguoidungdanhba(
    ten varchar(100),
    diachi varchar(255),
    ngaysinh date,
    id int primary key
);
create table danhbacuanguoidung(
    dienthoai varchar(15),
    idND int foreign key references nguoidungdanhba(id)
);

drop table nguoidungdanhba;

insert into nguoidungdanhba(ten,diachi,ngaysinh,id)
values ('Nguyen Van An','111 Nguyen Trai, Thanh Xuan, Ha Noi','11/18/87',1);
insert into danhbacuanguoidung(dienthoai,idND)
values (987654321,1),(09873452,1),(09832323,1),(09434343,1);


select * from nguoidungdanhba;
select * from danhbacuanguoidung;

--câu 4:
--a:
select ten from nguoidungdanhba;
--b:
select dienthoai from danhbacuanguoidung;

--câu 5:
--a:
select * from nguoidungdanhba order by ten ASC;
--b:
select * from danhbacuanguoidung where idND in 
(select id from nguoidungdanhba where ten like 'Nguyen Van An');
--c:
select * from nguoidungdanhba where ngaysinh like '12/12/09';

--câu 6:
--a:
select count(dienthoai) as soluongsodienthoai from danhbacuanguoidung;
--b:
select count(*) as songuoitrongdanhbasinhthang12 from danhbacuanguoidung where idND in 
(select id from nguoidungdanhba where ngaysinh like '12');
--c:
select * from nguoidungdanhba a
inner join danhbacuanguoidung b on a.id = b.idND
--d:
select * from nguoidungdanhba a
inner join danhbacuanguoidung b on a.id = b.idND
where dienthoai like 123456789;