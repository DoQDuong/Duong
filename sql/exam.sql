create table Customer(
CustomerId int primary key,
Name nvarchar(50),
City nvarchar(50),
Country nvarchar(50),
Phone nvarchar(50),
Email nvarchar(50)
);
create table CustomerAccount(
AccountNumber char(9) primary key,
CustomerId int foreign key references Customer(Customerid),
Balance money not null check (Balance>=0),
MinAccount money												
);
create table CustomerTransaction(
TransactionId int primary key,
AccountNumber char(9),
TransactionDate smalldatetime check(transactiondate <=getdate()) default getdate(),
Amount money,
DepositorWithdraw bit
);

insert into Customer(CustomerId,Name,City,Country,Phone,Email)
values ('123456', N'Nguyễn Văn An',N'Hà Nội',N'Việt Nam','0123456789',N'nguyenvanan@gmail.com');

select * from Customer;

insert into CustomerAccount(AccountNumber,CustomerId,Balance,MinAccount)
values ('123456','9','88886666','0');
select * from CustomerAccount;