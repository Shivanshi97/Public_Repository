create database SMEcommerce;

use SMEcommerce;
create table retailer(
    rid int primary key,
    rname varchar(50),
    categoryid int,
    raddress varchar(100)
);